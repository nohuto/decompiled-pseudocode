/*
 * XREFs of ?_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ @ 0x180544B48
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180541BF0 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x180543280 (-_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z.c)
 * Callees:
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1805446EC (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 */

char __fastcall CDragVisual::_UpdateThumbnailRect(CDragVisual *this)
{
  char result; // al

  result = 0;
  if ( !*((_BYTE *)this + 277) )
    return CDragVisual::_UpdateThumbnailRect((__int64)this, *((_DWORD *)this + 37));
  return result;
}
