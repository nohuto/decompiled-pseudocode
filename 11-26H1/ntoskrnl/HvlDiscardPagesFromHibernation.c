/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x1405BEFBC
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405BF024 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( VslpReservedTransferLock.QueueListEntry.Blink )
    PoSetHiberRange(
      MemoryMap,
      0x8000u,
      VslpReservedTransferLock.QueueListEntry.Blink,
      VslpReservedTransferLock.NextProcessor << 12,
      0x646C7648u);
  if ( VslpReservedTransferLock.ApcState.ApcListHead[1].Blink )
    PoSetHiberRange(MemoryMap, 0x8000u, VslpReservedTransferLock.ApcState.ApcListHead[1].Blink, 0x1000uLL, 0x646C7648u);
}
