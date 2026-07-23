/*
 * XREFs of IpmiLibpParseDeviceInfo @ 0x140721FA8
 * Callers:
 *     IpmiHwInitializeContext @ 0x140721B84 (IpmiHwInitializeContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IpmiLibpParseDeviceInfo(__int64 a1, __int64 a2)
{
  char v2; // al
  int v4; // eax
  char v5; // dl
  int v6; // ecx
  int v7; // ecx

  v2 = *(_BYTE *)(a2 + 5);
  if ( v2 == 16 || v2 != 21 && v2 != 32 )
    return 3221225659LL;
  *($9F5D72EF54BCA79AE5AD03946D2C2FEF *)((char *)&WheapConfigTableLock.216 + 8) = 0LL;
  *(_OWORD *)&WheapConfigTableLock.Teb = 0LL;
  *((_WORD *)&WheapConfigTableLock.SwapListEntry + 4) = *(unsigned __int8 *)(a2 + 5);
  v4 = *(unsigned __int8 *)(a2 + 4);
  v5 = 0;
  *((_DWORD *)&WheapConfigTableLock.SwapListEntry + 3) = v4;
  v6 = *(unsigned __int8 *)(a2 + 16) >> 6;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        v5 = 16;
    }
    else
    {
      v5 = 4;
    }
  }
  else
  {
    v5 = 1;
  }
  LOBYTE(WheapConfigTableLock.Queue) = v5;
  WheapConfigTableLock.Teb = (void *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  LOBYTE(WheapConfigTableLock.RelativeTimerBias) = *(_BYTE *)(a2 + 8) & 1;
  BYTE1(WheapConfigTableLock.RelativeTimerBias) = *(_BYTE *)(a2 + 6) & 0xFE;
  return 0LL;
}
