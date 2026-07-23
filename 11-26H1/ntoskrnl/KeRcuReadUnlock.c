/*
 * XREFs of KeRcuReadUnlock @ 0x140222040
 * Callers:
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcIsFileObjectDirectMapped @ 0x140386384 (CcIsFileObjectDirectMapped.c)
 *     CcInitializeVolumeCacheMap @ 0x14038713C (CcInitializeVolumeCacheMap.c)
 *     CcScanLogHandleList @ 0x140387D58 (CcScanLogHandleList.c)
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcGetFlushedValidData @ 0x14039FE80 (CcGetFlushedValidData.c)
 *     CcDeferWrite @ 0x1403E3400 (CcDeferWrite.c)
 *     CcZeroData @ 0x140466A50 (CcZeroData.c)
 *     CcPostVolumeTelemetry @ 0x140495AE0 (CcPostVolumeTelemetry.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1404DA8E0 (CcPerfLogLoggedStreamsStats.c)
 *     CcUpdateTimeOnLogHandles @ 0x1405B3CF4 (CcUpdateTimeOnLogHandles.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x1402237A0 (KiRcuCheckQuiescent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KeRcuReadUnlock()
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v1; // esi
  unsigned __int64 DispatchPin; // rdi
  char v3; // r8
  unsigned int NestingLevel; // eax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  int v7; // ett
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  DispatchPin = CurrentPrcb->RcuData.DispatchPin;
  v3 = KeDisableInterrupts();
  NestingLevel = CurrentPrcb->RcuData.NestingLevel;
  if ( !NestingLevel )
    __fastfail(0xEu);
  result = NestingLevel - 1;
  CurrentPrcb->RcuData.NestingLevel = result;
  if ( !(_DWORD)result )
  {
    if ( CurrentPrcb->RcuData.IdleState < 0 )
    {
      _InterlockedAnd8(&CurrentPrcb->RcuData.IdleState, 0x7Fu);
      if ( CurrentPrcb->RcuData.GracePeriodNeeded )
      {
        CurrentPrcb->RcuData.GracePeriodNeeded = 0;
        _InterlockedOr(v8, 0);
        result = (__int64)KiDpcCorralLock.WaitBlock[2].Thread;
        CurrentPrcb->RcuData.GraceSequenceQuiescent = (unsigned __int64)KiDpcCorralLock.WaitBlock[2].Thread;
      }
    }
    v1 = 1;
  }
  if ( v3 )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v7 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v7 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick();
    }
    _enable();
  }
  if ( v1 )
  {
    if ( CurrentPrcb->RcuData.ExpediteReporting )
      result = KiRcuCheckQuiescent(KeGetCurrentPrcb());
    if ( (unsigned __int8)DispatchPin < 2u )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)DispatchPin);
      __writecr8(DispatchPin);
    }
  }
  return result;
}
