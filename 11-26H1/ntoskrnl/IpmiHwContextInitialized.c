/*
 * XREFs of IpmiHwContextInitialized @ 0x140534BC8
 * Callers:
 *     CheckWheaIpmiContext @ 0x1406D82D0 (CheckWheaIpmiContext.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x1406D86F4 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     IpmiHwInitializeContext @ 0x140721B84 (IpmiHwInitializeContext.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x1407220C4 (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x140722200 (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibAddSelErrorRecord @ 0x1407222DC (IpmiLibAddSelErrorRecord.c)
 *     IpmiLibpAddSelRawData @ 0x140722400 (IpmiLibpAddSelRawData.c)
 *     WheaQuerySystemInformation @ 0x14077E8E4 (WheaQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

signed __int8 __fastcall IpmiHwContextInitialized(__int64 a1)
{
  if ( a1 )
    return _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 88), 0, 0);
  else
    return 0;
}
