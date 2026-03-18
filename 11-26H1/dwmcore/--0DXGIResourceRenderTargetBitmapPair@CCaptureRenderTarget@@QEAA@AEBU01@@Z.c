/*
 * XREFs of ??0DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@AEBU01@@Z @ 0x1801D9508
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x18025684C (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 */

CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *__fastcall CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair::DXGIResourceRenderTargetBitmapPair(
        CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *this,
        const struct CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    *((_QWORD *)a2 + 1));
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    (_QWORD *)this + 2,
    *((_QWORD *)a2 + 2));
  return this;
}
