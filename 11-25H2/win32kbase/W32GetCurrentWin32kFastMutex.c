/*
 * XREFs of W32GetCurrentWin32kFastMutex @ 0x14010A0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32GetCurrentWin32kFastMutex(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 42536);
}
