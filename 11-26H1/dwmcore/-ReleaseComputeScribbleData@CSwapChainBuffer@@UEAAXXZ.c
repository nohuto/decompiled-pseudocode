/*
 * XREFs of ?ReleaseComputeScribbleData@CSwapChainBuffer@@UEAAXXZ @ 0x1801D7010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwapChainBuffer::ReleaseComputeScribbleData(CSwapChainBuffer *this)
{
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset((char *)this + 112);
}
