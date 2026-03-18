/*
 * XREFs of ?SetDirtyFromAccumulation@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@Z @ 0x18024AEF0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180265BF0 (-SetProperty@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@MEAAJUDCOMPOSITION_PR.c)
 * Callees:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18012EF44 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetDirtyFromAccumulation(
        __int64 a1,
        char a2)
{
  if ( a2 != *(_BYTE *)(a1 + 76) )
  {
    *(_BYTE *)(a1 + 76) = a2;
    if ( *(_QWORD *)(a1 + 128) )
    {
      if ( a2 )
      {
        *(_BYTE *)(a1 + 153) = 1;
        CGdiSpriteBitmap::DirtyFromAccum((CGdiSpriteBitmap *)a1);
      }
    }
  }
  return 0LL;
}
