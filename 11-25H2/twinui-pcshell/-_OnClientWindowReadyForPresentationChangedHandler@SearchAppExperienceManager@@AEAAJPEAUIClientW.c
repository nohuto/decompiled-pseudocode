/*
 * XREFs of ?_OnClientWindowReadyForPresentationChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180370050
 * Callers:
 *     <none>
 * Callees:
 *     ?CortanaExperienceManager_OnClientWindowReadyForPresentationChanged@CortanaProactiveTelemetry@@SAXXZ @ 0x18036B148 (-CortanaExperienceManager_OnClientWindowReadyForPresentationChanged@CortanaProactiveTelemetry@@S.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnClientWindowReadyForPresentationChangedHandler(
        SearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  CortanaProactiveTelemetry::CortanaExperienceManager_OnClientWindowReadyForPresentationChanged((__int64)this);
  return 0LL;
}
