/*
 * XREFs of SymCryptSha384Result @ 0x14055EE64
 * Callers:
 *     HashpFinalizeHash @ 0x1408AC1B4 (HashpFinalizeHash.c)
 * Callees:
 *     SymCryptSha384Init @ 0x14055EE18 (SymCryptSha384Init.c)
 *     SymCryptSha512Result @ 0x1405605A4 (SymCryptSha512Result.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptSha384Result(__int64 a1, _OWORD *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _OWORD v7[3]; // [rsp+20h] [rbp-50h] BYREF

  SymCryptSha512Result(a1, v7);
  v4 = v7[1];
  *a2 = v7[0];
  v5 = v7[2];
  a2[1] = v4;
  a2[2] = v5;
  SymCryptSha384Init(a1);
  return 0LL;
}
