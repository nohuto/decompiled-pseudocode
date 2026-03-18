/*
 * XREFs of HalpTimerAlwaysOnClockInterrupt @ 0x140596CC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14021F300 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KeClockInterruptNotify @ 0x1402216C0 (KeClockInterruptNotify.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     HalpScanForProfilingCorruptionInternal @ 0x140468338 (HalpScanForProfilingCorruptionInternal.c)
 *     HalpTimerSwitchToNormalClock @ 0x1405202C0 (HalpTimerSwitchToNormalClock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerAlwaysOnClockInterrupt(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  unsigned __int8 v3; // si
  __int64 InternalData; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned int Number; // eax
  __int64 v8; // rcx
  unsigned __int8 v9; // r8
  ULONG_PTR v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  _QWORD *v14; // rdi
  __int64 QuadPart; // rbx
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_BYTE *)(v2 + 41);
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  guard_dispatch_icall_no_overrides(InternalData, v5);
  v6 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u) + 1) & 0xF);
  *((_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlock[2].Thread + v6) = RtlGetInterruptTimePrecise(&v17);
  Number = KeGetPcr()->Prcb.Number;
  IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill7[8 * v6 + 136] = 0;
  *(_DWORD *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[8 * v6 + 128] = Number;
  *(_DWORD *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[8 * v6 + 132] = KiClockTimerOwner;
  LOBYTE(v8) = KeGetCurrentPrcb()->PendingTickFlags & 1;
  IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill7[8 * v6 + 136] = v8;
  v9 = v8 | KeGetCurrentPrcb()->PendingTickFlags & 2;
  IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill7[8 * v6 + 136] = v9;
  if ( KeGetCurrentPrcb()->ClockOwner )
    v9 |= 4u;
  IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill7[8 * v6 + 136] = v9 | 8;
  if ( (KeGetCurrentPrcb()->PendingTickFlags & 2) != 0 )
  {
    LOBYTE(v8) = 1;
    HalpTimerSwitchToNormalClock(v8);
    KeClockInterruptNotify(v2, v3, 1u);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      v10 = HalpClockTimer;
      v11 = MEMORY[0xFFFFF78000000008];
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      v12 = HalpClockWorkUnion;
      if ( HalpClockWorkUnion && (_WORD)HalpClockWorkUnion )
      {
        LOWORD(HalpClockWorkUnion) = 0;
        v13 = v12 >> 8;
        if ( (_BYTE)v12 && McaWmiCallback )
          guard_dispatch_icall_no_overrides(1496727831LL, 1LL);
        if ( (_BYTE)v13 )
        {
          v10 = *(_QWORD *)(KiProcessorBlock[0] + 128);
          if ( v10 )
          {
            *(_QWORD *)(KiProcessorBlock[0] + 128) = 0LL;
            KiInsertQueueDpc(v10, MEMORY[0xFFFFF78000000014], HIDWORD(MEMORY[0xFFFFF78000000014]), 0LL, 0);
          }
        }
      }
      if ( KeGetCurrentPrcb()->ClockOwner && HalpWatchdogTimer )
      {
        if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
          guard_dispatch_icall_no_overrides(v10, v11);
        if ( HalpTimerWatchdogResetCount == -1 )
          HalpTimerWatchdogTriggerSystemReset(0);
      }
      if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
      {
        LODWORD(v1) = KeGetPcr()->Prcb.Number;
        v14 = (_QWORD *)(HalpCounterSetInfo + 24 * v1);
        if ( MEMORY[0xFFFFF78000000008] - v14[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v14 != v14 )
            guard_dispatch_icall_no_overrides(0LL, 0LL);
          QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
          HalpScanForProfilingCorruptionInternal(0, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(1, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(100, v1, QuadPart);
          HalpScanForProfilingCorruptionInternal(101, v1, QuadPart);
          v14[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
