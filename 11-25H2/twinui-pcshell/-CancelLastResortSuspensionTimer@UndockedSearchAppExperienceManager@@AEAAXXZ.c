/*
 * XREFs of ?CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800124EC
 * Callers:
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180012520 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x1800159CC (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800AD728 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803ADFE4 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?UndockedSearchAppExperienceManager_LastResortSuspensionTimerCanceled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x180011928 (-UndockedSearchAppExperienceManager_LastResortSuspensionTimerCanceled@SearchAppExperienceManager.c)
 */

void __fastcall UndockedSearchAppExperienceManager::CancelLastResortSuspensionTimer(
        UndockedSearchAppExperienceManager *this)
{
  char *v1; // rbx

  v1 = (char *)this + 776;
  if ( *((_QWORD *)this + 97) )
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_LastResortSuspensionTimerCanceled();
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      0LL);
  }
}
