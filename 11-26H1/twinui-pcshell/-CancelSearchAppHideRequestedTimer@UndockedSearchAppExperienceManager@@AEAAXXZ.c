/*
 * XREFs of ?CancelSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801ECE50
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18023C500 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18023C8E8 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18023CB30 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x18023D104 (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B6AA0 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?UndockedSearchAppExperienceManager_SearchAppHideRequestedTimerCanceled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1801ECE84 (-UndockedSearchAppExperienceManager_SearchAppHideRequestedTimerCanceled@SearchAppExperienceManag.c)
 */

void __fastcall UndockedSearchAppExperienceManager::CancelSearchAppHideRequestedTimer(
        UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER **v1; // rbx

  v1 = (struct _TP_TIMER **)((char *)this + 880);
  if ( *((_QWORD *)this + 110) )
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SearchAppHideRequestedTimerCanceled();
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      0LL);
  }
}
