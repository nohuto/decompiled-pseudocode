/*
 * XREFs of ?Height@?$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180020970
 * Callers:
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180020800 (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNot.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180021818 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18006A510 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A4938 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float TMilRect<float,D2D_RECT_F,RectUniqueness::NotNeeded>::Height(void)
{
  return TMilRect<float,D2D_RECT_F,RectUniqueness::NotNeeded>::Height<float>();
}
