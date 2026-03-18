/*
 * XREFs of RtlGetSystemTimePrecise @ 0x14021C830
 * Callers:
 *     KiLoadDirectoryTableBase @ 0x140247600 (KiLoadDirectoryTableBase.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140250E04 (HvlpFastFlushAddressSpaceTb.c)
 *     KiIpiSendRequest @ 0x140329ED0 (KiIpiSendRequest.c)
 *     HvlFlushRangeListTb @ 0x14032B100 (HvlFlushRangeListTb.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14032BD30 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     KiIpiProcessRequest @ 0x14032C2E0 (KiIpiProcessRequest.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     KiExecuteAllDpcs @ 0x14032DD00 (KiExecuteAllDpcs.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     HalpSetVirtualRtc @ 0x140451B58 (HalpSetVirtualRtc.c)
 *     WmiGetClock @ 0x1406C66F0 (WmiGetClock.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B2FF48 (SshpSessionManagerSendControlEvent.c)
 *     PspInitPhase2 @ 0x140CD842C (PspInitPhase2.c)
 *     EtwpFixBootSystemTime @ 0x140CE0810 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140CE0F50 (EtwpInitializeBootTimeStamps.c)
 *     EtwpTraceSystemInitialization @ 0x140CE1440 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 */

__int64 RtlGetSystemTimePrecise()
{
  __int64 i; // rbx
  __int64 v1; // rbp
  LARGE_INTEGER v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
      _mm_pause();
    v1 = MEMORY[0xFFFFF78000000014];
    v2.QuadPart = MEMORY[0xFFFFF78000000348];
    v3 = MEMORY[0xFFFFF78000000358];
    v4 = MEMORY[0xFFFFF78000000368];
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( MEMORY[0xFFFFF78000000340] == i )
      break;
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v2.QuadPart )
    return v1;
  v6 = PerformanceCounter.QuadPart - v2.QuadPart - 1;
  if ( v4 )
    v6 <<= v4;
  return (((unsigned __int64)v6 * (unsigned __int128)v3) >> 64) + v1;
}
