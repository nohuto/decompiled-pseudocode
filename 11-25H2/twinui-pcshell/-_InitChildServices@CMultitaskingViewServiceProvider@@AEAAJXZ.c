/*
 * XREFs of ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800F9DAC
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x1800F9BD8 (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FA1C0 (-CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@.c)
 *     ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FA398 (-CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID.c)
 *     ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FA640 (-MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FA708 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 *     ?CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C3BC0 (-CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A8AA4 (-CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802BC6B8 (-TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::_InitChildServices(IUnknown *punkSite)
{
  IUnknown *v1; // r14
  const struct _GUID *v3; // rdx
  HRESULT Instance; // ebx
  __int64 v5; // rdx
  const struct _GUID *v6; // rdx
  const struct _GUID *v7; // rdx
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // r8
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = punkSite + 23;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[23]);
  Instance = CAllUpViewService_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)((unsigned __int64)&punkSite[12] & -(__int64)(punkSite != 0LL)),
               v3,
               (void **)&v1->lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 257LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&punkSite[29]);
  Instance = CVirtualDesktopSwitcherService_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)((unsigned __int64)&punkSite[12] & -(__int64)(punkSite != 0LL)),
               v6,
               (void **)&punkSite[29].lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 258LL;
    goto LABEL_17;
  }
  Instance = IUnknown_SetSite((IUnknown *)v1->lpVtbl, punkSite);
  if ( Instance < 0 )
  {
    v5 = 259LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[24]);
  Instance = CPPIAllUpViewService_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)&punkSite[12],
               v7,
               (void **)&punkSite[24].lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 260LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[25]);
  Instance = MultitaskingViewVisibilityService_CreateInstance(v8, (void **)&punkSite[25].lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 261LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[22]);
  Instance = MultitaskingViewGestureHandler_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)&punkSite[12],
               (struct IMultitaskingViewVisibilityService *)punkSite[25].lpVtbl,
               v9,
               (void **)&punkSite[22].lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 262LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[26]);
  Instance = TabletModeViewManagerProxy_CreateInstance(v10, (void **)&punkSite[26].lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 263LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[27]);
  Instance = CIconLoader_CreateInstance(v11, (void **)&punkSite[27].lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 264LL;
    goto LABEL_17;
  }
  return (unsigned int)Instance;
}
