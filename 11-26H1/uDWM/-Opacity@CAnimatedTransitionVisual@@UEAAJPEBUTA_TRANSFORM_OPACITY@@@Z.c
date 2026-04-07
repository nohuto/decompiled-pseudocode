/*
 * XREFs of ?Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x180068D60
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Opacity(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  float v2; // xmm0_4
  int *v3; // rax
  __int64 v4; // r8
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((float *)a2 + 5);
  if ( v2 != *((float *)this + 170) )
  {
    *((float *)this + 170) = v2;
    v3 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v6);
    CVisual::SetDirtyFlags((CVisual *)(v4 + 8), *v3);
  }
  return 0LL;
}
