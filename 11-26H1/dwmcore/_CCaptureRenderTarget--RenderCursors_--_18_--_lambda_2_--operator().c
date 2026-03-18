/*
 * XREFs of _CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2_::operator() @ 0x180256BFC
 * Callers:
 *     std::_Func_impl_no_alloc__CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2__long_CVisual___CVisualTree___::_Do_call @ 0x180258120 (std--_Func_impl_no_alloc__CCaptureRenderTarget--RenderCursors_--_18_--_lambda_2__lo_ea_180258120.c)
 * Callees:
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800227A0 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180057D90 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B5B10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x18015DC60 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1801BCE20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVCMILMatrix@@@Z @ 0x180256DFC (-ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderCursors_::_18_::_lambda_2_::operator()(
        __int64 a1,
        struct CVisual *a2,
        __int64 a3)
{
  CCaptureRenderTarget *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  _BYTE *v13; // rax
  __int64 Bounds; // rax
  CDrawingContext **v15; // rcx
  struct CVisualTree *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  const char *v19; // r9
  __int128 v20; // [rsp+40h] [rbp-29h] BYREF
  __int64 v21; // [rsp+50h] [rbp-19h]
  __int128 v22; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !CVisualTree::_IsInTree(*(_QWORD *)(*(_QWORD *)a1 + 112LL), (__int64)a2, 0)
    && CVisualTree::_IsInTree(**(_QWORD **)(a1 + 8), (__int64)a2, 0) )
  {
    if ( !**(_BYTE **)(a1 + 16)
      && CCaptureRenderTarget::ComputeCursorToDeviceTransform(
           *(CCaptureRenderTarget **)a1,
           a2,
           **(struct CVisual ***)(a1 + 24),
           **(struct CVisualTree ***)(a1 + 8),
           *(struct CMILMatrix **)(a1 + 32)) )
    {
      v6 = *(CCaptureRenderTarget **)a1;
      v7 = *(_QWORD *)(a1 + 32);
      v8 = **(_QWORD **)(a1 + 40);
      v9 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 48) + 144LL))(**(_QWORD **)(a1 + 48));
      v10 = CDrawingContext::BeginFrame(
              v8,
              (__int64 *)((v9 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64)),
              v7,
              (CCaptureRenderTarget *)((char *)v6 + 140),
              4u,
              0LL);
      if ( v10 < 0 )
      {
        v11 = 478LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
      v13 = *(_BYTE **)(a1 + 16);
      *(_QWORD *)&v20 = 6LL;
      DWORD2(v20) = 1;
      *v13 = 1;
      v10 = CDrawingContext::PushRenderOptionsInternal(
              **(CDrawingContext ***)(a1 + 40),
              0LL,
              (const struct MilRenderOptions *)&v20,
              1);
      if ( v10 < 0 )
      {
        v11 = 488LL;
        goto LABEL_7;
      }
      **(_BYTE **)(a1 + 56) = 1;
    }
    Bounds = CVisual::GetBounds((__int64)a2, a3);
    v15 = *(CDrawingContext ***)(a1 + 40);
    v22 = *(_OWORD *)Bounds;
    v23 = *(_QWORD *)(Bounds + 16);
    v10 = CDrawingContext::DrawVisualTree(*v15, v16, (float *)&v22, 0LL, 0, 0, (__int64)a2);
    if ( v10 < 0 )
    {
      v11 = 500LL;
      goto LABEL_7;
    }
    v17 = *(_QWORD *)(a1 + 32);
    v21 = 0LL;
    v20 = 0LL;
    CMILMatrix::Transform3DBoundsHelper<0>(v17, (float *)&v22, (float *)&v20);
    CMergedRectBase<4>::Add((unsigned int *)(*(_QWORD *)a1 + 2416LL), (float *)&v20, v18, v19);
  }
  return 0LL;
}
