/*
 * XREFs of ?GetProperty@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247E10
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetProperty@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802487A0 (-GetProperty@-$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@.c)
 */

__int64 __fastcall CCompositionTextLineGeneratedT<CCompositionTextLine,CTextObject>::GetProperty(
        _DWORD *a1,
        int a2,
        CExpressionValue *a3)
{
  __int64 result; // rax
  int v5; // xmm6_4

  switch ( a2 )
  {
    case 3:
      v5 = a1[24];
      break;
    case 4:
      v5 = a1[25];
      break;
    case 5:
      v5 = a1[26];
      break;
    default:
      return CTextObjectGeneratedT<CTextObject,CResource>::GetProperty();
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 18;
  result = 0LL;
  *(_DWORD *)a3 = v5;
  return result;
}
