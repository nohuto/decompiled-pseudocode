/*
 * XREFs of ?GetProperty@?$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18027A150
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CLinearGradientBrushGeneratedT<CLinearGradientBrush,CGradientBrush,bool>::GetProperty(
        _DWORD *a1,
        int a2,
        CExpressionValue *a3)
{
  int v5; // edx
  __int64 result; // rax
  int v7; // xmm0_4
  int v8; // xmm1_4

  v5 = a2 - 5;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 2147942487LL;
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 35;
    v7 = a1[64];
    v8 = a1[65];
  }
  else
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 35;
    v7 = a1[62];
    v8 = a1[63];
  }
  *(_DWORD *)a3 = v7;
  result = 0LL;
  *((_DWORD *)a3 + 1) = v8;
  return result;
}
