/*
 * XREFs of HalpInterruptSetProblemEx @ 0x140436244
 * Callers:
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     HalDisableInterrupt @ 0x1404311D0 (HalDisableInterrupt.c)
 *     HalEnableInterrupt @ 0x140432390 (HalEnableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x140432F20 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x14043306C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetDestinationInternal @ 0x140435518 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x1404357AC (HalpInterruptFindBestRouting.c)
 *     HalpInterruptEnableNmi @ 0x140435DF0 (HalpInterruptEnableNmi.c)
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptGenerateMessage @ 0x14057E07C (HalpInterruptGenerateMessage.c)
 *     HalpInterruptRemap @ 0x14057E274 (HalpInterruptRemap.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14057E6CC (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptResetThisProcessor @ 0x14057F100 (HalpInterruptResetThisProcessor.c)
 *     HalGetInterruptTargetInformation @ 0x14057F4B0 (HalGetInterruptTargetInformation.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14057F860 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x14057FA78 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRequestInterrupt @ 0x14057FCC0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x14057FDE8 (HalpInterruptRestoreClock.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140586D60 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x140592320 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptInitializeController @ 0x140592950 (HalpInterruptInitializeController.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140592A68 (HalpInterruptInitializeLocalUnit.c)
 *     HalpInterruptParseAcpiTables @ 0x140592E18 (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptParseMadt @ 0x140592EB8 (HalpInterruptParseMadt.c)
 *     HalpInterruptSelectController @ 0x1405938A8 (HalpInterruptSelectController.c)
 *     HalpAllocateKInterrupt @ 0x140596C54 (HalpAllocateKInterrupt.c)
 *     HalpInterruptDpReplaceBegin @ 0x14059C39C (HalpInterruptDpReplaceBegin.c)
 *     HalpInterruptUnmap @ 0x140783D18 (HalpInterruptUnmap.c)
 *     HalpInterruptStartProcessor @ 0x140BF0190 (HalpInterruptStartProcessor.c)
 *     HalpDpGetInterruptReplayState @ 0x140BF3E20 (HalpDpGetInterruptReplayState.c)
 *     HalpDpReplayInterrupts @ 0x140BF45D0 (HalpDpReplayInterrupts.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140BF4A8C (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     HalpInterruptMaskAcpi @ 0x140C0EDD0 (HalpInterruptMaskAcpi.c)
 *     HalpInitializeInterrupts @ 0x140CB3DD8 (HalpInitializeInterrupts.c)
 *     HalpPreAllocateKInterrupts @ 0x140CB913C (HalpPreAllocateKInterrupts.c)
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
