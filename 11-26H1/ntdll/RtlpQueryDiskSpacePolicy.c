/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x18015AB18
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18010F510 (RtlQueryResourcePolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x180056694 (StringCbPrintfW.c)
 *     RtlStringLengthWorkerW_0 @ 0x1800EA268 (RtlStringLengthWorkerW_0.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18015AC68 (RtlpQueryDiskSpacePolicyByHandle.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwCreateFile @ 0x18015F9E0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, __int64 a2)
{
  int DiskSpacePolicyByHandle; // ebx
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+68h] [rbp-98h] BYREF
  __int128 v7; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v8[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v9; // [rsp+88h] [rbp-78h]
  __int128 *v10; // [rsp+90h] [rbp-70h]
  int v11; // [rsp+98h] [rbp-68h]
  int v12; // [rsp+9Ch] [rbp-64h]
  __int128 v13; // [rsp+A0h] [rbp-60h]
  __int128 v14; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  v8[1] = 0;
  v12 = 0;
  Handle = 0LL;
  v14 = 0LL;
  StringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%s", a1);
  v6 = 0LL;
  v7 = 0LL;
  if ( (int)RtlStringLengthWorkerW_0(pszDest, 0x7FFFLL, &v6) >= 0 )
  {
    LOWORD(v7) = 2 * v6;
    WORD1(v7) = 2 * v6 + 2;
    *((_QWORD *)&v7 + 1) = pszDest;
  }
  v8[0] = 48;
  v9 = 0LL;
  v11 = 64;
  v10 = &v7;
  v13 = 0LL;
  DiskSpacePolicyByHandle = ZwCreateFile(&Handle, 1048704LL, v8, &v14, 0LL, 0, 7, 1, 32, 0LL, 0);
  if ( DiskSpacePolicyByHandle >= 0 )
  {
    DiskSpacePolicyByHandle = RtlpQueryDiskSpacePolicyByHandle(Handle, a2);
    if ( DiskSpacePolicyByHandle >= 0 )
      DiskSpacePolicyByHandle = 0;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)DiskSpacePolicyByHandle;
}
