/*
 * XREFs of ??1?$com_ptr_t@VCVirtualDesktopSwitcherService@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180218860
 * Callers:
 *     ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180135028 (-CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180063BA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 */

__int64 __fastcall wil::com_ptr_t<CVirtualDesktopSwitcherService,wil::err_exception_policy>::~com_ptr_t<CVirtualDesktopSwitcherService,wil::err_exception_policy>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
             v2,
             a2);
  return result;
}
