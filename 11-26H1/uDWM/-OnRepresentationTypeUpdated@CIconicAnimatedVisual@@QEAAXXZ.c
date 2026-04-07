/*
 * XREFs of ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x1800B61AC
 * Callers:
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B7630 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z @ 0x180082BF4 (--$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z.c)
 */

void __fastcall CIconicAnimatedVisual::OnRepresentationTypeUpdated(CBaseObject **this)
{
  int *v2; // rax
  CBaseObject *v3; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v4);
  CVisual::SetDirtyFlags((CVisual *)this, *v2);
  v3 = this[27];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[27] = 0LL;
  }
  CContainerVisual::RemoveAllChildren((CContainerVisual *)this);
  CSpriteVisual::SetBrush<std::nullptr_t>((__int64)this);
  CContainerVisual::RenderRecursive((CContainerVisual *)this);
}
