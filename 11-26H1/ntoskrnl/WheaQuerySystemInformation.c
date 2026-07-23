/*
 * XREFs of WheaQuerySystemInformation @ 0x14077E8E4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x140534BC8 (IpmiHwContextInitialized.c)
 */

__int64 WheaQuerySystemInformation()
{
  signed __int8 v0; // al
  __int64 v1; // r9
  unsigned int v2; // r10d
  unsigned int v3; // r8d

  v0 = IpmiHwContextInitialized((__int64)&WheapConfigTableLock.WaitListEntry.Blink);
  v3 = 0;
  if ( v0 )
  {
    if ( v2 >= 0x20 )
    {
      *($9F5D72EF54BCA79AE5AD03946D2C2FEF *)v1 = *($9F5D72EF54BCA79AE5AD03946D2C2FEF *)((char *)&WheapConfigTableLock.216
                                                                                      + 8);
      *(_OWORD *)(v1 + 16) = *(_OWORD *)&WheapConfigTableLock.Teb;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
