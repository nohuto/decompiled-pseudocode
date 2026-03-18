/*
 * XREFs of PpmSetSimulatedIdle @ 0x14042A28C
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

__int64 __fastcall PpmSetSimulatedIdle(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v4; // ecx
  __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 CurrentIrql; // di
  _PPM_IDLE_STATES *IdleStates; // rax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  if ( ProcessorIndexFromNumber == -1 )
    return 3221225485LL;
  v4 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * ProcessorIndexFromNumber);
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v4 >> 6);
  Affinity.Mask = 1LL << v4;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, 2LL);
  }
  IdleStates = CurrentPrcb->PowerState.IdleStates;
  if ( IdleStates )
  {
    v10 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 < IdleStates->ProcessorIdleCount )
    {
      IdleStates->IdleOverride = 1;
      v9 = 0;
      IdleStates->OverrideIndex = v10;
    }
    else
    {
      v9 = -1073741811;
    }
  }
  else
  {
    v9 = -1073741637;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v9;
}
