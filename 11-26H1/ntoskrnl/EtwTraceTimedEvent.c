/*
 * XREFs of EtwTraceTimedEvent @ 0x14032D7A0
 * Callers:
 *     KiLoadDirectoryTableBase @ 0x140248F60 (KiLoadDirectoryTableBase.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140252764 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlFlushRangeListTb @ 0x14032D130 (HvlFlushRangeListTb.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14032DD60 (HvlUpdatePerformanceStateCountersForLp.c)
 *     PerfInfoLogIpiReceive @ 0x14032E720 (PerfInfoLogIpiReceive.c)
 *     KiExpireTimer2 @ 0x140338F88 (KiExpireTimer2.c)
 *     KeDisableTimer2 @ 0x1403B3D14 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x1403B42B8 (KiFinalizeTimer2Disablement.c)
 *     KiProcessExpiredTimerList @ 0x1403B58FC (KiProcessExpiredTimerList.c)
 *     IopTimerDispatch @ 0x1404CD7F0 (IopTimerDispatch.c)
 *     EtwTraceCpuCacheFlush @ 0x1406C8204 (EtwTraceCpuCacheFlush.c)
 *     EtwpTraceFltTimedIo @ 0x1406C9700 (EtwpTraceFltTimedIo.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceTimedEvent(__int16 a1, unsigned int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned __int64 v7; // rbp
  unsigned int v8; // ebx
  bool v9; // zf
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  int i; // [rsp+54h] [rbp-24h]

  v13[2] = a3;
  v7 = a2;
  v14 = a4;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v9 = !_BitScanForward((unsigned int *)&a3, v8);
  for ( i = 0; !v9; v9 = !_BitScanForward((unsigned int *)&a3, v8) )
  {
    v8 &= v8 - 1;
    result = 32LL * (unsigned int)a3;
    v11 = result + EtwpHostSiloState + 4556;
    if ( v11 )
    {
      result = v7 >> 29;
      if ( ((unsigned int)v7 & *(_DWORD *)(v11 + 4 * (v7 >> 29)) & 0x1FFFFFFF) != 0 )
      {
        v12 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4505) - 1LL;
        v13[1] = 8LL;
        v13[0] = a6 + 8 * v12;
        result = EtwpLogKernelEvent(
                   (unsigned int)v13,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4504),
                   2,
                   a1,
                   a5);
      }
    }
  }
  return result;
}
