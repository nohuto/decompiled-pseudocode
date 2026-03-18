/*
 * XREFs of EtwpGetHostPerfCounter @ 0x14046F124
 * Callers:
 *     EtwpGetLoggerTimeStamp @ 0x14021BEC0 (EtwpGetLoggerTimeStamp.c)
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
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpGetHostPerfCounter(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  guard_dispatch_icall_no_overrides(&v3, a2);
  return v3;
}
