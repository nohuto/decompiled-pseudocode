/*
 * XREFs of ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180068C30
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Translate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4
  float *v3; // rax
  float *v4; // rdx
  float v6; // eax
  int *v7; // rax
  __int64 v8; // r8
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((float *)a2 + 5);
  v3 = (float *)((char *)a2 + 24);
  v4 = (float *)((char *)this + 692);
  if ( *((float *)this + 172) != v2 || *v4 != *v3 )
  {
    *((float *)this + 172) = v2;
    v6 = *v3;
    *((_DWORD *)this + 174) = 0;
    *v4 = v6;
    v7 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v9);
    CVisual::SetDirtyFlags((CVisual *)(v8 + 8), *v7);
  }
  return 0LL;
}
