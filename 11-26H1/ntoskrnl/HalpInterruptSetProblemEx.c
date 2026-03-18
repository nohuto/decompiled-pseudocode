/*
 * XREFs of HalpInterruptSetProblemEx @ 0x14042A15C
 * Callers:
 *     HalpInterruptSetLineStateInternal @ 0x14032DC5C (HalpInterruptSetLineStateInternal.c)
 *     HalDisableInterrupt @ 0x1404240E0 (HalDisableInterrupt.c)
 *     HalEnableInterrupt @ 0x1404252A0 (HalEnableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x140425E10 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140425F5C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetDestinationInternal @ 0x140428F00 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140429194 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetLineState @ 0x1404294DC (HalpInterruptSetLineState.c)
 *     HalpInterruptEnableNmi @ 0x140429E90 (HalpInterruptEnableNmi.c)
 *     HalQueryMaximumProcessorCount @ 0x1404FB520 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptGenerateMessage @ 0x14057BB4C (HalpInterruptGenerateMessage.c)
 *     HalpInterruptRemap @ 0x14057BD44 (HalpInterruptRemap.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14057C19C (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptResetThisProcessor @ 0x14057CBE0 (HalpInterruptResetThisProcessor.c)
 *     HalGetInterruptTargetInformation @ 0x14057CF90 (HalGetInterruptTargetInformation.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14057D340 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x14057D558 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRequestInterrupt @ 0x14057D7A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x14057D8C8 (HalpInterruptRestoreClock.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140584840 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x14058FBA0 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptInitializeController @ 0x1405901D0 (HalpInterruptInitializeController.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1405902E8 (HalpInterruptInitializeLocalUnit.c)
 *     HalpInterruptParseAcpiTables @ 0x140590698 (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptParseMadt @ 0x140590738 (HalpInterruptParseMadt.c)
 *     HalpInterruptSelectController @ 0x140591128 (HalpInterruptSelectController.c)
 *     HalpAllocateKInterrupt @ 0x1405944D4 (HalpAllocateKInterrupt.c)
 *     HalpInterruptDpReplaceBegin @ 0x140599C1C (HalpInterruptDpReplaceBegin.c)
 *     HalpInterruptUnmap @ 0x140781218 (HalpInterruptUnmap.c)
 *     HalpInterruptStartProcessor @ 0x140BEA190 (HalpInterruptStartProcessor.c)
 *     HalpDpGetInterruptReplayState @ 0x140BEDE20 (HalpDpGetInterruptReplayState.c)
 *     HalpDpReplayInterrupts @ 0x140BEE5D0 (HalpDpReplayInterrupts.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140BEEA8C (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInterruptMaskAcpi @ 0x140C08BC0 (HalpInterruptMaskAcpi.c)
 *     HalpInitializeInterrupts @ 0x140CADD98 (HalpInitializeInterrupts.c)
 *     HalpPreAllocateKInterrupts @ 0x140CB30FC (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptSetProblemEx(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  result = a5;
  HalpInterruptLastProblemLine = a5;
  HalpInterruptLastProblemController = a1;
  HalpInterruptLastProblem = a2;
  HalpInterruptLastProblemStatus = a3;
  HalpInterruptLastProblemFile = a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 316) = a2;
    *(_DWORD *)(a1 + 320) = a3;
    *(_QWORD *)(a1 + 328) = a4;
    *(_DWORD *)(a1 + 336) = a5;
  }
  return result;
}
