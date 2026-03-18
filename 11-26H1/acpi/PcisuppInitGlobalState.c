/*
 * XREFs of PcisuppInitGlobalState @ 0x1400A99CC
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1400D73C4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 PcisuppInitGlobalState()
{
  ExInitializeResourceLite(&PciRouteInterfaceLock);
  return 0LL;
}
