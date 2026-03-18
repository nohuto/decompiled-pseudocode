/*
 * XREFs of ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x180194B38
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180182C78 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRect.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C4A4 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 *     ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180194C70 (-GetVirtualModeClip@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::GetInverseDesktopMPOTransform(COverlayContext *this, struct CMILMatrix *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  float v6; // xmm1_4
  float *VirtualModeClip; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  float v9; // [rsp+28h] [rbp-20h]
  float v10; // [rsp+2Ch] [rbp-1Ch]
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( COverlayContext::AnyDesktopPlaneScaling(this) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 256LL))(*((_QWORD *)this + 7));
    v8 = 0LL;
    v6 = (float)*(int *)(v5 + 44);
    v9 = (float)*(int *)(v5 + 40);
    v10 = v6;
    VirtualModeClip = (float *)COverlayContext::GetVirtualModeClip(this, v11);
    CMILMatrix::InferAffineMatrix((__int64)a2, VirtualModeClip, (float *)&v8);
  }
  else
  {
    *(_QWORD *)v4 = 1065353216LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_DWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 20) = 1065353216LL;
    *(_QWORD *)(v4 + 28) = 0LL;
    *(_DWORD *)(v4 + 36) = 0;
    *(_QWORD *)(v4 + 40) = 1065353216LL;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_DWORD *)(v4 + 56) = 0;
    *(_DWORD *)(v4 + 60) = 1065353216;
    *(_BYTE *)(v4 + 65) &= 0xE9u;
    *(_BYTE *)(v4 + 65) |= 0x29u;
    *(_BYTE *)(v4 + 64) = -86;
  }
}
