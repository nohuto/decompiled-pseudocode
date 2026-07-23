/*
 * XREFs of HalpInterruptModel @ 0x140434CC0
 * Callers:
 *     HalpInterruptSetDestination @ 0x140432F20 (HalpInterruptSetDestination.c)
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 *     HalpInterruptRemap @ 0x14057E274 (HalpInterruptRemap.c)
 *     HalEnumerateProcessors @ 0x14057E9D0 (HalEnumerateProcessors.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x14057F044 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpInitializeInterruptsBspLate @ 0x14057F640 (HalpInitializeInterruptsBspLate.c)
 *     HalpMmReservePageTablePages @ 0x1405804A4 (HalpMmReservePageTablePages.c)
 *     HalStartNextProcessor @ 0x140582ED0 (HalStartNextProcessor.c)
 *     HalpPrepareForBugcheck @ 0x1405877E0 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x140588870 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptQueryControllerInfo @ 0x140783C20 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x140783D18 (HalpInterruptUnmap.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1407877AC (HalpGetAcpiStaticNumaTopology.c)
 *     HaliAcpiMachineStateInit @ 0x140787FF0 (HaliAcpiMachineStateInit.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407886E4 (HalpQueryAcpiResourceRequirements.c)
 *     HalpDpInitSystem @ 0x140BF10C0 (HalpDpInitSystem.c)
 *     HalpInterruptInitSystem @ 0x140BF1450 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x140BF1670 (HalpWheaInitSystem.c)
 *     HalpPiix4Detect @ 0x140C10AEC (HalpPiix4Detect.c)
 *     HalpMiscGetParameters @ 0x140CB5644 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140CBB2A0 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140CBB2E0 (HalpAcpiIBMVigilMatch.c)
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
