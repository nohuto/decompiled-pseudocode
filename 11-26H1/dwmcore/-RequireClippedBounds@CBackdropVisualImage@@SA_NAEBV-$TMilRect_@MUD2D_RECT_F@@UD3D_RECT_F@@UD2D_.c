/*
 * XREFs of ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018FD04
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18002A8C0 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBackdropVisualImage::RequireClippedBounds(float *a1)
{
  int v1; // edx
  int v2; // eax

  v1 = *((_DWORD *)g_pComposition + 1617);
  switch ( v1 )
  {
    case 49152:
    case 45056:
      goto LABEL_2;
    case 40960:
LABEL_9:
      v2 = 0x2000;
      return *a1 <= -3.4028235e38 && a1[2] >= 3.4028235e38
          || a1[1] <= -3.4028235e38 && a1[3] >= 3.4028235e38
          || (float)(a1[2] - *a1) > (float)v2
          || (float)(a1[3] - a1[1]) > (float)v2;
    case 37632:
      v2 = 4096;
      return *a1 <= -3.4028235e38 && a1[2] >= 3.4028235e38
          || a1[1] <= -3.4028235e38 && a1[3] >= 3.4028235e38
          || (float)(a1[2] - *a1) > (float)v2
          || (float)(a1[3] - a1[1]) > (float)v2;
    case 41216:
      goto LABEL_9;
    case 45312:
    case 49408:
    case 49664:
LABEL_2:
      v2 = 0x4000;
      return *a1 <= -3.4028235e38 && a1[2] >= 3.4028235e38
          || a1[1] <= -3.4028235e38 && a1[3] >= 3.4028235e38
          || (float)(a1[2] - *a1) > (float)v2
          || (float)(a1[3] - a1[1]) > (float)v2;
  }
  v2 = 2048;
  return *a1 <= -3.4028235e38 && a1[2] >= 3.4028235e38
      || a1[1] <= -3.4028235e38 && a1[3] >= 3.4028235e38
      || (float)(a1[2] - *a1) > (float)v2
      || (float)(a1[3] - a1[1]) > (float)v2;
}
