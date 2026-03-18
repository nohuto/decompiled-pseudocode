/*
 * XREFs of ?GetProperty@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180265B50
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  __int64 result; // rax
  char v5; // bl

  if ( a2 != 2 )
    return 2147942487LL;
  v5 = *(_BYTE *)(a1 + 76);
  CExpressionValue::DestroyCurrent(a3);
  result = 0LL;
  *((_DWORD *)a3 + 16) = 17;
  *(_BYTE *)a3 = v5;
  return result;
}
