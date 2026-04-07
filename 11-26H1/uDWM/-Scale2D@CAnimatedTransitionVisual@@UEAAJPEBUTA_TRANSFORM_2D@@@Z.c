/*
 * XREFs of ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180068CA0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C4C10 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Scale2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4
  bool v3; // zf
  int *v4; // rax
  __int64 v5; // r8
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 175) != v2
    || *((float *)this + 176) != *((float *)a2 + 6)
    || *((float *)this + 178) != *((float *)a2 + 9)
    || *((float *)this + 179) != *((float *)a2 + 10) )
  {
    v3 = *((_BYTE *)this + 910) == 0;
    *((float *)this + 175) = v2;
    *((_DWORD *)this + 176) = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 177) = 1065353216;
    if ( v3 )
    {
      *((_DWORD *)this + 178) = *((_DWORD *)a2 + 9);
      *(_QWORD *)((char *)this + 716) = *((unsigned int *)a2 + 10);
    }
    v4 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v7);
    CVisual::SetDirtyFlags((CVisual *)(v5 + 8), *v4);
  }
  return 0LL;
}
