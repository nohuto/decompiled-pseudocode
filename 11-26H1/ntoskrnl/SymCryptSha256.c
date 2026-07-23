/*
 * XREFs of SymCryptSha256 @ 0x1405558C0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140491FF0 (RtlDeriveCapabilitySidsFromName.c)
 *     KeComputeSha256 @ 0x1404D2210 (KeComputeSha256.c)
 * Callees:
 *     SymCryptSha256Append @ 0x140555950 (SymCryptSha256Append.c)
 *     SymCryptSha256Init @ 0x1405571D0 (SymCryptSha256Init.c)
 *     SymCryptSha256Result @ 0x140557200 (SymCryptSha256Result.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SymCryptSha256(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[4]; // [rsp+20h] [rbp-A8h] BYREF
  int v8; // [rsp+24h] [rbp-A4h]

  v8 = 0;
  memset_0(v7, 0, 0x7CuLL);
  SymCryptSha256Init(v7);
  SymCryptSha256Append(v7, a1, a2);
  return SymCryptSha256Result(v7, a3);
}
