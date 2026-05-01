/*
 * XREFs of ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180134CBC
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x1801348CC (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180134E4C (-CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@.c)
 *     ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180135028 (-CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID.c)
 *     ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801352F0 (-MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1801353C0 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 *     ?CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BA998 (-CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x18029D110 (-CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B355C (-TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::_InitChildServices(IUnknown *punkSite)
{
  IUnknown *v1; // r14
  HRESULT Instance; // ebx
  __int64 v4; // rdx
  const struct _GUID *v5; // rdx
  const struct _GUID *v6; // rdx
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // r8
  const struct _GUID *v9; // rcx
  const struct _GUID *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = punkSite + 23;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[23]);
  Instance = CAllUpViewService_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)((unsigned __int64)&punkSite[12] & -(__int64)(punkSite != 0LL)),
               (const struct _GUID *)&punkSite[12],
               (void **)&v1->lpVtbl);
  if ( Instance < 0 )
  {
    v4 = 257LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&punkSite[29]);
  Instance = CVirtualDesktopSwitcherService_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)((unsigned __int64)&punkSite[12] & -(__int64)(punkSite != 0LL)),
               v5,
               (void **)&punkSite[29].lpVtbl);
  if ( Instance < 0 )
  {
    v4 = 258LL;
    goto LABEL_17;
  }
  Instance = IUnknown_SetSite((IUnknown *)v1->lpVtbl, punkSite);
  if ( Instance < 0 )
  {
    v4 = 259LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[24]);
  Instance = CPPIAllUpViewService_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)((unsigned __int64)&punkSite[12] & -(__int64)(punkSite != 0LL)),
               v6,
               (void **)&punkSite[24].lpVtbl);
  if ( Instance < 0 )
  {
    v4 = 260LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[25]);
  Instance = MultitaskingViewVisibilityService_CreateInstance(v7, (void **)&punkSite[25].lpVtbl);
  if ( Instance < 0 )
  {
    v4 = 261LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[22]);
  Instance = MultitaskingViewGestureHandler_CreateInstance(
               (struct IMultitaskingViewTaskScheduler *)((unsigned __int64)&punkSite[12] & -(__int64)(punkSite != 0LL)),
               (struct IMultitaskingViewVisibilityService *)punkSite[25].lpVtbl,
               v8,
               (void **)&punkSite[22].lpVtbl);
  if ( Instance < 0 )
  {
    v4 = 262LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[26]);
  Instance = TabletModeViewManagerProxy_CreateInstance(v9, (void **)&punkSite[26].lpVtbl);
  if ( Instance < 0 )
  {
    v4 = 263LL;
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[27]);
  Instance = CIconLoader_CreateInstance(v10, (void **)&punkSite[27].lpVtbl);
  if ( Instance < 0 )
  {
    v4 = 264LL;
    goto LABEL_17;
  }
  return (unsigned int)Instance;
}
