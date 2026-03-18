/*
 * XREFs of SymCryptIntWipe @ 0x1405213A4
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x140522A20 (SymCryptRsaCoreEnc.c)
 *     HashpVerifyPkcs1Signature @ 0x140820050 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptIntWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
}
