/*
 * XREFs of KeRcuReadUnlock @ 0x1402206B0
 * Callers:
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     CcIsFileObjectDirectMapped @ 0x1403845D4 (CcIsFileObjectDirectMapped.c)
 *     CcInitializeVolumeCacheMap @ 0x14038538C (CcInitializeVolumeCacheMap.c)
 *     CcScanLogHandleList @ 0x140385FA8 (CcScanLogHandleList.c)
 *     CcFlushCachePreProcess @ 0x1403991C8 (CcFlushCachePreProcess.c)
 *     CcGetFlushedValidData @ 0x14039E120 (CcGetFlushedValidData.c)
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 *     CcZeroData @ 0x14046D2D0 (CcZeroData.c)
 *     CcPostVolumeTelemetry @ 0x14049BF90 (CcPostVolumeTelemetry.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1404E1200 (CcPerfLogLoggedStreamsStats.c)
 *     CcUpdateTimeOnLogHandles @ 0x1405B14E4 (CcUpdateTimeOnLogHandles.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x140221E10 (KiRcuCheckQuiescent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
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
        result = qword_140F24F28;
        CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F24F28;
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
