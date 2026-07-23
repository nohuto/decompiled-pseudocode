/*
 * XREFs of HvlMarkHiberPhase @ 0x1405C1ADC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140C00E30 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1405C2060 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405C2134 (HvlpMarkHypervisorPagesForHibernation.c)
 */

void HvlMarkHiberPhase()
{
  if ( (HvlpFlags & 2) != 0 && !VslVsmEnabled )
    HvlpMarkHypervisorPagesForHibernation();
  if ( VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink )
    PoSetHiberRange(
      0LL,
      0x10000u,
      VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink,
      (unsigned int)(*(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[160] << 12),
      0);
  if ( HvlHypervisorConnected )
    HvlpMarkHvlPagesForHibernation();
}
