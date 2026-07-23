/*
 * XREFs of SymCryptSha256 @ 0x1800FD6DC
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x18005B900 (RtlDeriveCapabilitySidsFromName.c)
 * Callees:
 *     SymCryptSha256Result @ 0x1800FD764 (SymCryptSha256Result.c)
 *     SymCryptSha256Init @ 0x1800FEB88 (SymCryptSha256Init.c)
 *     SymCryptSha256Append @ 0x180120F44 (SymCryptSha256Append.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SymCryptSha256(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[4]; // [rsp+20h] [rbp-A8h] BYREF
  int v8; // [rsp+24h] [rbp-A4h]

  v8 = 0;
  memset_thunk_772440563353939046(v7, 0, 0x7CuLL);
  SymCryptSha256Init(v7);
  SymCryptSha256Append(v7, a1, a2);
  return SymCryptSha256Result(v7, a3);
}
