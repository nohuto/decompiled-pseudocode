/*
 * XREFs of gsl::final_action__CDrawingContext::DrawScene3D_::_10_::_lambda_1___::_final_action__CDrawingContext::DrawScene3D_::_10_::_lambda_1___ @ 0x1802347DC
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800822E0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 */

void __fastcall gsl::final_action__CDrawingContext::DrawScene3D_::_10_::_lambda_1___::_final_action__CDrawingContext::DrawScene3D_::_10_::_lambda_1___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    CDrawingContext::PopGpuClipRectInternal(*(CDrawingContext **)a1, 0);
}
