/*
 * XREFs of ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009DE60
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18009DB08 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x180105264 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18012F9DC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::CRegion::SetRectangle(FastRegion::CRegion *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r10

  if ( a2 >= a4 || a3 >= a5 )
  {
    **(_DWORD **)this = 0;
  }
  else
  {
    v5 = *(_DWORD **)this;
    v5[3] = a3;
    v5[1] = a2;
    *v5 = 2;
    v5[2] = a4;
    v5[4] = 16;
    v5[7] = a2;
    v5[8] = a4;
    v5[5] = a5;
    v5[6] = 16;
  }
}
