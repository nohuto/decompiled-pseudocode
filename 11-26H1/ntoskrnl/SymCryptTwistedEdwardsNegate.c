/*
 * XREFs of SymCryptTwistedEdwardsNegate @ 0x1405657D0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x14055C584 (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x14055C600 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x14055C868 (SymCryptModNeg.c)
 */

__int64 __fastcall SymCryptTwistedEdwardsNegate(__int64 a1)
{
  _DWORD *v1; // r15

  v1 = *(_DWORD **)(a1 + 616);
  SymCryptModElementCreate();
  SymCryptModNeg(v1);
  SymCryptModElementMaskedCopy();
  SymCryptModNeg(v1);
  return SymCryptModElementMaskedCopy();
}
