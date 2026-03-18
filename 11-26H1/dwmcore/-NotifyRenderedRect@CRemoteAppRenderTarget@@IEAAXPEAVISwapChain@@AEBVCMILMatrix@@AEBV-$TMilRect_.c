/*
 * XREFs of ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180255D1C
 * Callers:
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x1802563F0 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::NotifyRenderedRect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct D2D_RECT_F *a4)
{
  double v4; // xmm2_8
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8[4]; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(a3, a4, (float *)&v7);
  PixelAlign(v8, (unsigned int *)&v7, v4);
  return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 120LL))(a2, v8);
}
