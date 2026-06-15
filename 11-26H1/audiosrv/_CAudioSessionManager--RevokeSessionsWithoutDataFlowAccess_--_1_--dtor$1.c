/*
 * XREFs of _CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$1 @ 0x1801683DB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::~unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>(a2 + 64);
}
