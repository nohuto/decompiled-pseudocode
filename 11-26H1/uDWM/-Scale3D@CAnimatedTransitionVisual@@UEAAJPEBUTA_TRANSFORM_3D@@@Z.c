/*
 * XREFs of ?Scale3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x1800964E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Scale3D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_3D *a2)
{
  float v2; // xmm1_4
  bool v3; // zf
  int *v4; // rax
  __int64 v5; // r8
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 175) != v2
    || *((float *)this + 176) != *((float *)a2 + 6)
    || *((float *)this + 177) != *((float *)a2 + 7)
    || !*((_BYTE *)this + 910)
    && (*((float *)this + 178) != *((float *)a2 + 11)
     || *((float *)this + 179) != *((float *)a2 + 12)
     || *((float *)this + 180) != *((float *)a2 + 13)) )
  {
    v3 = *((_BYTE *)this + 910) == 0;
    *((float *)this + 175) = v2;
    *((_DWORD *)this + 176) = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 177) = *((_DWORD *)a2 + 7);
    if ( v3 )
    {
      *((_DWORD *)this + 178) = *((_DWORD *)a2 + 11);
      *((_DWORD *)this + 179) = *((_DWORD *)a2 + 12);
      *((_DWORD *)this + 180) = *((_DWORD *)a2 + 13);
    }
    v4 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v7);
    CVisual::SetDirtyFlags((CVisual *)(v5 + 8), *v4);
  }
  return 0LL;
}
