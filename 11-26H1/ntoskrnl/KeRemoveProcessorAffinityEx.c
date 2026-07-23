/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x140453E40
 * Callers:
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KxFlushEntireTb @ 0x140252BEC (KxFlushEntireTb.c)
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 *     PpmUnlockProcessors @ 0x1402F9270 (PpmUnlockProcessors.c)
 *     HalRequestIpiSpecifyVector @ 0x1402F95B0 (HalRequestIpiSpecifyVector.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x14037B19C (KiSendClockInterruptToTargetProcessor.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403D3A10 (KiSendSoftwareInterruptAffinity.c)
 *     KiForwardTick @ 0x140452220 (KiForwardTick.c)
 *     KiCheckKeepAlive @ 0x140453C14 (KiCheckKeepAlive.c)
 *     KeChangeMemoryAttributes @ 0x140453D18 (KeChangeMemoryAttributes.c)
 *     KeFreezeExecution @ 0x140502A50 (KeFreezeExecution.c)
 *     HalpNmiReboot @ 0x140596590 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiSendFreeze @ 0x1405F8AD8 (KiSendFreeze.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405FC548 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KxFlushSingleTb @ 0x1405FF448 (KxFlushSingleTb.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14061280C (PpmParkDetectTopologyLevelInfo.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x14082C128 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     RtlUpdateSwapReference @ 0x140AC1C5C (RtlUpdateSwapReference.c)
 *     PnprQuiesceProcessors @ 0x140BF86B4 (PnprQuiesceProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + a2);
  result = v3 >> 6;
  if ( *a1 > (unsigned int)result )
  {
    v5 = (unsigned int)result;
    result = *(_QWORD *)&a1[4 * result + 4] & ~(1LL << (v3 & 0x3F));
    *(_QWORD *)&a1[4 * v5 + 4] = result;
  }
  return result;
}
