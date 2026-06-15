/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$5 @ 0x18016653C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return std::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::~unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>(a2 + 128);
}
