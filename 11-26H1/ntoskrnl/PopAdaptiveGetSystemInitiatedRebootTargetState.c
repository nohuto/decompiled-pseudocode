/*
 * XREFs of PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140776E40
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PopGetCurrentPdcPhase @ 0x140610778 (PopGetCurrentPdcPhase.c)
 *     PopPowerAggregatorGetCurrentTargetState @ 0x1407D9BE8 (PopPowerAggregatorGetCurrentTargetState.c)
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 */

unsigned __int64 PopAdaptiveGetSystemInitiatedRebootTargetState()
{
  __int64 v0; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rbx
  _OWORD v4[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v5; // [rsp+40h] [rbp-38h]
  __int128 v6; // [rsp+48h] [rbp-30h]
  __int128 v7; // [rsp+58h] [rbp-20h]
  __int64 v8; // [rsp+68h] [rbp-10h]

  v0 = 1LL;
  v6 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v4, 0, sizeof(v4));
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  Flink = ExpPlatformBinaryLock.WaitBlock[0].WaitListEntry.Flink;
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( (ExpPlatformBinaryLock.WaitBlockFill4[0] & 7) == 0 )
  {
    Flink = 0LL;
    if ( LOBYTE(ExpPlatformBinaryLock.Timer.Dpc) )
      Flink = *(struct _LIST_ENTRY **)&ExpPlatformBinaryLock.Timer.Processor;
  }
  PopReleaseAdaptiveLock();
  if ( ((unsigned __int8)Flink & 7) == 0 )
  {
    PopPowerAggregatorGetCurrentTargetState(v4);
    if ( LODWORD(v4[0]) == 1 )
    {
      if ( (int)PopGetCurrentPdcPhase() > 0 )
        v0 = 9LL;
      return (unsigned __int64)Flink & 0xFFFFFFFFFFFFFFF1uLL | v0;
    }
    else if ( LODWORD(v4[0]) == 4 )
    {
      return (LODWORD(PpmIdlePolicyLock.Teb) == 0 ? 8 : 0) | (unsigned __int64)Flink & 0xFFFFFFFFFFFFFFF0uLL ^ PopAdaptiveSystemPowerStateToBootState[(int)v5] & 7;
    }
    else
    {
      return (unsigned __int64)Flink & 0xFFFFFFFFFFFFFFF8uLL;
    }
  }
  return (unsigned __int64)Flink;
}
