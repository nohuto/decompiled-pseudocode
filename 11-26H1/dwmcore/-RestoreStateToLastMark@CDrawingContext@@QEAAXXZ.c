/*
 * XREFs of ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18003D634
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801594E8 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_3___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_3___ @ 0x1801D9654 (gsl--final_action__ShadowHelpers--GenerateMaskIntermediate_--_8_--_lambda_3___--_final_action__S.c)
 * Callees:
 *     ?Pop@CDrawingContext@@QEAAJXZ @ 0x18003EE08 (-Pop@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CDrawingContext::RestoreStateToLastMark(CDrawingContext *this)
{
  int v2; // edx
  int v3; // eax

  while ( 1 )
  {
    v2 = *((_DWORD *)this + 66);
    if ( !v2 )
      break;
    if ( *(_DWORD *)(*((_QWORD *)this + 32) + 16LL * (unsigned int)(v2 - 1)) == 12 )
    {
      *((_DWORD *)this + 66) = v2 - 1;
      return;
    }
    v3 = CDrawingContext::Pop(this);
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1038u, 0LL);
  }
}
