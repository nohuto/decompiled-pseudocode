/*
 * XREFs of ??$com_copy@UIMultitaskingViewTaskScheduler@@AEAV?$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800E494C
 * Callers:
 *     ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x1800E40C0 (-Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z.c)
 * Callees:
 *     ??$?0UIMultitaskingViewServiceProvider@@@?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMultitaskingViewServiceProvider@@U?$integral_constant@D$01@wistd@@@Z @ 0x1800E4B1C (--$-0UIMultitaskingViewServiceProvider@@@-$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_excep.c)
 */

__int64 __fastcall wil::com_copy<IMultitaskingViewTaskScheduler,Microsoft::WRL::ComPtr<IMultitaskingViewServiceProvider> &>(
        __int64 a1,
        _QWORD *a2)
{
  wil::com_ptr_t<IMultitaskingViewTaskScheduler,wil::err_exception_policy>::com_ptr_t<IMultitaskingViewTaskScheduler,wil::err_exception_policy>(
    a1,
    *a2);
  return a1;
}
