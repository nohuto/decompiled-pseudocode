/*
 * XREFs of MiMirrorInSingleProcessorMode @ 0x1402A2D34
 * Callers:
 *     HalpAcpiAccessSecureAddress @ 0x14024D0F0 (HalpAcpiAccessSecureAddress.c)
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     MiAssignInitialPageAttribute @ 0x1402A2C40 (MiAssignInitialPageAttribute.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MmGetPhysicalAddressEx @ 0x1404AFF24 (MmGetPhysicalAddressEx.c)
 *     MiSystemInSingleProcessorMode @ 0x1406EA2E0 (MiSystemInSingleProcessorMode.c)
 *     MmGetCacheAttributeEx @ 0x1406EAF30 (MmGetCacheAttributeEx.c)
 * Callees:
 *     <none>
 */

bool MiMirrorInSingleProcessorMode()
{
  if ( LODWORD(stru_140E2EB88.Timer.TimerListEntry.Flink) != 2 )
    return 0;
  if ( stru_140E2EB88.WaitBlock[0].SparePtr == KeGetCurrentThread() )
    return 1;
  if ( !stru_140E2EB88.WaitBlock[0].SparePtr || (MiFlags & 0x40000000000LL) == 0 )
    return 0;
  return KeGetCurrentIrql() == 15;
}
