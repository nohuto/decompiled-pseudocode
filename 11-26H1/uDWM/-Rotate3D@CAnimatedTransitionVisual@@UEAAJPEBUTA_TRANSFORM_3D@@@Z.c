/*
 * XREFs of ?Rotate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x180068AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?_NormalizeAngleToShowFront@CAnimatedTransitionVisual@@IEAAMM@Z @ 0x180068BC0 (-_NormalizeAngleToShowFront@CAnimatedTransitionVisual@@IEAAMM@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Rotate3D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_3D *a2)
{
  CAnimatedTransitionVisual *v4; // rcx
  CAnimatedTransitionVisual *v5; // rcx
  float v6; // xmm0_4
  bool v7; // zf
  int *v8; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *((float *)this + 181) != *((float *)a2 + 5)
    || *((float *)this + 182) != *((float *)a2 + 6)
    || *((float *)this + 183) != *((float *)a2 + 7)
    || !*((_BYTE *)this + 909)
    && (*((float *)this + 184) != *((float *)a2 + 11)
     || *((float *)this + 185) != *((float *)a2 + 12)
     || *((float *)this + 186) != *((float *)a2 + 13)) )
  {
    *((float *)this + 181) = CAnimatedTransitionVisual::_NormalizeAngleToShowFront(this, *((float *)a2 + 5));
    *((float *)this + 182) = CAnimatedTransitionVisual::_NormalizeAngleToShowFront(v4, *((float *)a2 + 6));
    v6 = CAnimatedTransitionVisual::_NormalizeAngleToShowFront(v5, *((float *)a2 + 7));
    v7 = *((_BYTE *)this + 909) == 0;
    *((float *)this + 183) = v6;
    if ( v7 )
    {
      *((_DWORD *)this + 184) = *((_DWORD *)a2 + 11);
      *((_DWORD *)this + 185) = *((_DWORD *)a2 + 12);
      *((_DWORD *)this + 186) = *((_DWORD *)a2 + 13);
    }
    v8 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v10);
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), *v8);
  }
  return 0LL;
}
