/*
 * XREFs of HvlMarkHiberPhase @ 0x1405BF26C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140BFAE30 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1405BF7F0 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405BF8C4 (HvlpMarkHypervisorPagesForHibernation.c)
 */

void HvlMarkHiberPhase()
{
  if ( (HvlpFlags & 2) != 0 && !VslVsmEnabled )
    HvlpMarkHypervisorPagesForHibernation();
  if ( VslpReservedTransferLock.WaitBlock[2].WaitListEntry.Flink )
    PoSetHiberRange(
      0LL,
      0x10000u,
      VslpReservedTransferLock.WaitBlock[2].WaitListEntry.Flink,
      (unsigned int)(*(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[112] << 12),
      0);
  if ( HvlHypervisorConnected )
    HvlpMarkHvlPagesForHibernation();
}
