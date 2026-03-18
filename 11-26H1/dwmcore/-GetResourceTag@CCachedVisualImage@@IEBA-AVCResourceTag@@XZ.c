/*
 * XREFs of ?GetResourceTag@CCachedVisualImage@@IEBA?AVCResourceTag@@XZ @ 0x18021B9F8
 * Callers:
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800F6E10 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::GetResourceTag(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  const char *v6; // rax

  v2 = *(_DWORD *)(a1 + 1604);
  if ( !v2 )
  {
    v6 = "DWM DComp Snapshot";
    goto LABEL_12;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v6 = "DWM Visual Bitmap";
    *(_DWORD *)(a2 + 8) = 17;
    goto LABEL_13;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = "DWM Visual Surface";
LABEL_12:
    *(_DWORD *)(a2 + 8) = 18;
    goto LABEL_13;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = "DWM Debug Visual Image";
      *(_DWORD *)(a2 + 8) = 22;
    }
    else
    {
      v6 = "DWM Unknown CVI";
      *(_DWORD *)(a2 + 8) = 15;
    }
  }
  else
  {
    v6 = "DWM Backdrop Visual Image";
    *(_DWORD *)(a2 + 8) = 25;
  }
LABEL_13:
  *(_QWORD *)a2 = v6;
  return a2;
}
