/*
 * XREFs of WheaSelLogCheckPoint @ 0x1406D8424
 * Callers:
 *     PnpLogBootFailuresSel @ 0x1405DCA20 (PnpLogBootFailuresSel.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EnterWheaIpmiContextLock @ 0x1406D82F8 (EnterWheaIpmiContextLock.c)
 *     LeaveWheaIpmiContextLock @ 0x1406D83E4 (LeaveWheaIpmiContextLock.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x140722200 (IpmiLibAddSelCheckpointRecord.c)
 */

__int64 __fastcall WheaSelLogCheckPoint(unsigned __int16 a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // ebx

  v5 = EnterWheaIpmiContextLock();
  if ( v5 >= 0 )
  {
    v5 = IpmiLibAddSelCheckpointRecord(v4, a1, a2);
    LeaveWheaIpmiContextLock();
  }
  return (unsigned int)v5;
}
