/*
 * XREFs of ?CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801FA15C
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x18023D104 (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18023D23C (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B6AA0 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?UndockedSearchAppExperienceManager_LastResortSuspensionTimerCanceled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1801FA190 (-UndockedSearchAppExperienceManager_LastResortSuspensionTimerCanceled@SearchAppExperienceManager.c)
 */

void __fastcall UndockedSearchAppExperienceManager::CancelLastResortSuspensionTimer(
        UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER **v1; // rbx

  v1 = (struct _TP_TIMER **)((char *)this + 776);
  if ( *((_QWORD *)this + 97) )
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_LastResortSuspensionTimerCanceled();
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      0LL);
  }
}
