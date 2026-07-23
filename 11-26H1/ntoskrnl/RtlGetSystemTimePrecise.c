/*
 * XREFs of RtlGetSystemTimePrecise @ 0x14021E1C0
 * Callers:
 *     KiLoadDirectoryTableBase @ 0x140248F60 (KiLoadDirectoryTableBase.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140252764 (HvlpFastFlushAddressSpaceTb.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     HvlFlushRangeListTb @ 0x14032D130 (HvlFlushRangeListTb.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14032DD60 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     KiIpiProcessRequest @ 0x14032E310 (KiIpiProcessRequest.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     HalpSetVirtualRtc @ 0x140449C88 (HalpSetVirtualRtc.c)
 *     WmiGetClock @ 0x1406CA3F0 (WmiGetClock.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 *     PspInitPhase2 @ 0x140CDE7AC (PspInitPhase2.c)
 *     EtwpFixBootSystemTime @ 0x140CE6BB0 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140CE72F0 (EtwpInitializeBootTimeStamps.c)
 *     EtwpTraceSystemInitialization @ 0x140CE77E0 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER RtlGetSystemTimePrecise(void)
{
  __int64 i; // rbx
  LARGE_INTEGER v1; // rbp
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx
  LARGE_INTEGER result; // rax

  while ( 1 )
  {
    for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
      _mm_pause();
    v1.QuadPart = MEMORY[0xFFFFF78000000014];
    v2 = MEMORY[0xFFFFF78000000348];
    v3 = MEMORY[0xFFFFF78000000358];
    v4 = MEMORY[0xFFFFF78000000368];
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( MEMORY[0xFFFFF78000000340] == i )
      break;
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= v2 )
  {
    return v1;
  }
  else
  {
    v6 = PerformanceCounter.QuadPart - v2 - 1;
    if ( v4 )
      v6 <<= v4;
    result.QuadPart = (((unsigned __int64)v6 * (unsigned __int128)v3) >> 64) + v1.QuadPart;
  }
  return result;
}
