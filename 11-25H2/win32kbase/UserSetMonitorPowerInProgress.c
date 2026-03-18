/*
 * XREFs of UserSetMonitorPowerInProgress @ 0x14015BE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserSetMonitorPowerInProgress(__int64 a1)
{
  char v1; // bl
  __int64 result; // rax

  v1 = a1;
  result = W32GetUserGdiSessionState(a1);
  *(_BYTE *)(result + 1) = v1;
  return result;
}
