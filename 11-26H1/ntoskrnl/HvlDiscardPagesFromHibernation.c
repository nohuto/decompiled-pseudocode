/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x1405C182C
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405C1894 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( VslpReservedTransferLock.Affinity )
    PoSetHiberRange(
      MemoryMap,
      0x8000u,
      VslpReservedTransferLock.Affinity,
      (unsigned int)(*(_DWORD *)&VslpReservedTransferLock.AffinityPrimaryGroup << 12),
      0x646C7648u);
  if ( VslpReservedTransferLock.WaitListEntry.Blink )
    PoSetHiberRange(MemoryMap, 0x8000u, VslpReservedTransferLock.WaitListEntry.Blink, 0x1000uLL, 0x646C7648u);
}
