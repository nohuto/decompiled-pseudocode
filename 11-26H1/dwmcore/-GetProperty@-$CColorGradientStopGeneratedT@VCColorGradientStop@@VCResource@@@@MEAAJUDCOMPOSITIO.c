/*
 * XREFs of ?GetProperty@?$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247B80
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CColorGradientStopGeneratedT<CColorGradientStop,CResource>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  int v6; // xmm6_4

  if ( a2 )
  {
    if ( a2 != 1 )
      return 2147942487LL;
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 70;
    *(_OWORD *)a3 = *(_OWORD *)(a1 + 76);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 72);
    CExpressionValue::DestroyCurrent(a3);
    *(_DWORD *)a3 = v6;
    *((_DWORD *)a3 + 16) = 18;
  }
  return 0LL;
}
