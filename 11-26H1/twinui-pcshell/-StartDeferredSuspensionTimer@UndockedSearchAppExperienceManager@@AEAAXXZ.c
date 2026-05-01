/*
 * XREFs of ?StartDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1802C5254
 * Callers:
 *     ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x18023BEB4 (-ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001D8C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UndockedSearchAppExperienceManager_DeferredSuspensionStarted@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1802C52E4 (-UndockedSearchAppExperienceManager_DeferredSuspensionStarted@SearchAppExperienceManagerTelemetr.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall UndockedSearchAppExperienceManager::StartDeferredSuspensionTimer(struct _TP_TIMER **pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v3; // r9
  struct _TP_TIMER *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_DeferredSuspensionStarted();
  pftDueTime = (struct _FILETIME)-50000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(lambda_6658f1f8a43dfdccf56aab26c5777bf2_::_lambda_invoker_cdecl_, pv, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    pv + 95,
    ThreadpoolTimer);
  v4 = pv[95];
  if ( !v4 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x1075,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v3);
  SetThreadpoolTimer(v4, &pftDueTime, 0, 0);
}
