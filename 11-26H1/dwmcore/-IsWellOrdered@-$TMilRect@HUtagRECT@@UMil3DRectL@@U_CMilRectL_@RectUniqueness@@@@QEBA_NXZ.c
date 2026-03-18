/*
 * XREFs of ?IsWellOrdered@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18005F788
 * Callers:
 *     ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005F680 (-CalcSourceRect@CBitmapRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800602F0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1801FE400 (-SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 *     ?CalcSourceRect@CSwapChainRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802ACB70 (-CalcSourceRect@CSwapChainRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Re.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsWellOrdered(_DWORD *a1)
{
  return *a1 <= a1[2] && a1[1] <= a1[3];
}
