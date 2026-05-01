/*
 * XREFs of ?OnPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180249D0C
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1802499E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180015918 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x180248D9C (-ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ?UndockedSearchExperienceManager_PrelaunchDeferralTimerExpired@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1803B1AB8 (-UndockedSearchExperienceManager_PrelaunchDeferralTimerExpired@SearchAppExperienceManagerTelemet.c)
 */

void __fastcall UndockedSearchAppExperienceManager::OnPrelaunchDeferralTimer(UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *v3; // rcx

  v1 = (struct _TP_TIMER **)((char *)this + 888);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 111);
  if ( v3 )
  {
    if ( !IsThreadpoolTimerSet(v3) )
    {
      SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_PrelaunchDeferralTimerExpired();
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v1,
        0LL);
      UndockedSearchAppExperienceManager::ActivationDeferralComplete(this, 1);
    }
  }
}
