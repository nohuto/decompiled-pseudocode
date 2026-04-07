/*
 * XREFs of ?Rotate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180096440
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Rotate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4
  int *v3; // rax
  __int64 v4; // r8
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 181) != v2
    || *((float *)this + 184) != *((float *)a2 + 9)
    || *((float *)this + 185) != *((float *)a2 + 10) )
  {
    *((float *)this + 181) = v2;
    *((_QWORD *)this + 91) = 0LL;
    if ( !*((_BYTE *)this + 909) )
    {
      *((_DWORD *)this + 184) = *((_DWORD *)a2 + 9);
      *(_QWORD *)((char *)this + 740) = *((unsigned int *)a2 + 10);
    }
    v3 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v6);
    CVisual::SetDirtyFlags((CVisual *)(v4 + 8), *v3);
  }
  return 0LL;
}
