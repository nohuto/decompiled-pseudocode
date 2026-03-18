/*
 * XREFs of WheaSelLogCheckPointNoLock @ 0x1406D43F0
 * Callers:
 *     IopWheaSelLogCheckPoint @ 0x1405C9FC0 (IopWheaSelLogCheckPoint.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405E7784 (KiBugCheckProgressCpusFrozen.c)
 * Callees:
 *     EnterWheaIpmiContextNoLock @ 0x1406D4318 (EnterWheaIpmiContextNoLock.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x14071D570 (IpmiLibAddSelCheckpointRecord.c)
 */

__int64 __fastcall WheaSelLogCheckPointNoLock(unsigned __int16 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = EnterWheaIpmiContextNoLock();
  if ( (int)result >= 0 )
    return IpmiLibAddSelCheckpointRecord(v5, a1, a2);
  return result;
}
