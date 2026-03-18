/*
 * XREFs of bReadUserSystemEUDCRegistry @ 0x140206EE4
 * Callers:
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401C2AA4 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     GetUserEUDCRegistryPath @ 0x1402071F8 (GetUserEUDCRegistryPath.c)
 *     bNotIsKeySymbolicLink @ 0x14022BEA0 (bNotIsKeySymbolicLink.c)
 *     bWriteUserSystemEUDCRegistry @ 0x14030DB0C (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall bReadUserSystemEUDCRegistry(wchar_t *Dst)
{
  WCHAR *v2; // rdi
  WCHAR *v3; // rbx
  int UserEUDCRegistryPath; // esi
  wchar_t *v5; // rsi
  __int64 v6; // rdx
  int v7; // ecx
  __int64 SessionState; // rax
  WCHAR *v10; // [rsp+30h] [rbp-20h] BYREF
  WCHAR *v11; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE v14; // [rsp+A8h] [rbp+58h] BYREF

  v11 = (WCHAR *)Win32AllocPoolZInit(520LL, 1886221383LL);
  v2 = v11;
  if ( !v11 )
    EngSetLastError(8u);
  v10 = (WCHAR *)Win32AllocPoolZInit(520LL, 1886221383LL);
  v3 = v10;
  if ( !v10 )
    EngSetLastError(8u);
  if ( v11 )
  {
    if ( v10 )
    {
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      Handle = 0LL;
      v14 = 0LL;
      *v11 = 0;
      *v3 = 0;
      *(_DWORD *)&DestinationString.Length = 17039360;
      DestinationString.Buffer = v2;
      UserEUDCRegistryPath = GetUserEUDCRegistryPath(v3);
      if ( UserEUDCRegistryPath >= 0 )
      {
        bNotIsKeySymbolicLink(v3, &Handle, &v14);
        UserEUDCRegistryPath = -1073741824;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v14 )
        ZwClose(v14);
      if ( UserEUDCRegistryPath == -1073741772 )
      {
        v5 = wcsrchr(v3, 0x5Cu);
        SessionState = W32GetSessionState(v7, v6);
        if ( v5 )
        {
          if ( !_wcsicmp(v5 + 1, (const wchar_t *)(*(_QWORD *)(SessionState + 96) + 14152LL)) )
          {
            *v5 = 0;
            RtlCreateRegistryKey(0, v3);
            *v5 = 92;
            RtlCreateRegistryKey(0, v3);
            if ( (unsigned int)bWriteUserSystemEUDCRegistry((PVOID)L"EUDC.TTE") )
            {
              RtlInitUnicodeString(&DestinationString, L"EUDC.TTE");
              if ( !wcsncpy_s(Dst, 0x104uLL, DestinationString.Buffer, DestinationString.Length) )
              {
                AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v10);
                AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v11);
                return 1LL;
              }
            }
          }
        }
      }
      Win32FreePool(v3);
      goto LABEL_24;
    }
  }
  else if ( v10 )
  {
    Win32FreePool(v10);
  }
  if ( v11 )
LABEL_24:
    Win32FreePool(v2);
  return 0LL;
}
