/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18020F894
 * Callers:
 *     ?remove_OverlayDisplayFullscreenChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x18020F850 (-remove_OverlayDisplayFullscreenChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationT.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<-2>>::RemoveDelegate(
           a1,
           a2);
}
