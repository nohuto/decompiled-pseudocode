/*
 * XREFs of SymCryptIntWipe @ 0x14055C4D4
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x14055E8B4 (SymCryptRsaCoreEnc.c)
 *     HashpVerifyPkcs1Signature @ 0x1408ABEDC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptIntWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
}
