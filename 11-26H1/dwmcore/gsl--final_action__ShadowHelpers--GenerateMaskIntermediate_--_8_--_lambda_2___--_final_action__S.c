/*
 * XREFs of gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___ @ 0x1801DCCC0
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801594E8 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180290C5C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x18005CB40 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 */

void __fastcall gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___(
        _BYTE *a1)
{
  __int64 v1; // rdx

  if ( a1[8] )
  {
    CBaseClipStack::Pop((CBaseClipStack *)(*(_QWORD *)a1 + 3104LL));
    --*(_QWORD *)(*(_QWORD *)(v1 + 744) - 184LL);
    *(_BYTE *)(v1 + 8065) = 1;
  }
}
