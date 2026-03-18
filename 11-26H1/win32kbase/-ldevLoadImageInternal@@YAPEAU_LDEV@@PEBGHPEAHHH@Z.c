/*
 * XREFs of ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1401A2CA0
 * Callers:
 *     ldevLoadImage @ 0x14000CAA0 (ldevLoadImage.c)
 * Callees:
 *     MakeSystemRelativePath @ 0x14000BF40 (MakeSystemRelativePath.c)
 *     ldevTryReferenceLoadedDisplayDriver @ 0x14000C83C (ldevTryReferenceLoadedDisplayDriver.c)
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14002C914 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     FreeSystemRelativePath @ 0x140187828 (FreeSystemRelativePath.c)
 *     MakeSystemDriversRelativePath @ 0x1401A61B0 (MakeSystemDriversRelativePath.c)
 *     wcsrchr @ 0x1401C766C (wcsrchr.c)
 *     _strnicmp @ 0x1401C7790 (_strnicmp.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct _LDEV *__fastcall ldevLoadImageInternal(PCWSTR Source, ULONG a2, int *a3, int a4, int a5)
{
  struct _LDEV *v5; // rbx
  int v7; // esi
  __int64 v10; // r12
  BOOL v11; // r15d
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdi
  SYSTEM_INFORMATION_CLASS v23; // ecx
  NTSTATUS v24; // eax
  NTSTATUS v25; // esi
  wchar_t *v26; // rax
  const WCHAR *v27; // rax
  int v28; // ebx
  char *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  char *v33; // r14
  unsigned int i; // r12d
  _DWORD *j; // rbx
  unsigned int v36; // eax
  char *v37; // rbx
  __int64 AddressOfEntryPoint; // rax
  int v39; // eax
  __int64 v40; // rax
  struct _LDEV *result; // rax
  int v42; // [rsp+20h] [rbp-E0h]
  int v43; // [rsp+20h] [rbp-E0h]
  ULONG ReturnLength; // [rsp+28h] [rbp-D8h] BYREF
  int v45; // [rsp+2Ch] [rbp-D4h]
  UNICODE_STRING String2; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Size[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _STRING AnsiString; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD SystemInformation[76]; // [rsp+70h] [rbp-90h] BYREF

  v5 = 0LL;
  ReturnLength = a2;
  v7 = 0;
  String2 = 0LL;
  *(_QWORD *)Size = a3;
  v45 = a5;
  v10 = a4;
  WdLogSingleEntry3(4LL, Source);
  WdLogGlobalForLineNumber = 998;
  *a3 = 0;
  v11 = a2 == 0;
  if ( !(unsigned int)MakeSystemRelativePath(Source, &String2, v11) )
    goto LABEL_57;
  v13 = 1;
  while ( 1 )
  {
    v14 = *(_QWORD *)(W32GetSessionState(v12) + 88);
    v5 = (struct _LDEV *)ldevTryReferenceLoadedDisplayDriver(&String2, ReturnLength, v45);
    if ( v5 )
    {
      **(_DWORD **)Size = 1;
      goto LABEL_56;
    }
    if ( v10 )
      break;
    if ( !v13 )
    {
      if ( v7 )
      {
        FreeSystemRelativePath((__int64)&String2, v15, v16, v17);
        if ( !(unsigned int)MakeSystemRelativePath(Source, &String2, v11) )
          goto LABEL_56;
      }
      break;
    }
    v13 = 0;
    FreeSystemRelativePath((__int64)&String2, v15, v16, v17);
    if ( !(unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
      break;
    v7 = 1;
  }
  v18 = PALLOCMEM(48LL, 1986292807LL, v16, v17);
  v21 = PALLOCMEM(912LL, 1986292807LL, v19, v20);
  v42 = 1;
  v22 = v21;
  if ( v18 )
  {
    if ( !v21 )
    {
LABEL_51:
      GreDeleteFastMutex((char *)v18, v15, v16, v17);
      goto LABEL_52;
    }
    *(_QWORD *)(v21 + 904) = v21 + 72;
    *(_DWORD *)(v21 + 68) = 0;
    do
    {
      v23 = SystemLoadGdiDriverInformation;
      *(UNICODE_STRING *)v18 = String2;
      *(_DWORD *)(v14 + 1144) = 0;
      if ( !v10 )
        v23 = SystemLoadGdiDriverInSystemSpaceInformation;
      v24 = ZwSetSystemInformation(v23, (PVOID)v18, 0x30uLL);
      v25 = v24;
      if ( v24 >= 0 )
        goto LABEL_46;
      if ( v24 != -1073741554 )
        *(_DWORD *)(v14 + 1144) = 3;
      if ( v10 )
        goto LABEL_49;
      if ( v24 != -1073741772 )
        break;
      if ( !v42 )
        goto LABEL_51;
      v42 = 0;
      FreeSystemRelativePath((__int64)&String2, v15, v16, v17);
    }
    while ( (unsigned int)MakeSystemDriversRelativePath(Source, &String2) );
    if ( v25 != -1073741554 )
      goto LABEL_49;
    memset(SystemInformation, 0, sizeof(SystemInformation));
    ReturnLength = 0;
    v43 = 0;
    AnsiString = 0LL;
    DestinationString = 0LL;
    v26 = wcsrchr(Source, 0x5Cu);
    v27 = v26 ? v26 + 1 : Source;
    RtlInitUnicodeString(&DestinationString, v27);
    v25 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
    if ( v25 < 0 )
    {
LABEL_49:
      if ( v25 == -1073741702 )
        DrvLogDisplayDriverEvent(3LL);
      goto LABEL_51;
    }
    v25 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
    if ( (int)(v25 + 0x80000000) < 0 || v25 == -1073741820 )
    {
      v28 = 296 * SystemInformation[0];
      v29 = (char *)PALLOCNOZ(296 * SystemInformation[0] + 8, 0x706D7447u);
      v33 = v29;
      if ( v29 )
      {
        v25 = ZwQuerySystemInformation(SystemModuleInformation, v29, v28 + 8, &ReturnLength);
        if ( v25 >= 0 )
        {
          for ( i = 0; i < *(_DWORD *)v33; ++i )
          {
            if ( !strnicmp(
                    &v33[296 * i + 48 + *(unsigned __int16 *)&v33[296 * i + 46]],
                    AnsiString.Buffer,
                    AnsiString.Length) )
            {
              v43 = 0;
              Size[0] = 0;
              for ( j = RtlImageDirectoryEntryToData(gpvWin32kImageBase, 1u, 1u, Size); j; j += 5 )
              {
                v36 = j[3];
                if ( !v36 || !*j )
                  break;
                if ( !strnicmp((const char *)gpvWin32kImageBase + v36, AnsiString.Buffer, AnsiString.Length) )
                {
                  v43 = 1;
                  v37 = *(char **)&v33[296 * i + 24];
                  AddressOfEntryPoint = RtlImageNtHeader(v37)->OptionalHeader.AddressOfEntryPoint;
                  *(_QWORD *)(v18 + 16) = v37;
                  *(_QWORD *)(v18 + 32) = &v37[AddressOfEntryPoint];
                  *(_QWORD *)(v18 + 24) = 0LL;
                  goto LABEL_42;
                }
              }
              goto LABEL_42;
            }
          }
        }
      }
      else
      {
LABEL_42:
        if ( !v33 )
          goto LABEL_44;
      }
      GreDeleteFastMutex(v33, v30, v31, v32);
    }
LABEL_44:
    RtlFreeAnsiString(&AnsiString);
    if ( v43 )
    {
      *(_DWORD *)(v22 + 40) |= 2u;
LABEL_46:
      v39 = v45;
      *(_QWORD *)(v22 + 16) = v18;
      *(_DWORD *)(v22 + 36) = 1;
      *(_DWORD *)(v22 + 32) = 5;
      *(_DWORD *)(v22 + 64) = -1;
      *(_DWORD *)(v22 + 40) = (4 * v39) ^ (*(_DWORD *)(v22 + 40) ^ (4 * v39)) & 0xFFFFFFFB;
      v40 = *(_QWORD *)(v14 + 1816);
      if ( v40 )
        *(_QWORD *)(v40 + 8) = v22;
      *(_QWORD *)v22 = *(_QWORD *)(v14 + 1816);
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v14 + 1816) = v22;
      WdLogSingleEntry1(5LL, v22);
      result = (struct _LDEV *)v22;
      WdLogGlobalForLineNumber = 1166;
      return result;
    }
    goto LABEL_49;
  }
LABEL_52:
  if ( v22 )
    GreDeleteFastMutex((char *)v22, v15, v16, v17);
  v5 = 0LL;
LABEL_56:
  FreeSystemRelativePath((__int64)&String2, v15, v16, v17);
LABEL_57:
  WdLogSingleEntry1(5LL, v5);
  result = v5;
  WdLogGlobalForLineNumber = 1368;
  return result;
}
