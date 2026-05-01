/*
 * XREFs of ?OnClientWindowReadyForPresentationChangedHandler@MeetNowExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1803BA060
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18065D17C (-UpdateLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUIViewWrapper@V.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnClientWindowReadyForPresentationChangedHandler(
        MeetNowExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  SingleViewLightDismissHelper::UpdateLightDismiss((char *)this + 168, 3330LL, *((_QWORD *)this + 26));
  return 0LL;
}
