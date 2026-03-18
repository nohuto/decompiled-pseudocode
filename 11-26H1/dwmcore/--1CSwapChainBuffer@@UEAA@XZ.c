/*
 * XREFs of ??1CSwapChainBuffer@@UEAA@XZ @ 0x18029CD00
 * Callers:
 *     ??1CDDisplaySwapChainBuffer@@MEAA@XZ @ 0x18029CCB0 (--1CDDisplaySwapChainBuffer@@MEAA@XZ.c)
 *     ??_ECLegacySwapChainBuffer@@MEAAPEAXI@Z @ 0x1802A5B10 (--_ECLegacySwapChainBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CSwapChainBuffer::~CSwapChainBuffer(FastRegion::CRegion **this)
{
  FastRegion::CRegion::FreeMemory(this + 15);
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(this + 14);
  FastRegion::CRegion::FreeMemory(this + 4);
}
