/*
 * XREFs of ?StartLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001E0B8
 * Callers:
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18023C8E8 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001D8C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UndockedSearchAppExperienceManager_LastResortSuspensionStarted@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18001E148 (-UndockedSearchAppExperienceManager_LastResortSuspensionStarted@SearchAppExperienceManagerTeleme.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall UndockedSearchAppExperienceManager::StartLastResortSuspensionTimer(struct _TP_TIMER **pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v3; // r9
  struct _TP_TIMER *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_LastResortSuspensionStarted();
  pftDueTime = (struct _FILETIME)-1200000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(lambda_f2cda6ee90f024b0015d0835e9b0d656_::_lambda_invoker_cdecl_, pv, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    pv + 97,
    ThreadpoolTimer);
  v4 = pv[97];
  if ( !v4 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x10A5,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v3);
  SetThreadpoolTimer(v4, &pftDueTime, 0, 0);
}
