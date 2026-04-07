/*
 * XREFs of ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800B623C
 * Callers:
 *     ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180019D50 (-WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800CF648 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::SetIconicData(__int64 a1, __int64 a2, _OWORD *a3, _DWORD *a4)
{
  int *v8; // rax
  _OWORD *v9; // rbx
  int v10; // ecx
  int v11; // ecx
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v8 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v13);
  CVisual::SetDirtyFlags((CVisual *)a1, *v8);
  *(_QWORD *)(a1 + 224) = a2;
  v9 = (_OWORD *)(a1 + 248);
  SetRectEmpty((LPRECT)(a1 + 248));
  SetRectEmpty((LPRECT)(a1 + 264));
  if ( a3 )
  {
    *v9 = *a3;
    if ( *(int *)a3 < 0 )
    {
      if ( (*a4 & 0x2000) == 0 )
      {
        v10 = *(_DWORD *)v9;
        *(_OWORD *)(a1 + 264) = *a3;
        v11 = v10 - *(_DWORD *)a3;
        *(_DWORD *)(a1 + 256) += *(_DWORD *)a3;
        if ( v11 >= *(_DWORD *)(a1 + 256) )
          v11 = *(_DWORD *)(a1 + 256);
        *(_DWORD *)v9 = v11;
      }
      goto LABEL_8;
    }
  }
  if ( a4 )
LABEL_8:
    *(_DWORD *)(a1 + 280) = *a4;
  return 0LL;
}
