/*
 * XREFs of RtlCreateServiceSid @ 0x180039210
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180137F60 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     SymCryptSha1Result @ 0x180039BD0 (SymCryptSha1Result.c)
 *     SymCryptSha1Append @ 0x180039CF0 (SymCryptSha1Append.c)
 *     SymCryptSha1Init @ 0x180039D20 (SymCryptSha1Init.c)
 *     RtlUpcaseUnicodeString @ 0x18003AB90 (RtlUpcaseUnicodeString.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateServiceSid(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  _BYTE v11[4]; // [rsp+20h] [rbp-B8h] BYREF
  int v12; // [rsp+24h] [rbp-B4h]
  __int128 v13; // [rsp+A0h] [rbp-38h] BYREF
  int v14; // [rsp+B0h] [rbp-28h]

  v12 = 0;
  v13 = 0LL;
  memset_thunk_772440563353939046(v11, 0, 0x7CuLL);
  if ( !a1 || !a3 )
    return 3221225485LL;
  v7 = *a3;
  *a3 = 32;
  if ( v7 < 0x20 )
    return 3221225507LL;
  LOBYTE(v6) = 1;
  result = RtlUpcaseUnicodeString(&v13, a1, v6);
  if ( (int)result >= 0 )
  {
    SymCryptSha1Init(v11);
    v9 = *((_QWORD *)&v13 + 1);
    SymCryptSha1Append(v11, *((_QWORD *)&v13 + 1), (unsigned __int16)v13);
    SymCryptSha1Result(v11, &v13);
    if ( v9 )
      RtlpSysVolFree(v9);
    *(_WORD *)a2 = 1537;
    *(_DWORD *)(a2 + 2) = RtlpNtAuthority;
    *(_WORD *)(a2 + 6) = 1280;
    v10 = v13;
    *(_DWORD *)(a2 + 8) = 80;
    *(_QWORD *)(a2 + 12) = __PAIR64__(DWORD1(v13), v10);
    *(_QWORD *)(a2 + 20) = *((_QWORD *)&v13 + 1);
    *(_DWORD *)(a2 + 28) = v14;
    return 0LL;
  }
  return result;
}
