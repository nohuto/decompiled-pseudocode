/*
 * XREFs of HvlpInitializeHvCrashdumpPhase2 @ 0x1405C36D0
 * Callers:
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 */

char HvlpInitializeHvCrashdumpPhase2()
{
  char result; // al

  IoAddTriageDumpDataBlock((ULONG)&HvlpFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpRootFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpEnlightenments, (PVOID)4);
  result = IoAddTriageDumpDataBlock((ULONG)&VslpReservedTransferLock.Timer.Header.WaitListHead, (PVOID)0x100);
  if ( BYTE6(VslpReservedTransferLock.Queue) )
  {
    IoAddTriageDumpDataBlock((ULONG)&VslpReservedTransferLock.RelativeTimerBias, (PVOID)4);
    IoAddTriageDumpDataBlock((ULONG)&VslpReservedTransferLock.Teb, (PVOID)8);
    return IoAddTriageDumpDataBlock(
             (ULONG)VslpReservedTransferLock.Teb,
             (PVOID)LODWORD(VslpReservedTransferLock.RelativeTimerBias));
  }
  return result;
}
