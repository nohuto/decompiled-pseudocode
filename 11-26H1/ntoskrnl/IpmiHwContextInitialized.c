/*
 * XREFs of IpmiHwContextInitialized @ 0x140532728
 * Callers:
 *     CheckWheaIpmiContext @ 0x1406D4250 (CheckWheaIpmiContext.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x1406D4674 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     IpmiHwInitializeContext @ 0x14071CEF4 (IpmiHwInitializeContext.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x14071D434 (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x14071D570 (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibAddSelErrorRecord @ 0x14071D64C (IpmiLibAddSelErrorRecord.c)
 *     IpmiLibpAddSelRawData @ 0x14071D770 (IpmiLibpAddSelRawData.c)
 *     WheaQuerySystemInformation @ 0x14077BCA4 (WheaQuerySystemInformation.c)
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
