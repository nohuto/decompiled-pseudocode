/*
 * XREFs of SymCryptShortWeierstrassNegate @ 0x140575840
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x14055EAE8 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x14055ED50 (SymCryptModNeg.c)
 */

__int64 __fastcall SymCryptShortWeierstrassNegate(__int64 a1)
{
  _DWORD *v1; // r14

  v1 = *(_DWORD **)(a1 + 616);
  SymCryptModElementCreate();
  SymCryptModNeg(v1);
  return SymCryptModElementMaskedCopy();
}
