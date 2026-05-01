/*
 * XREFs of ?remove_Dismissed@CSplashScreen@@UEAAJUEventRegistrationToken@@@Z @ 0x180306EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSplashScreen::remove_Dismissed(CSplashScreen *this, struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
           (__int64)this + 72,
           a2.value);
}
