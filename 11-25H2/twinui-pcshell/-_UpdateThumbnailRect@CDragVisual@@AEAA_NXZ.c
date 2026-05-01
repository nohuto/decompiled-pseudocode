/*
 * XREFs of ?_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ @ 0x180521C90
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x18051ED60 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x1805203D0 (-_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z.c)
 * Callees:
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180521828 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 */

char __fastcall CDragVisual::_UpdateThumbnailRect(CDragVisual *this)
{
  char result; // al

  result = 0;
  if ( !*((_BYTE *)this + 277) )
    return CDragVisual::_UpdateThumbnailRect((__int64)this, *((_DWORD *)this + 37));
  return result;
}
