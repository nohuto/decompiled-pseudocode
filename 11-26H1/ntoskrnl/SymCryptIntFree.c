/*
 * XREFs of SymCryptIntFree @ 0x14055C24C
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x140562F44 (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x1407228C8 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptIntFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
  return SymCryptCallbackFree(a1);
}
