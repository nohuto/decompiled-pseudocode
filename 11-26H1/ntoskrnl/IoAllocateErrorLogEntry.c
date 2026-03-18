/*
 * XREFs of IoAllocateErrorLogEntry @ 0x1404DC010
 * Callers:
 *     IopDisassociateThreadIrp @ 0x14051FFD0 (IopDisassociateThreadIrp.c)
 *     DifIoAllocateErrorLogEntryWrapper @ 0x1406590C0 (DifIoAllocateErrorLogEntryWrapper.c)
 *     FsRtlLogCcFlushError @ 0x140B57700 (FsRtlLogCcFlushError.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1404DC04C (IopAllocateErrorLogEntry.c)
 */

PVOID __stdcall IoAllocateErrorLogEntry(PVOID IoObject, UCHAR EntrySize)
{
  PVOID v3; // rdx

  if ( !IoObject )
    return 0LL;
  if ( *(_WORD *)IoObject == 3 )
  {
    v3 = (PVOID)*((_QWORD *)IoObject + 1);
  }
  else
  {
    if ( *(_WORD *)IoObject != 4 )
      return 0LL;
    v3 = IoObject;
    IoObject = 0LL;
  }
  return (PVOID)IopAllocateErrorLogEntry(IoObject, v3);
}
