/*
 * XREFs of SymCryptTwistedEdwardsNegate @ 0x1405296C0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x140521454 (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x1405214D0 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x140521738 (SymCryptModNeg.c)
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
