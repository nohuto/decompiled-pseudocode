/*
 * XREFs of ?CancelCrossfade@CButton@@QEAAJXZ @ 0x18008D478
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180023D1C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CButton::CancelCrossfade(CButton *this)
{
  int *v2; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 36) )
  {
    *((_BYTE *)this + 184) |= 0x40u;
    v2 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v4);
    CVisual::SetDirtyFlags(this, *v2);
    CContainerVisual::RenderRecursive(this);
  }
  return 0LL;
}
