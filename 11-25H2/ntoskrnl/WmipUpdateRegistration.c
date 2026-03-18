/*
 * XREFs of WmipUpdateRegistration @ 0x1409B86B0
 * Callers:
 *     IoWMIRegistrationControl @ 0x1409B8940 (IoWMIRegistrationControl.c)
 * Callees:
 *     WmipFindRegEntryByDevice @ 0x140464348 (WmipFindRegEntryByDevice.c)
 *     WmipUnreferenceRegEntry @ 0x140471A4C (WmipUnreferenceRegEntry.c)
 *     WmipQueueRegWork @ 0x1409B85D0 (WmipQueueRegWork.c)
 */

__int64 __fastcall WmipUpdateRegistration(__int64 a1)
{
  __int64 RegEntryByDevice; // rax
  __int64 v2; // rdi
  unsigned int v3; // ebx

  RegEntryByDevice = WmipFindRegEntryByDevice(a1);
  v2 = RegEntryByDevice;
  if ( RegEntryByDevice )
  {
    v3 = WmipQueueRegWork(1, RegEntryByDevice);
    WmipUnreferenceRegEntry(v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
