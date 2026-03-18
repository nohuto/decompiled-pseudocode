/*
 * XREFs of ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1801DDC50
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x1801DBAF0 (-CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z.c)
 *     ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x18021F4C0 (-HasVisibleCursor@CCursorVisual@@UEBA_NXZ.c)
 */

__int64 __fastcall CCursorVisual::CollectOcclusion(
        CCursorVisual *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3)
{
  if ( *((_BYTE *)a2 + 1126)
    && *((_BYTE *)this + 688)
    && !*((_BYTE *)this + 689)
    && CCursorVisual::HasVisibleCursor(this) )
  {
    COcclusionContext::CollectCursor(a2, this);
  }
  return 0LL;
}
