/*
 * XREFs of _CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1_::operator() @ 0x180256B00
 * Callers:
 *     std::_Func_impl_no_alloc__CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1__long_CVisual___CVisualTree___::_Do_call @ 0x180258100 (std--_Func_impl_no_alloc__CCaptureRenderTarget--AddCursorInvalidRects_--_2_--_lambd_ea_180258100.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180057D90 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x18015DC60 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?AddDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B5D94 (-AddDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVCMILMatrix@@@Z @ 0x180256DFC (-ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVC.c)
 */

__int64 __fastcall CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1_::operator()(
        __int64 a1,
        struct CVisual *a2)
{
  CCaptureRenderTarget *v4; // rcx
  _BYTE *v5; // rax
  const struct D2D_RECT_F *Bounds; // rax
  __int128 v8; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v9[64]; // [rsp+40h] [rbp-58h] BYREF
  int v10; // [rsp+80h] [rbp-18h]

  v4 = *(CCaptureRenderTarget **)a1;
  if ( !*((_BYTE *)v4 + 2280)
    && !CVisualTree::_IsInTree(*((_QWORD *)v4 + 14), (__int64)a2, 0)
    && CVisualTree::_IsInTree(**(_QWORD **)(a1 + 8), (__int64)a2, 0) )
  {
    v5 = *(_BYTE **)(a1 + 16);
    v10 = 0;
    if ( !*v5 )
    {
      if ( !CCaptureRenderTarget::ComputeCursorToDeviceTransform(
              *(CCaptureRenderTarget **)a1,
              a2,
              **(struct CVisual ***)(a1 + 24),
              **(struct CVisualTree ***)(a1 + 8),
              (struct CMILMatrix *)v9) )
        CTargetDirtyBase<8>::SetFullDirty(*(_QWORD *)a1 + 408LL);
      **(_BYTE **)(a1 + 16) = 1;
    }
    Bounds = (const struct D2D_RECT_F *)CVisual::GetBounds((__int64)a2, **(_QWORD **)(a1 + 8));
    v8 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v9, Bounds, (float *)&v8);
    CTargetDirtyBase<8>::AddDirtyRect(*(_QWORD *)a1 + 408LL, (float *)&v8);
  }
  return 0LL;
}
