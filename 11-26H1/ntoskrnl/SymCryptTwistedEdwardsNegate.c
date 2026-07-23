/*
 * XREFs of SymCryptTwistedEdwardsNegate @ 0x1405766A0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x14055EAE8 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x14055ED50 (SymCryptModNeg.c)
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
