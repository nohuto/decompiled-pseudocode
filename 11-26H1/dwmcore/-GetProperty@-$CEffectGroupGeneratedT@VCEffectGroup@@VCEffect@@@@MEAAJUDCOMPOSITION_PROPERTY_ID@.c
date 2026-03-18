/*
 * XREFs of ?GetProperty@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247F20
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  __int64 result; // rax
  int v5; // xmm6_4

  if ( a2 != 1 )
    return 2147942487LL;
  v5 = *(_DWORD *)(a1 + 80);
  CExpressionValue::DestroyCurrent(a3);
  result = 0LL;
  *(_DWORD *)a3 = v5;
  *((_DWORD *)a3 + 16) = 18;
  return result;
}
