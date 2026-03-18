/*
 * XREFs of ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057844
 * Callers:
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDARenderTarget::NotifyRenderedRect(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-88h] BYREF
  struct tagRECT v5; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v6[80]; // [rsp+40h] [rbp-68h] BYREF

  v4 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(a1 + 284, a2, &v4);
  PixelAlign(&v5, &v4);
  v3 = *(_QWORD *)(a1 + 176);
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v3 + 64) + 88LL))(*(_QWORD *)(v3 + 64), &v4);
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v6, &v5);
  CRegion::Union((CRegion *)(v3 + 112), (const struct CRegion *)v6);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v6);
  *(_BYTE *)(a1 + 2384) = 1;
}
