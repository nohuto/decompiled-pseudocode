/*
 * XREFs of MiMirrorInSingleProcessorMode @ 0x1402A2284
 * Callers:
 *     HalpAcpiAccessSecureAddress @ 0x14024EA50 (HalpAcpiAccessSecureAddress.c)
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MiAssignInitialPageAttribute @ 0x1402A2190 (MiAssignInitialPageAttribute.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MmGetPhysicalAddressEx @ 0x1404A95C0 (MmGetPhysicalAddressEx.c)
 *     MiSystemInSingleProcessorMode @ 0x1406EEF80 (MiSystemInSingleProcessorMode.c)
 *     MmGetCacheAttributeEx @ 0x1406EFBD0 (MmGetCacheAttributeEx.c)
 * Callees:
 *     <none>
 */

bool MiMirrorInSingleProcessorMode()
{
  if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) != 2 )
    return 0;
  if ( stru_140E2ED08.WaitBlock[0].SparePtr == KeGetCurrentThread() )
    return 1;
  if ( !stru_140E2ED08.WaitBlock[0].SparePtr || (MiFlags & 0x40000000000LL) == 0 )
    return 0;
  return KeGetCurrentIrql() == 15;
}
