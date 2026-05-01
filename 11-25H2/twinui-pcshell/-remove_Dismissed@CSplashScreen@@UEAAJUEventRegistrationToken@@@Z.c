/*
 * XREFs of ?remove_Dismissed@CSplashScreen@@UEAAJUEventRegistrationToken@@@Z @ 0x18030B250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSplashScreen::remove_Dismissed(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           this + 9,
           (struct IUnknown *)a2.value);
}
