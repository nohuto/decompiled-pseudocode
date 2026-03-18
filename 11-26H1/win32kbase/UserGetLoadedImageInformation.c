/*
 * XREFs of UserGetLoadedImageInformation @ 0x1401D9CF0
 * Callers:
 *     ivrLoadImage @ 0x14021FD7C (ivrLoadImage.c)
 *     ?FindHotpatchImageIfExists@@YA?AVLOGGED_NTSTATUS@@KKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z @ 0x1402F3310 (-FindHotpatchImageIfExists@@YA-AVLOGGED_NTSTATUS@@KKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     wcsrchr @ 0x1401C766C (wcsrchr.c)
 *     _strnicmp @ 0x1401C7790 (_strnicmp.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall UserGetLoadedImageInformation(wchar_t *Str, _QWORD *a2)
{
  unsigned int v4; // edi
  wchar_t *v5; // rax
  const WCHAR *v6; // rax
  NTSTATUS v7; // ecx
  char *v8; // rax
  char *v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int i; // ebx
  __int64 v15; // r14
  char *v16; // rbx
  __int64 AddressOfEntryPoint; // rax
  ULONG ReturnLength; // [rsp+20h] [rbp-E0h] BYREF
  struct _STRING AnsiString; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE SystemInformation[304]; // [rsp+50h] [rbp-B0h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  v4 = 0;
  ReturnLength = 0;
  AnsiString = 0LL;
  DestinationString = 0LL;
  v5 = wcsrchr(Str, 0x5Cu);
  if ( v5 )
    v6 = v5 + 1;
  else
    v6 = Str;
  RtlInitUnicodeString(&DestinationString, v6);
  if ( RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u) >= 0 )
  {
    v7 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741820 )
    {
      while ( 1 )
      {
        v8 = (char *)Win32AllocPoolZInitImpl(256LL, ReturnLength, 0x6C647355u);
        v9 = v8;
        if ( !v8 )
          break;
        v10 = ZwQuerySystemInformation(SystemModuleInformation, v8, ReturnLength, &ReturnLength);
        if ( v10 != -1073741820 )
        {
          if ( v10 >= 0 )
          {
            for ( i = 0; i < *(_DWORD *)v9; ++i )
            {
              v15 = 296LL * i;
              if ( !strnicmp(&v9[v15 + 48 + *(unsigned __int16 *)&v9[v15 + 46]], AnsiString.Buffer, AnsiString.Length) )
              {
                _mm_lfence();
                v16 = *(char **)&v9[v15 + 24];
                AddressOfEntryPoint = RtlImageNtHeader(v16)->OptionalHeader.AddressOfEntryPoint;
                a2[3] = 0LL;
                a2[4] = &v16[AddressOfEntryPoint];
                v4 = 1;
                a2[2] = v16;
                break;
              }
            }
          }
          GreDeleteFastMutex(v9, v11, v12, v13);
          break;
        }
        GreDeleteFastMutex(v9, v11, v12, v13);
      }
    }
    RtlFreeAnsiString(&AnsiString);
  }
  return v4;
}
