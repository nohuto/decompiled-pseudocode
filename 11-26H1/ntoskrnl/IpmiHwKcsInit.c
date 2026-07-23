/*
 * XREFs of IpmiHwKcsInit @ 0x140721C78
 * Callers:
 *     IpmiHwInitializeContext @ 0x140721B84 (IpmiHwInitializeContext.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 */

__int64 IpmiHwKcsInit()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( WheapConfigTableLock.Teb )
  {
    WheapConfigTableLock.WaitBlock[0].WaitListEntry = 0LL;
    if ( LOBYTE(WheapConfigTableLock.RelativeTimerBias) )
    {
      WheapConfigTableLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)WheapConfigTableLock.Teb;
      *(_DWORD *)&WheapConfigTableLock.WaitBlockFill10[8] = 0;
    }
    else
    {
      WheapConfigTableLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)MmMapIoSpaceEx(
                                                                                      (__int64)WheapConfigTableLock.Teb,
                                                                                      2LL
                                                                                    * LOBYTE(WheapConfigTableLock.Queue),
                                                                                      0x204u);
      if ( WheapConfigTableLock.WaitBlock[0].WaitListEntry.Flink )
        *(_DWORD *)&WheapConfigTableLock.WaitBlockFill10[8] = 2 * LOBYTE(WheapConfigTableLock.Queue);
      else
        return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v0;
}
