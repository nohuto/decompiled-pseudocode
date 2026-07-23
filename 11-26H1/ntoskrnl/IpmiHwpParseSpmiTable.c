/*
 * XREFs of IpmiHwpParseSpmiTable @ 0x140721D00
 * Callers:
 *     IpmiHwpReadSpmiConfiguration @ 0x140721DB8 (IpmiHwpReadSpmiConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IpmiHwpParseSpmiTable(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  char v4; // dl
  __int64 result; // rax

  if ( *(_WORD *)(a2 + 38) == 256 || *(_WORD *)(a2 + 38) != 336 && *(_WORD *)(a2 + 38) != 512 )
    return 3221225659LL;
  *($9F5D72EF54BCA79AE5AD03946D2C2FEF *)((char *)&WheapConfigTableLock.216 + 8) = 0LL;
  *(_OWORD *)&WheapConfigTableLock.Teb = 0LL;
  *((_WORD *)&WheapConfigTableLock.SwapListEntry + 4) = *(_WORD *)(a2 + 38) >> 4;
  *((_DWORD *)&WheapConfigTableLock.SwapListEntry + 3) = *(unsigned __int8 *)(a2 + 36);
  LOBYTE(WheapConfigTableLock.RelativeTimerBias) = *(_BYTE *)(a2 + 48);
  v3 = *(void **)(a2 + 52);
  if ( LOBYTE(WheapConfigTableLock.RelativeTimerBias) == 4 )
    v3 = (void *)(*(_QWORD *)(a2 + 52) & 0xFELL);
  WheapConfigTableLock.Teb = v3;
  v4 = 0;
  if ( *(_BYTE *)(a2 + 51) )
  {
    switch ( *(_BYTE *)(a2 + 51) )
    {
      case 1:
        v4 = 1;
        break;
      case 2:
        v4 = 2;
        break;
      case 3:
        v4 = 4;
        break;
      case 4:
        v4 = 8;
        break;
    }
  }
  LOBYTE(WheapConfigTableLock.Queue) = v4;
  result = 0LL;
  BYTE1(WheapConfigTableLock.RelativeTimerBias) = 32;
  return result;
}
