/*
 * XREFs of IpmiLibRequestReceive @ 0x1407224CC
 * Callers:
 *     IpmiLibAddSelRecord @ 0x140722368 (IpmiLibAddSelRecord.c)
 * Callees:
 *     IpmiLibpKcsRequestAndReceive @ 0x140722904 (IpmiLibpKcsRequestAndReceive.c)
 */

__int64 IpmiLibRequestReceive()
{
  if ( *((_DWORD *)&WheapConfigTableLock.SwapListEntry + 3) == 1 )
    return IpmiLibpKcsRequestAndReceive();
  else
    return 3221225659LL;
}
