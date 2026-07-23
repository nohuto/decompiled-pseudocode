/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x140252FDC
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KeQueryTotalCycleTimeThread @ 0x14021C500 (KeQueryTotalCycleTimeThread.c)
 *     NtFlushProcessWriteBuffers @ 0x140252FC0 (NtFlushProcessWriteBuffers.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407F60E4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     ExProcessCounterSetCallback @ 0x14091D960 (ExProcessCounterSetCallback.c)
 *     PspTerminateAllThreads @ 0x14094AA84 (PspTerminateAllThreads.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140AA4DE0 (PsQueryTotalCycleTimeProcess.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B643BC (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140253150 (KiIpiStallOnPacketTargetsPrcb.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(__int64 a1)
{
  char v1; // bl
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  int v4; // r14d
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rdi
  struct _KAFFINITY_EX *ActiveProcessors; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 result; // rax
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  __int64 (__fastcall *v15)(); // [rsp+48h] [rbp-10h]

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  p_StaticAffinity = &CurrentPrcb->StaticAffinity;
  if ( v1 )
  {
    v10 = KeNumberProcessors_0 - 1;
    v4 = 1;
    LODWORD(p_StaticAffinity) = 0;
  }
  else
  {
    ActiveProcessors = (struct _KAFFINITY_EX *)CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
    *(_QWORD *)&p_StaticAffinity->KeFlushTbAffinity.Count = 2097153LL;
    memset_0(&CurrentPrcb->StaticAffinity.KeRcuAffinity.8, 0, sizeof(CurrentPrcb->StaticAffinity.KeRcuAffinity.8));
    RtlpCopyAffinityEx(
      &CurrentPrcb->StaticAffinity.KeFlushTbAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      ActiveProcessors);
    v7 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + CurrentPrcb->Number) >> 6;
    if ( p_StaticAffinity->KeFlushTbAffinity.Count > (unsigned int)v7 )
    {
      v8 = (unsigned int)v7;
      v9 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v7];
      _bittestandreset64(
        (__int64 *)&v9,
        *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + CurrentPrcb->Number) & 0x3F);
      p_StaticAffinity->KeFlushTbAffinity.Bitmap[v8] = v9;
    }
    v10 = RtlCountSetBitsAffinityEx(&CurrentPrcb->StaticAffinity);
  }
  if ( v10 )
  {
    v15 = xHalTimerWatchdogStop;
    v14 = 0LL;
    v13 = 0LL;
    KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), v4, (_DWORD)p_StaticAffinity, (unsigned int)&v13, 5LL);
    KiIpiStallOnPacketTargetsPrcb(v11, CurrentPrcb);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
