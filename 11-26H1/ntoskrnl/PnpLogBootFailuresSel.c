/*
 * XREFs of PnpLogBootFailuresSel @ 0x1405DCA20
 * Callers:
 *     PnpBootDeviceWait @ 0x1405DADA4 (PnpBootDeviceWait.c)
 * Callees:
 *     EnterWheaIpmiContextLock @ 0x1406D82F8 (EnterWheaIpmiContextLock.c)
 *     LeaveWheaIpmiContextLock @ 0x1406D83E4 (LeaveWheaIpmiContextLock.c)
 *     WheaSelLogCheckPoint @ 0x1406D8424 (WheaSelLogCheckPoint.c)
 *     IpmiLibAddSelErrorRecord @ 0x1407222DC (IpmiLibAddSelErrorRecord.c)
 */

PVOID PnpLogBootFailuresSel()
{
  PVOID result; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // rbp
  int v5; // r14d
  int v6; // ecx

  result = PnpBootDriverTracking;
  if ( PnpBootDriverTracking )
  {
    if ( *(_DWORD *)PnpBootDriverTracking )
    {
      v1 = 0LL;
      v2 = *(unsigned int *)PnpBootDriverTracking;
      do
      {
        v3 = *(_DWORD *)((char *)PnpBootDriverTracking + v1 + 16);
        v4 = *(_QWORD *)((char *)PnpBootDriverTracking + v1 + 8);
        v5 = *(_DWORD *)((char *)PnpBootDriverTracking + v1 + 24);
        result = (PVOID)EnterWheaIpmiContextLock();
        if ( (int)result >= 0 )
        {
          IpmiLibAddSelErrorRecord(v6, 14, v5, v4, v3);
          result = (PVOID)LeaveWheaIpmiContextLock();
        }
        v1 += 24LL;
        --v2;
      }
      while ( v2 );
    }
    if ( PnpBootDriverTracking )
    {
      WheaSelLogCheckPoint(250LL, *((unsigned int *)PnpBootDriverTracking + 99));
      WheaSelLogCheckPoint(251LL, *((unsigned int *)PnpBootDriverTracking + 98));
      return (PVOID)WheaSelLogCheckPoint(252LL, *((unsigned int *)PnpBootDriverTracking + 100));
    }
  }
  return result;
}
