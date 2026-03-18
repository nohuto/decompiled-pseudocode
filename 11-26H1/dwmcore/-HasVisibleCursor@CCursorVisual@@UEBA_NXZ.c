/*
 * XREFs of ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x18021F4C0
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180078480 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1801DDC50 (-CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCursorVisual::HasVisibleCursor(CCursorVisual *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 87);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 176) )
      return (*((_BYTE *)this + 102) & 0x20) != 0;
  }
  return result;
}
