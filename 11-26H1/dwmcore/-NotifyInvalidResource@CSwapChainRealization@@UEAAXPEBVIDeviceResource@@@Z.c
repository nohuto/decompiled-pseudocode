/*
 * XREFs of ?NotifyInvalidResource@CSwapChainRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802ADEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSwapChainRealization@@@Z @ 0x1802AC6C4 (--0-$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSwapChainReal.c)
 *     ??1?$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802AC870 (--1-$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseTexture@CSwapChainRealization@@IEAAXXZ @ 0x1802AE240 (-ReleaseTexture@CSwapChainRealization@@IEAAXXZ.c)
 */

void __fastcall CSwapChainRealization::NotifyInvalidResource(
        CSwapChainRealization *this,
        const struct IDeviceResource *a2)
{
  CSwapChainRealization *v2; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CSwapChainRealization *)((char *)this - 56);
  wil::com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>::com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>(
    &v3,
    (__int64)this - 56);
  CSwapChainRealization::ReleaseTexture(v2);
  wil::com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>::~com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>(&v3);
}
