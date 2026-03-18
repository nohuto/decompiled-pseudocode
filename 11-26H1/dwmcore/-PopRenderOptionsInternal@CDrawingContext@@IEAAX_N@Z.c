/*
 * XREFs of ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0
 * Callers:
 *     ?Pop@CDrawingContext@@QEAAJXZ @ 0x18003EE08 (-Pop@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180078480 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800D11E8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180194CF0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     gsl::final_action__CCursorVisual::RenderContent_::_2_::_lambda_1___::_final_action__CCursorVisual::RenderContent_::_2_::_lambda_1___ @ 0x18021F610 (gsl--final_action__CCursorVisual--RenderContent_--_2_--_lambda_1___--_final_action__CCursorVisua.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18022CF50 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18024FF90 (-RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PreRestoreState@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1802507E0 (-PreRestoreState@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180250800 (-RenderLayer@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     gsl::final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___::_final_action__CCaptureRenderTarget::RenderCursors_::_2_::_lambda_1___ @ 0x180256A18 (gsl--final_action__CCaptureRenderTarget--RenderCursors_--_2_--_lambda_1___--_final_action__CCapt.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::PopRenderOptionsInternal(CDrawingContext *this, char a2)
{
  __int64 v2; // r8
  __m128i v3; // xmm1
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax

  v2 = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    v4 = *((_DWORD *)this + 66);
    if ( v4 )
      *((_DWORD *)this + 66) = v4 - 1;
  }
  v5 = *((_DWORD *)this + 180);
  if ( v5 )
  {
    v6 = v5 - 1;
    *((_DWORD *)this + 180) = v6;
    v7 = 3LL * v6;
    v8 = *((_QWORD *)this + 89);
    v3 = *(__m128i *)(v8 + 8 * v7);
    v2 = *(_QWORD *)(v8 + 8 * v7 + 16);
  }
  *((_DWORD *)this + 58) = _mm_cvtsi128_si32(v3);
  *((_DWORD *)this + 59) = v3.m128i_i32[1];
  *(_QWORD *)((char *)this + 244) = v2;
  *((_DWORD *)this + 60) = _mm_srli_si128(v3, 8).m128i_i32[1];
}
