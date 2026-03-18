/*
 * XREFs of SymCryptRsakeyFree @ 0x14055A380
 * Callers:
 *     SymCryptRsaSelftest @ 0x1405632FC (SymCryptRsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x1407228C8 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptRsakeyFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 4));
  return SymCryptCallbackFree(a1);
}
