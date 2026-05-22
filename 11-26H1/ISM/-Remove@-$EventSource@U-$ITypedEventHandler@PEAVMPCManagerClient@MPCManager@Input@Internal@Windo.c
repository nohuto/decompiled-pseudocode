/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180169410
 * Callers:
 *     ?remove_ButtonsChangedDuringHomeGesture@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x18016B3B0 (-remove_ButtonsChangedDuringHomeGesture@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_HomeGestureReadyChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x18016B3D0 (-remove_HomeGestureReadyChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_OnHomeGestureDetected@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x18016B3F0 (-remove_OnHomeGestureDetected@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_ServerConnectionChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x18016B410 (-remove_ServerConnectionChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_ConstantChanged@MPCConstantManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x180176A80 (-remove_ConstantChanged@MPCConstantManagerClient@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::ServerConnectionArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCConstantManagerClient *,Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::RemoveDelegate(
           a1,
           a2);
}
