/*
 * XREFs of SymCryptEckeyWipe @ 0x14055E264
 * Callers:
 *     SymCryptEckeyFree @ 0x14055DC74 (SymCryptEckeyFree.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x14055E290 (SymCryptSizeofEckeyFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyWipe(__int64 a1)
{
  unsigned int v2; // eax

  v2 = SymCryptSizeofEckeyFromCurve(*(_QWORD *)(a1 + 8));
  return SymCryptWipe(a1, v2);
}
