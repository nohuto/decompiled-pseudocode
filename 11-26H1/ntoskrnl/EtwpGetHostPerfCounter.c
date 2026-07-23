/*
 * XREFs of EtwpGetHostPerfCounter @ 0x1404688A4
 * Callers:
 *     EtwpGetLoggerTimeStamp @ 0x14021D850 (EtwpGetLoggerTimeStamp.c)
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
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpGetHostPerfCounter(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  guard_dispatch_icall_no_overrides(&v3, a2);
  return v3;
}
