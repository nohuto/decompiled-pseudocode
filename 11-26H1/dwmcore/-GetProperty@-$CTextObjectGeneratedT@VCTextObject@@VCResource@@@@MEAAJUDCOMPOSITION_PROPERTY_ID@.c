/*
 * XREFs of ?GetProperty@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802487A0
 * Callers:
 *     ?GetProperty@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247D90 (-GetProperty@-$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@MEAAJUDCOMP.c)
 *     ?GetProperty@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247E10 (-GetProperty@-$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@MEAAJUDCOMP.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CTextObjectGeneratedT<CTextObject,CResource>::GetProperty(_DWORD *a1, int a2, CExpressionValue *a3)
{
  int v5; // edx
  __int64 result; // rax
  int v7; // xmm0_4
  int v8; // xmm1_4

  v5 = a2 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 2147942487LL;
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 35;
    v7 = a1[20];
    v8 = a1[21];
  }
  else
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 35;
    v7 = a1[18];
    v8 = a1[19];
  }
  *(_DWORD *)a3 = v7;
  result = 0LL;
  *((_DWORD *)a3 + 1) = v8;
  return result;
}
