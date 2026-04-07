/*
 * XREFs of ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800CF840
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800606A4 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B864C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180013380 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x1800154D0 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x1800C5CA8 (-OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 */

void __fastcall CThumbnailVisual::OnRepresentationTypeUpdated(CSecondaryWindowRepresentation **this)
{
  CSecondaryWindowRepresentation *v2; // rcx

  if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
  {
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x1000u);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000u);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x10000u);
  }
  v2 = this[42];
  if ( v2 )
    CSecondaryWindowRepresentation::OnRepresentationTypeUpdated(v2);
}
