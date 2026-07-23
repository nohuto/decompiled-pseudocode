/*
 * XREFs of PfSnGetUnsafeProcessParameters @ 0x140B13768
 * Callers:
 *     PfSnScanCommandLine @ 0x1409D320C (PfSnScanCommandLine.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

volatile void *PfSnGetUnsafeProcessParameters()
{
  struct _LIST_ENTRY *Blink; // rcx
  volatile void *ULong64FromUser; // rbx

  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  ULong64FromUser = 0LL;
  if ( Blink )
  {
    ULong64FromUser = (volatile void *)RtlReadULong64FromUser(&Blink[2]);
    ProbeForRead(ULong64FromUser, 1uLL, 8u);
  }
  return ULong64FromUser;
}
