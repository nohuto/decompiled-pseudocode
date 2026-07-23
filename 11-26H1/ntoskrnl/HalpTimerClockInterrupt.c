/*
 * XREFs of HalpTimerClockInterrupt @ 0x140221DE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x140220C90 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpMcaQueueDpc @ 0x1402219D8 (HalpMcaQueueDpc.c)
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     HalpScanForProfilingCorruption @ 0x140461914 (HalpScanForProfilingCorruption.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerClockInterrupt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int8 v4; // si
  __int64 v5; // rdx
  struct _KTHREAD **v6; // rbx
  char v7; // cl
  char v8; // al
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v14; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 136);
  v4 = *(_BYTE *)(v3 + 41);
  if ( (*(_DWORD *)(HalpClockTimer + 224) & 0x10000) != 0 )
    v5 = *(_QWORD *)(HalpClockTimer + 72) + *(_DWORD *)(HalpClockTimer + 80) * KeGetPcr()->Prcb.Number;
  else
    v5 = *(_QWORD *)(HalpClockTimer + 72);
  guard_dispatch_icall_no_overrides(v5, v5, a3);
  v6 = &IommuInterfaceStateChangeCallbackPushLock.WaitBlock[2].Thread
     + 3 * (((unsigned __int8)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u) + 1) & 0xF);
  *(LARGE_INTEGER *)v6 = RtlGetInterruptTimePrecise(&PerformanceCounter);
  *((_DWORD *)v6 + 2) = KeGetPcr()->Prcb.Number;
  *((_DWORD *)v6 + 3) = KiClockTimerOwner;
  *((_BYTE *)v6 + 16) = 0;
  v7 = KeGetCurrentPrcb()->PendingTickFlags & 1;
  *((_BYTE *)v6 + 16) = v7;
  v8 = v7 | KeGetCurrentPrcb()->PendingTickFlags & 2;
  *((_BYTE *)v6 + 16) = v8;
  if ( KeGetCurrentPrcb()->ClockOwner )
    *((_BYTE *)v6 + 16) = v8 | 4;
  if ( (KeGetCurrentPrcb()->PendingTickFlags & 1) != 0 )
  {
    KeClockInterruptNotify(v3, v4, 0LL);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      v11 = MEMORY[0xFFFFF78000000008];
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      v12 = (unsigned int)HalpClockWorkUnion;
      if ( HalpClockWorkUnion && (_WORD)HalpClockWorkUnion )
      {
        LOWORD(HalpClockWorkUnion) = 0;
        HalpMcaQueueDpc(v12, SBYTE1(v12));
      }
      CurrentPrcb = KeGetCurrentPrcb();
      if ( HalpWatchdogTimer && CurrentPrcb->ClockOwner )
      {
        if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
          guard_dispatch_icall_no_overrides(v12, v11, v10);
        if ( HalpTimerWatchdogResetCount == -1 )
          HalpTimerWatchdogTriggerSystemReset(0);
      }
      if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
      {
        LODWORD(v3) = KeGetPcr()->Prcb.Number;
        v14 = (_QWORD *)(HalpCounterSetInfo + 24 * v3);
        if ( MEMORY[0xFFFFF78000000008] - v14[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v14 != v14 )
            guard_dispatch_icall_no_overrides(0LL, 0LL, v10);
          HalpScanForProfilingCorruption((unsigned int)v3);
          v14[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
