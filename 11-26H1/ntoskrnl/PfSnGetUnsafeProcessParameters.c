/*
 * XREFs of PfSnGetUnsafeProcessParameters @ 0x140B119E8
 * Callers:
 *     PfSnScanCommandLine @ 0x1409E8F94 (PfSnScanCommandLine.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
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
