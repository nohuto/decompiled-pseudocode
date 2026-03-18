/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1403EF310
 * Callers:
 *     KiFlushSoftwareInterruptBatch @ 0x1402436D0 (KiFlushSoftwareInterruptBatch.c)
 *     KxFlushEntireTb @ 0x14025128C (KxFlushEntireTb.c)
 *     PpmParkComputeUnparkMask @ 0x14025D7A0 (PpmParkComputeUnparkMask.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1403793EC (KiSendClockInterruptToTargetProcessor.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403C9B60 (KiSendSoftwareInterruptAffinity.c)
 *     PpmUnlockProcessors @ 0x1403EC22C (PpmUnlockProcessors.c)
 *     HalRequestIpiSpecifyVector @ 0x1403EC570 (HalRequestIpiSpecifyVector.c)
 *     KiForwardTick @ 0x1403ED6F0 (KiForwardTick.c)
 *     KiCheckKeepAlive @ 0x1403EF0E4 (KiCheckKeepAlive.c)
 *     KeChangeMemoryAttributes @ 0x1403EF1E8 (KeChangeMemoryAttributes.c)
 *     KeFreezeExecution @ 0x140508FA0 (KeFreezeExecution.c)
 *     HalpNmiReboot @ 0x140593E10 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KiSendFreeze @ 0x1405F6118 (KiSendFreeze.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405F9B28 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KxFlushSingleTb @ 0x1405FC9F8 (KxFlushSingleTb.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14060F5A8 (PpmParkDetectTopologyLevelInfo.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x140825EE8 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     RtlUpdateSwapReference @ 0x140ABFBBC (RtlUpdateSwapReference.c)
 *     PnprQuiesceProcessors @ 0x140BF26B4 (PnprQuiesceProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * a2);
  result = v3 >> 6;
  if ( *a1 > (unsigned int)result )
  {
    v5 = (unsigned int)result;
    result = *(_QWORD *)&a1[4 * result + 4] & ~(1LL << (v3 & 0x3F));
    *(_QWORD *)&a1[4 * v5 + 4] = result;
  }
  return result;
}
