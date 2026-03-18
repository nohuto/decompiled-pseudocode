/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180218218
 * Callers:
 *     ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800AC0E0 (-Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x1800D1010 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18014A9D8 (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessSetSourceVisual@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSOURCEVISUAL@@@Z @ 0x18014CB18 (-ProcessSetSourceVisual@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SET.c)
 *     ?UpdateVisualTree@CCachedVisualImage@@MEAAJXZ @ 0x18014CBF0 (-UpdateVisualTree@CCachedVisualImage@@MEAAJXZ.c)
 *     ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x1801B5AD0 (-Initialize@CRedirectedVisualContent@@MEAAJXZ.c)
 *     ?SetVisual@?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@QEAAJPEAVCVisual@@@Z @ 0x1801D8A6C (-SetVisual@-$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessSetFlatteningToLocalSpace@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETFLATTENINGTOLOCALSPACE@@@Z @ 0x18021ACCC (-ProcessSetFlatteningToLocalSpace@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISU.c)
 *     ?EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ @ 0x18022A9E4 (-EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800D3570 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?Create@CVisualTree@@KAXPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180261514 (-Create@CVisualTree@@KAXPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetVisualTree(CVisual *this, struct CVisualTree **a2)
{
  struct CVisualTree *VisualTreeNoRef; // rax
  struct CComposition **v4; // r10
  char v5; // r11
  struct CVisualTree *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CVisualTree *v9; // [rsp+48h] [rbp+20h] BYREF

  VisualTreeNoRef = CVisual::GetVisualTreeNoRef(this);
  v9 = VisualTreeNoRef;
  v6 = VisualTreeNoRef;
  if ( VisualTreeNoRef )
  {
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 8LL))(VisualTreeNoRef);
    *a2 = v6;
    return 0LL;
  }
  if ( v5 )
  {
    CVisualTree::Create(v4[3], (struct CVisual *)v4, &v9);
    *a2 = v9;
    return 0LL;
  }
  *a2 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE5A,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
    (const char *)0x80070490LL);
  return 2147943568LL;
}
