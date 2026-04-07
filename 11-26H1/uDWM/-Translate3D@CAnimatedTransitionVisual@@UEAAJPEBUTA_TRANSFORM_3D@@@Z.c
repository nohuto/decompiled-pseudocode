/*
 * XREFs of ?Translate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x180096CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Translate3D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_3D *a2)
{
  int v3; // ecx
  int v4; // ecx
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  int *v9; // rax
  __int64 v10; // r8
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 225) - 2;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v6 = *((float *)a2 + 7);
        if ( *((float *)this + 174) != v6 )
        {
          *((float *)this + 174) = v6;
          goto LABEL_14;
        }
      }
      else
      {
        v5 = *((float *)a2 + 5);
        if ( *((float *)this + 172) != v5
          || *((float *)this + 173) != *((float *)a2 + 6)
          || *((float *)this + 174) != *((float *)a2 + 7) )
        {
          *((float *)this + 172) = v5;
          *((_DWORD *)this + 173) = *((_DWORD *)a2 + 6);
          *((_DWORD *)this + 174) = *((_DWORD *)a2 + 7);
LABEL_14:
          v9 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v12);
          CVisual::SetDirtyFlags((CVisual *)(v10 + 8), *v9);
        }
      }
    }
    else
    {
      v7 = *((float *)a2 + 6);
      if ( *((float *)this + 173) != v7 )
      {
        *((float *)this + 173) = v7;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v8 = *((float *)a2 + 5);
    if ( *((float *)this + 172) != v8 )
    {
      *((float *)this + 172) = v8;
      goto LABEL_14;
    }
  }
  return 0LL;
}
