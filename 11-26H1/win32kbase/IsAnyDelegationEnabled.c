/*
 * XREFs of IsAnyDelegationEnabled @ 0x140167930
 * Callers:
 *     SetInputDelegationModeImpl @ 0x14021C0D0 (SetInputDelegationModeImpl.c)
 *     UpdateDelegationTargetForMouseInput @ 0x14021C4C0 (UpdateDelegationTargetForMouseInput.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsAnyDelegationEnabled(int a1, int a2, int a3)
{
  return *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19632) + 8LL) != 0;
}
