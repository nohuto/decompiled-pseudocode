/*
 * XREFs of LdrpGetModuleName @ 0x180033E20
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180033C20 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x1800F8E40 (LdrQueryModuleInfoFromLdrEntry32.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180032E30 (RtlGetNtSystemRoot.c)
 *     RtlUnicodeStringToAnsiString @ 0x1800344C0 (RtlUnicodeStringToAnsiString.c)
 *     RtlWow64GetProcessMachines @ 0x180034FB0 (RtlWow64GetProcessMachines.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180035310 (RtlReplaceSystemDirectoryInPath.c)
 *     _wcsnicmp @ 0x180129080 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall LdrpGetModuleName(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rcx
  unsigned __int16 v6; // bx
  bool v7; // cf
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, __int64, wchar_t *, _QWORD, _QWORD *); // rax
  NTSTATUS result; // eax
  char *v13; // rax
  char *v14; // rcx
  __int16 v15; // dx
  __int16 v16; // r9
  bool v17; // zf
  const wchar_t *NtSystemRoot; // rax
  __int64 v19; // rcx
  size_t v20; // rdi
  __int64 v21; // rcx
  _WORD v22[8]; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t String1[264]; // [rsp+70h] [rbp-90h] BYREF

  v5 = *a1;
  v6 = 512;
  v7 = *(_WORD *)a2 < 0x200u;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  if ( v7 )
    v6 = *(_WORD *)a2;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = (__int64 (__fastcall *)(__int64, __int64, wchar_t *, _QWORD, _QWORD *))a1[1];
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v22[0] = 0;
  v24[0] = 0LL;
  result = v11(v5, v10, String1, v6, v24);
  if ( result >= 0 )
  {
    if ( v24[0] == v6 )
    {
      String1[256] = 0;
      if ( !a4 )
        goto LABEL_6;
      NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
      v19 = -1LL;
      do
        ++v19;
      while ( NtSystemRoot[v19] );
      if ( !v19 )
        return -1073741595;
      v20 = v19 - 1;
      if ( NtSystemRoot[v19 - 1] != 92 )
        v20 = v19;
      if ( wcsnicmp(String1, NtSystemRoot, v20) || wcsnicmp(&String1[v20], L"\\system32", 9uLL) )
        goto LABEL_6;
      if ( v20 + 16 >= 0x101 )
        return -1073741595;
      v21 = *a1;
      if ( !*a1 )
        v21 = -1LL;
      if ( (int)RtlWow64GetProcessMachines(v21, v22, 0LL) >= 0
        && (SourceString.Buffer = String1,
            SourceString.MaximumLength = v6,
            SourceString.Length = v6,
            HIDWORD(v24[0]) = *(_DWORD *)(&SourceString.MaximumLength + 1),
            LOWORD(v24[0]) = v6 - 2 * v20,
            WORD1(v24[0]) = v24[0],
            v24[1] = &String1[v20],
            (int)RtlReplaceSystemDirectoryInPath(v24, 1LL, v22[0], 0LL) >= 0) )
      {
LABEL_6:
        SourceString.MaximumLength = v6;
        SourceString.Buffer = String1;
        SourceString.Length = v6;
        DestinationString.Buffer = (char *)(a3 + 40);
        *(_DWORD *)&DestinationString.Length = 0x1000000;
        result = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
        if ( result >= 0 )
        {
          v13 = &DestinationString.Buffer[DestinationString.Length];
          v14 = v13;
          v15 = LOWORD(DestinationString.Buffer) + DestinationString.Length;
          while ( 1 )
          {
            v16 = (__int16)v14;
            if ( v13 <= DestinationString.Buffer )
              break;
            v17 = *(v14 - 1) == 92;
            v13 = v14 - 1;
            v14 = v13;
            v15 = (__int16)v13;
            if ( v17 )
            {
              v15 = v16;
              break;
            }
          }
          *(_WORD *)(a3 + 38) = v15 - LOWORD(DestinationString.Buffer);
          return 0;
        }
      }
      else
      {
        return -1073741595;
      }
    }
    else
    {
      return -2147483635;
    }
  }
  return result;
}
