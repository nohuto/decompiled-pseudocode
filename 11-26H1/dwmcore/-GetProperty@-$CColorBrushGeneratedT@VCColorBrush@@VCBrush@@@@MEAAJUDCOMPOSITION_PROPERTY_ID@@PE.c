/*
 * XREFs of ?GetProperty@?$CColorBrushGeneratedT@VCColorBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18022AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CColorBrushGeneratedT<CColorBrush,CBrush>::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  __int64 result; // rax

  if ( a2 )
    return 2147942487LL;
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 70;
  result = 0LL;
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 104);
  return result;
}
