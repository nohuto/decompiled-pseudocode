/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionState @ 0x140295E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserDwmGetRemoteSessionOcclusionState(__int64 a1, __int64 a2)
{
  return *(int *)(W32GetUserSessionState(a1, a2) + 68860);
}
