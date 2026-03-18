/*
 * XREFs of ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14006CF6C
 * Callers:
 *     IsKeyboardDelegationEnabledForThread @ 0x14006C780 (IsKeyboardDelegationEnabledForThread.c)
 *     IsSpatialDelegationEnabledForThread @ 0x14006CF30 (IsSpatialDelegationEnabledForThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputDelegation::IsDelegationEnabledForThread(PETHREAD *this, const struct tagTHREADINFO *a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  v2 = (unsigned int)PsGetThreadProcessId(*this) & 0xFFFFFFFC;
  return v2 == **(_DWORD **)(W32GetUserSessionState(v4, v3, v5) + 19632);
}
