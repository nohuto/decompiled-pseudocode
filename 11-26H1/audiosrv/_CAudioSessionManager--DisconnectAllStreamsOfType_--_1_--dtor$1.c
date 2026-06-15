/*
 * XREFs of _CAudioSessionManager::DisconnectAllStreamsOfType_::_1_::dtor$1 @ 0x180168369
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::DisconnectAllStreamsOfType_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::~pair<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>((CAudioSessionInstanceId *)(a2 + 48));
}
