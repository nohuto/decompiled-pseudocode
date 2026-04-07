/*
 * XREFs of ??$ConvertDirtyEnumToFlag@$MW4ThumbnailVisualDirtyFlags@CThumbnailVisual@@0P@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E50
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800593B0 (-OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18006F294 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800C9698 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ___ConvertDirtyEnumToFlag__MW4ThumbnailVisualDirtyFlags_CThumbnailVisual__0P__00__YA_AVDirtyFlags__XZ(
        _DWORD *a1)
{
  *a1 = 0x8000;
  return a1;
}
