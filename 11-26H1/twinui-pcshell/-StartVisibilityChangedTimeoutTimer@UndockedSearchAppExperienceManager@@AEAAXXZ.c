/*
 * XREFs of ?StartVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180203718
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001D8C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UndockedSearchAppExperienceManager_SearchAppVisibilityChangedTimeoutTimerStarted@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1802037A8 (-UndockedSearchAppExperienceManager_SearchAppVisibilityChangedTimeoutTimerStarted@SearchAppExper.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall UndockedSearchAppExperienceManager::StartVisibilityChangedTimeoutTimer(struct _TP_TIMER **pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v3; // r9
  struct _TP_TIMER *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SearchAppVisibilityChangedTimeoutTimerStarted();
  pftDueTime = (struct _FILETIME)-5000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(lambda_fa4fa0583ff6b4cef130c22b12f95f68_::_lambda_invoker_cdecl_, pv, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    pv + 96,
    ThreadpoolTimer);
  v4 = pv[96];
  if ( !v4 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x10D8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v3);
  SetThreadpoolTimer(v4, &pftDueTime, 0, 0);
}
