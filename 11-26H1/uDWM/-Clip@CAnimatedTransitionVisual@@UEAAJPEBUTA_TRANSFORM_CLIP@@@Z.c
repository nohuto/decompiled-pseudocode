/*
 * XREFs of ?Clip@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_CLIP@@@Z @ 0x180095E60
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Clip(CAnimatedTransitionVisual *this, const struct TA_TRANSFORM_CLIP *a2)
{
  _DWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  int *v5; // rax
  __int64 v6; // r9
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_DWORD *)((char *)this + 760);
  v3 = a2 - this;
  v4 = 4LL;
  do
  {
    *v2 = (int)*(float *)((char *)v2 + v3 - 740);
    ++v2;
    --v4;
  }
  while ( v4 );
  v5 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v8);
  CVisual::SetDirtyFlags((CVisual *)(v6 + 8), *v5);
  return 0LL;
}
