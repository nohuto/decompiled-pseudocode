/*
 * XREFs of SymCryptShortWeierstrassNegate @ 0x140567BD0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x14055C584 (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x14055C600 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x14055C868 (SymCryptModNeg.c)
 */

__int64 __fastcall SymCryptShortWeierstrassNegate(__int64 a1)
{
  _DWORD *v1; // r14

  v1 = *(_DWORD **)(a1 + 616);
  SymCryptModElementCreate();
  SymCryptModNeg(v1);
  return SymCryptModElementMaskedCopy();
}
