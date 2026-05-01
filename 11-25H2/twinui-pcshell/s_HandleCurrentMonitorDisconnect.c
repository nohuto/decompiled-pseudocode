/*
 * XREFs of s_HandleCurrentMonitorDisconnect @ 0x1802C7580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall s_HandleCurrentMonitorDisconnect(__int64 a1, struct IUnknown *a2, char a3)
{
  return ImmersiveMonitorHelper::HandleCurrentMonitorDisconnect(a1, a2, a3);
}
