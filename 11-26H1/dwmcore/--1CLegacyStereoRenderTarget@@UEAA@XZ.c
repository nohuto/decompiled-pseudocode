/*
 * XREFs of ??1CLegacyStereoRenderTarget@@UEAA@XZ @ 0x180246010
 * Callers:
 *     ??_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z @ 0x180246A00 (--_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18021ED74 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CLegacyStereoRenderTarget::~CLegacyStereoRenderTarget(CLegacyStereoRenderTarget *this)
{
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>((__int64 *)this + 4065);
  CLegacyRenderTarget::~CLegacyRenderTarget(this);
}
