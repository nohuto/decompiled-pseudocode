/*
 * XREFs of WheaSelLogCheckPoint @ 0x1406D43A4
 * Callers:
 *     PnpLogBootFailuresSel @ 0x1405DA220 (PnpLogBootFailuresSel.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EnterWheaIpmiContextLock @ 0x1406D4278 (EnterWheaIpmiContextLock.c)
 *     LeaveWheaIpmiContextLock @ 0x1406D4364 (LeaveWheaIpmiContextLock.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x14071D570 (IpmiLibAddSelCheckpointRecord.c)
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
