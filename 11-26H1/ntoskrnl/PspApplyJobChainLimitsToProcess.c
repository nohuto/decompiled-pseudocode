/*
 * XREFs of PspApplyJobChainLimitsToProcess @ 0x140A94870
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140946FB8 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140204CDC (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     PsUpdateComponentPower @ 0x140451F70 (PsUpdateComponentPower.c)
 *     RtlInterlockedSetClearBits @ 0x1404C51EC (RtlInterlockedSetClearBits.c)
 *     PspComputeExecutionState @ 0x140A94964 (PspComputeExecutionState.c)
 *     PspApplyJobLimitsToProcess @ 0x140A94A08 (PspApplyJobLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x140AED7E8 (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspApplyJobChainLimitsToProcess(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // edx

  PspApplyJobLimitsToProcess((struct _KPROCESS *)a3);
  if ( *(_QWORD *)(a1 + 1248) )
  {
    if ( a2 && *(_QWORD *)(a2 + 1248) || PsCpuFairShareEnabled )
      PspSetProcessSchedulingGroup(a3, 0LL);
    PspSetProcessSchedulingGroup(a3, *(_QWORD *)(a1 + 1248));
  }
  if ( (*(_DWORD *)(a1 + 1552) & 0x40000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a3 + 136), 4u);
  v6 = PspComputeExecutionState(a1);
  if ( (*(_DWORD *)(a3 + 1532) & 1) != 0 )
    v6 &= ~2u;
  *(_BYTE *)(a3 + 2043) = v6;
  if ( a2 )
    v7 = *(_DWORD *)(a2 + 1084);
  else
    v7 = 5;
  if ( v7 != *(_DWORD *)(a1 + 1084) )
    PspNotifyProcessEffectiveIoLimitChanged(a3, v7, 0);
  PsUpdateComponentPower((PEPROCESS)a3, 8u, *(_QWORD *)(a1 + 1808));
  return RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 496), 4, 32);
}
