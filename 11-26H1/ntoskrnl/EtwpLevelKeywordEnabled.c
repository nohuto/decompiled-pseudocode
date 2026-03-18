/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x140255F60
 * Callers:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     KiIntSteerEtwEventEnabled @ 0x140254D14 (KiIntSteerEtwEventEnabled.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1402558F8 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PpmEventProcessorPerfStateChange @ 0x140255C1C (PpmEventProcessorPerfStateChange.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x140255E78 (PoTraceSystemTimerResolutionUpdate.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x140255FA8 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     PpmEventComputeEnergy @ 0x1402562DC (PpmEventComputeEnergy.c)
 *     EtwProviderEnabled @ 0x1402563E0 (EtwProviderEnabled.c)
 *     SshpTracingWriteBlockerStateChange @ 0x1402567B4 (SshpTracingWriteBlockerStateChange.c)
 *     PpmEventTracePerfCheckStart @ 0x140256A98 (PpmEventTracePerfCheckStart.c)
 *     EtwpFailLogging @ 0x140256DF0 (EtwpFailLogging.c)
 *     EtwpDiskProvTraceDisk @ 0x140257838 (EtwpDiskProvTraceDisk.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14032FC60 (PpmPerfArbitratorApplyProcessorState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403ADE64 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x1403AE2C8 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PoFxSetComponentLatency @ 0x1403B1590 (PoFxSetComponentLatency.c)
 *     EtwWriteString @ 0x1406C61D0 (EtwWriteString.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpLevelKeywordEnabled(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v3; // al

  if ( !*(_DWORD *)a1 )
    return 0;
  v3 = *(_BYTE *)(a1 + 4);
  if ( a2 > v3 )
  {
    if ( v3 )
      return 0;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x40) != 0 && !a3 )
    return 1;
  if ( (a3 & *(_QWORD *)(a1 + 16)) == 0 )
    return 0;
  return (a3 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24);
}
