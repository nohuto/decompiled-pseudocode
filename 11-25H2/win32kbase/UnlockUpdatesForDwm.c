/*
 * XREFs of UnlockUpdatesForDwm @ 0x1401D2A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockUpdatesForDwm(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2);
  *(_DWORD *)(result + 70564) = 0;
  return result;
}
