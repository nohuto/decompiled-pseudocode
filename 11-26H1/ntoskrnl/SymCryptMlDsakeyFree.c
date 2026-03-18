/*
 * XREFs of SymCryptMlDsakeyFree @ 0x14055E274
 * Callers:
 *     SymCryptMlDsaSelftest @ 0x140563120 (SymCryptMlDsaSelftest.c)
 *     HashpVerifyMldsaSignature @ 0x1408ABDEC (HashpVerifyMldsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x1407228C8 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptMlDsakeyFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 16));
  return SymCryptCallbackFree(a1);
}
