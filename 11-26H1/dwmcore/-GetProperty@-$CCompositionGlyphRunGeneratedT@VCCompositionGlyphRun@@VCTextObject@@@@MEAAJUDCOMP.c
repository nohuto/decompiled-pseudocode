/*
 * XREFs of ?GetProperty@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247D90
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetProperty@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802487A0 (-GetProperty@-$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@.c)
 */

__int64 __fastcall CCompositionGlyphRunGeneratedT<CCompositionGlyphRun,CTextObject>::GetProperty(
        _DWORD *a1,
        int a2,
        CExpressionValue *a3)
{
  __int64 result; // rax
  int v6; // xmm0_4
  int v7; // xmm1_4

  if ( a2 == 3 )
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 35;
    v6 = a1[24];
    v7 = a1[25];
  }
  else
  {
    if ( a2 != 4 )
      return CTextObjectGeneratedT<CTextObject,CResource>::GetProperty();
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 35;
    v6 = a1[26];
    v7 = a1[27];
  }
  *(_DWORD *)a3 = v6;
  result = 0LL;
  *((_DWORD *)a3 + 1) = v7;
  return result;
}
