/*
 * XREFs of ??1?$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802AC870
 * Callers:
 *     ?Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802ACC7C (-Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AE.c)
 *     ?NotifyInvalidResource@CSwapChainRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802ADEC0 (-NotifyInvalidResource@CSwapChainRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800E2EC0 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>::~com_ptr_t<CSwapChainRealization,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 && !(unsigned int)CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v1 + 24)) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 24));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 264LL))(v1);
    if ( !(unsigned int)CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v1 + 24)) )
    {
      CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v1 + 24));
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 256LL))(v1, 1LL);
    }
  }
}
