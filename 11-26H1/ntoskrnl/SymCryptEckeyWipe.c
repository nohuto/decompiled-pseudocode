/*
 * XREFs of SymCryptEckeyWipe @ 0x14055BD7C
 * Callers:
 *     SymCryptEckeyFree @ 0x14055B790 (SymCryptEckeyFree.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x14055BDA8 (SymCryptSizeofEckeyFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyWipe(__int64 a1)
{
  unsigned int v2; // eax

  v2 = SymCryptSizeofEckeyFromCurve(*(_QWORD *)(a1 + 8));
  return SymCryptWipe(a1, v2);
}
