/*
 * XREFs of IpmiHwInitializeContext @ 0x140721B84
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x140534BC8 (IpmiHwContextInitialized.c)
 *     IpmiHwKcsInit @ 0x140721C78 (IpmiHwKcsInit.c)
 *     IpmiHwpReadSpmiConfiguration @ 0x140721DB8 (IpmiHwpReadSpmiConfiguration.c)
 *     IpmiLibReadSmbiosRecord38 @ 0x140721E70 (IpmiLibReadSmbiosRecord38.c)
 *     IpmiLibpParseDeviceInfo @ 0x140721FA8 (IpmiLibpParseDeviceInfo.c)
 */

__int64 IpmiHwInitializeContext()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]

  if ( IpmiHwContextInitialized((__int64)&WheapConfigTableLock.WaitListEntry.Blink) )
    return 0LL;
  if ( v0 )
  {
    *($9F5D72EF54BCA79AE5AD03946D2C2FEF *)((char *)&WheapConfigTableLock.216 + 8) = *($9F5D72EF54BCA79AE5AD03946D2C2FEF *)v0;
    *(_OWORD *)&WheapConfigTableLock.Teb = *(_OWORD *)(v0 + 16);
LABEL_8:
    WheapConfigTableLock.Timer.Dpc = (_KDPC *)0x7004C4B40LL;
    WheapConfigTableLock.Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)0x3E80000001ELL;
    WheapConfigTableLock.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)21474836482000000LL;
    goto LABEL_9;
  }
  if ( (int)IpmiHwpReadSpmiConfiguration() >= 0 )
    goto LABEL_8;
  v3 = 0LL;
  v4 = 0;
  if ( (int)IpmiLibReadSmbiosRecord38(&v3) >= 0 && (int)IpmiLibpParseDeviceInfo(v2, &v3) >= 0 )
    goto LABEL_8;
LABEL_9:
  if ( *((_DWORD *)&WheapConfigTableLock.SwapListEntry + 3) != 1
    || IpmiHwContextInitialized((__int64)&WheapConfigTableLock.WaitListEntry.Blink)
    && !LOBYTE(WheapConfigTableLock.RelativeTimerBias) )
  {
    return 3221225659LL;
  }
  result = IpmiHwKcsInit();
  if ( (int)result >= 0 )
    LOBYTE(WheapConfigTableLock.Timer.Processor) = 1;
  return result;
}
