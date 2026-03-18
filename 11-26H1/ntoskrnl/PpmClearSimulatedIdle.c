/*
 * XREFs of PpmClearSimulatedIdle @ 0x14042A3B8
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     KeGetProcessorIndexFromNumber @ 0x140428990 (KeGetProcessorIndexFromNumber.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall PpmClearSimulatedIdle(struct _PROCESSOR_NUMBER *a1)
{
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v3; // ecx
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 CurrentIrql; // bl
  _PPM_IDLE_STATES *IdleStates; // rax
  unsigned int v8; // edi
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a1);
  if ( ProcessorIndexFromNumber == -1 )
    return 3221225485LL;
  v3 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * ProcessorIndexFromNumber);
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v3 >> 6);
  Affinity.Mask = 1LL << v3;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, 2LL);
  }
  IdleStates = CurrentPrcb->PowerState.IdleStates;
  if ( IdleStates )
  {
    if ( IdleStates->IdleOverride )
    {
      IdleStates->IdleOverride = 0;
      IdleStates->OverrideIndex = 0;
    }
    v8 = 0;
  }
  else
  {
    v8 = -1073741637;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v8;
}
