/*
 * XREFs of _CLegacyRenderTarget::Render_::_43_::_lambda_1_::operator() @ 0x180252DCC
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800F0A20 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18008BAF0 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 */

void __fastcall CLegacyRenderTarget::Render_::_43_::_lambda_1_::operator()(
        __int64 *a1,
        struct D2D_RECT_F *a2,
        double a3)
{
  CLegacyRenderTarget::NotifyRenderedRect(*a1, a2, 1);
  CTargetDirtyBase<8>::AddTightDeviceDirtyRect(*a1 + 30208, (unsigned int *)a2, a3);
}
