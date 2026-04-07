/*
 * XREFs of ?UpdateTransitionGradientAlpha@CAccent@@QEAAXM@Z @ 0x1800946B0
 * Callers:
 *     ?Opacity@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x1800955D0 (-Opacity@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CAccent::UpdateTransitionGradientAlpha(CAccent *this, float a2)
{
  int *v2; // rax
  CVisual *v3; // r8
  int v4; // [rsp+38h] [rbp+10h] BYREF

  *((float *)this + 68) = a2;
  v2 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v4);
  CVisual::SetDirtyFlags(v3, *v2);
}
