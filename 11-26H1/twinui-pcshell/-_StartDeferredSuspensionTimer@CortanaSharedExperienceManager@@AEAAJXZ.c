/*
 * XREFs of ?_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180378660
 * Callers:
 *     ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180373040 (-Hide@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180377D0C (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001D8C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CortanaExperienceManager_DeferredSuspensionTimerStarted@CortanaProactiveTelemetry@@SAXXZ @ 0x180372298 (-CortanaExperienceManager_DeferredSuspensionTimerStarted@CortanaProactiveTelemetry@@SAXXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_StartDeferredSuspensionTimer(struct _TP_TIMER **this)
{
  void *v2; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v4; // r9
  struct _TP_TIMER *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  CortanaProactiveTelemetry::CortanaExperienceManager_DeferredSuspensionTimerStarted((__int64)this);
  v2 = (void *)*((unsigned int *)this + 116);
  pftDueTime = (struct _FILETIME)-50000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_a507c410840ea9a9d86ed008efcb15bb_::_lambda_invoker_cdecl_,
                      v2,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 59,
    ThreadpoolTimer);
  v5 = this[59];
  if ( !v5 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x5B9,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
             v4);
  SetThreadpoolTimer(v5, &pftDueTime, 0, 0);
  return 0LL;
}
