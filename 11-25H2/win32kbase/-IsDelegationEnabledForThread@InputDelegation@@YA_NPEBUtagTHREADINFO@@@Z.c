/*
 * XREFs of ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1400B9D44
 * Callers:
 *     IsSpatialDelegationEnabledForThread @ 0x1400B9CC0 (IsSpatialDelegationEnabledForThread.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1400B9CF0 (IsKeyboardDelegationEnabledForThread.c)
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400B9D20 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 */

bool __fastcall InputDelegation::IsDelegationEnabledForThread(PETHREAD *this, const struct tagTHREADINFO *a2)
{
  unsigned int ThreadProcessId; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  ThreadProcessId = (unsigned int)PsGetThreadProcessId(*this);
  return (ThreadProcessId & 0xFFFFFFFC) == *(_DWORD *)InputDelegation::CInputDelegationInfo::GetInstance(v4, v3);
}
