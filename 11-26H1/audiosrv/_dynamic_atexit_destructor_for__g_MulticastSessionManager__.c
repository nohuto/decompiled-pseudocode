/*
 * XREFs of _dynamic_atexit_destructor_for__g_MulticastSessionManager__ @ 0x18016D2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_MulticastSessionManager__()
{
  return wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&g_MulticastSessionManager);
}
