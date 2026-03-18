/*
 * XREFs of SymCryptShortWeierstrassNegate @ 0x14052BBB0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x140521454 (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x1405214D0 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x140521738 (SymCryptModNeg.c)
 */

__int64 __fastcall SymCryptShortWeierstrassNegate(__int64 a1)
{
  _DWORD *v1; // r14

  v1 = *(_DWORD **)(a1 + 616);
  SymCryptModElementCreate();
  SymCryptModNeg(v1);
  return SymCryptModElementMaskedCopy();
}
