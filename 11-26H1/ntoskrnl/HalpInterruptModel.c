/*
 * XREFs of HalpInterruptModel @ 0x140427BB0
 * Callers:
 *     HalpInterruptSetDestination @ 0x140425E10 (HalpInterruptSetDestination.c)
 *     HalQueryMaximumProcessorCount @ 0x1404FB520 (HalQueryMaximumProcessorCount.c)
 *     HalpTimerInitSystem @ 0x1405774F0 (HalpTimerInitSystem.c)
 *     HalpInterruptRemap @ 0x14057BD44 (HalpInterruptRemap.c)
 *     HalEnumerateProcessors @ 0x14057C4A0 (HalEnumerateProcessors.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x14057CB18 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpInitializeInterruptsBspLate @ 0x14057D120 (HalpInitializeInterruptsBspLate.c)
 *     HalpMmReservePageTablePages @ 0x14057DF84 (HalpMmReservePageTablePages.c)
 *     HalStartNextProcessor @ 0x1405809B0 (HalStartNextProcessor.c)
 *     HalpPrepareForBugcheck @ 0x1405852C0 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x140586350 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptQueryControllerInfo @ 0x140781120 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x140781218 (HalpInterruptUnmap.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x140784C78 (HalpGetAcpiStaticNumaTopology.c)
 *     HaliAcpiMachineStateInit @ 0x1407854C0 (HaliAcpiMachineStateInit.c)
 *     HalpQueryAcpiResourceRequirements @ 0x140785BB4 (HalpQueryAcpiResourceRequirements.c)
 *     HalpDpInitSystem @ 0x140BEB0C0 (HalpDpInitSystem.c)
 *     HalpInterruptInitSystem @ 0x140BEB450 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x140BEB670 (HalpWheaInitSystem.c)
 *     HalpPiix4Detect @ 0x140C0A8DC (HalpPiix4Detect.c)
 *     HalpMiscGetParameters @ 0x140CAF604 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140CB5260 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140CB52A0 (HalpAcpiIBMVigilMatch.c)
 * Callees:
 *     <none>
 */

__int64 HalpInterruptModel()
{
  __int64 result; // rax

  if ( !HalpInterruptController )
    return 1LL;
  result = 2LL;
  if ( *(_DWORD *)(HalpInterruptController + 240) == 2 )
    return 1LL;
  if ( *(_DWORD *)(HalpInterruptController + 240) != 3 )
  {
    if ( *(_DWORD *)(HalpInterruptController + 240) == 4 )
    {
      return 3LL;
    }
    else if ( *(_DWORD *)(HalpInterruptController + 240) == 6 )
    {
      return 4LL;
    }
    else
    {
      return 4096LL;
    }
  }
  return result;
}
