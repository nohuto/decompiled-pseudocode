/*
 * XREFs of ??0?$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSwapChainRealization@@@Z @ 0x1802AC6C4
 * Callers:
 *     ?Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802ACC7C (-Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AE.c)
 *     ?NotifyInvalidResource@CSwapChainRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802ADEC0 (-NotifyInvalidResource@CSwapChainRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>::com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 24));
  return a1;
}
