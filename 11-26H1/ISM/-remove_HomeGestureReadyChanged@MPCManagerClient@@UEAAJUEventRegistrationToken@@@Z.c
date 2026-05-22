/*
 * XREFs of ?remove_HomeGestureReadyChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x18016B3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::remove_HomeGestureReadyChanged(
        MPCManagerClient *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::ServerConnectionArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           (__int64)this + 1608,
           a2.value);
}
