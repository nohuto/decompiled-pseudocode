/*
 * XREFs of IpmiLibRequestReceive @ 0x14071D83C
 * Callers:
 *     IpmiLibAddSelRecord @ 0x14071D6D8 (IpmiLibAddSelRecord.c)
 * Callees:
 *     IpmiLibpKcsRequestAndReceive @ 0x14071DC74 (IpmiLibpKcsRequestAndReceive.c)
 */

__int64 IpmiLibRequestReceive()
{
  if ( *((_DWORD *)&WheapConfigTableLock.SwapListEntry + 3) == 1 )
    return IpmiLibpKcsRequestAndReceive();
  else
    return 3221225659LL;
}
