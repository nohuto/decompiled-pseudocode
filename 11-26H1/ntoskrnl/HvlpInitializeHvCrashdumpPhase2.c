/*
 * XREFs of HvlpInitializeHvCrashdumpPhase2 @ 0x1405C0E60
 * Callers:
 *     HvlPhase2Initialize @ 0x1405B8B08 (HvlPhase2Initialize.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 */

char HvlpInitializeHvCrashdumpPhase2()
{
  char result; // al

  IoAddTriageDumpDataBlock((ULONG)&HvlpFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpRootFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpEnlightenments, (PVOID)4);
  result = IoAddTriageDumpDataBlock((ULONG)&VslpReservedTransferLock.216, (PVOID)0x100);
  if ( VslpReservedTransferLock.ApcStateFill[37] )
  {
    IoAddTriageDumpDataBlock((ULONG)&VslpReservedTransferLock.WaitStatus, (PVOID)4);
    IoAddTriageDumpDataBlock((ULONG)&VslpReservedTransferLock.ApcStateFill[40], (PVOID)8);
    return IoAddTriageDumpDataBlock(
             *(ULONG *)&VslpReservedTransferLock.ApcStateFill[40],
             (PVOID)LODWORD(VslpReservedTransferLock.WaitStatus));
  }
  return result;
}
