/*
 * XREFs of SymCryptIntWipe @ 0x14055E9BC
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x140560DD8 (SymCryptRsaCoreEnc.c)
 *     HashpVerifyPkcs1Signature @ 0x1408B2320 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptIntWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
}
