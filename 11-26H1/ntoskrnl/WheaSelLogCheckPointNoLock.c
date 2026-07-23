/*
 * XREFs of WheaSelLogCheckPointNoLock @ 0x1406D8470
 * Callers:
 *     IopWheaSelLogCheckPoint @ 0x1405CC890 (IopWheaSelLogCheckPoint.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405EA0F4 (KiBugCheckProgressCpusFrozen.c)
 * Callees:
 *     EnterWheaIpmiContextNoLock @ 0x1406D8398 (EnterWheaIpmiContextNoLock.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x140722200 (IpmiLibAddSelCheckpointRecord.c)
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
