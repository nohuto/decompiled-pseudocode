/*
 * XREFs of ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800C9ED8
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800261CC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B7630 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0N@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E8C (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0N@$00@@YA-AVDirtyFlags@.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0O@$00@@YA?AVDirtyFlags@@XZ @ 0x180016024 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0O@$00@@YA-AVDirtyFlags@.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550 (-SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18005CF70 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x1800BF758 (-OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 */

void __fastcall CThumbnailVisual::OnRepresentationTypeUpdated(CSecondaryWindowRepresentation **this)
{
  int *v2; // rax
  int *v3; // rax
  int *v4; // rax
  CSecondaryWindowRepresentation *v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
  {
    v2 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v6);
    CThumbnailVisual::SetDirtyFlags((CVisual *)this, *v2);
    v3 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0N__00__YA_AVDirtyFlags__XZ(&v6);
    CThumbnailVisual::SetDirtyFlags((CVisual *)this, *v3);
    v4 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0O__00__YA_AVDirtyFlags__XZ(&v6);
    CThumbnailVisual::SetDirtyFlags((CVisual *)this, *v4);
  }
  v5 = this[45];
  if ( v5 )
    CSecondaryWindowRepresentation::OnRepresentationTypeUpdated(v5);
}
