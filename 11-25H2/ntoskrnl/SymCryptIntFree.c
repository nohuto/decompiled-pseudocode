/*
 * XREFs of SymCryptIntFree @ 0x14052111C
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x140526F7C (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x14069A618 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptIntFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
  return SymCryptCallbackFree(a1);
}
