/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1402578F0
 * Callers:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     KiIntSteerEtwEventEnabled @ 0x140256674 (KiIntSteerEtwEventEnabled.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14025727C (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PpmEventProcessorPerfStateChange @ 0x1402575A0 (PpmEventProcessorPerfStateChange.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x1402577FC (PoTraceSystemTimerResolutionUpdate.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x140257938 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     PpmEventComputeEnergy @ 0x140257C6C (PpmEventComputeEnergy.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     SshpTracingWriteBlockerStateChange @ 0x140258144 (SshpTracingWriteBlockerStateChange.c)
 *     PpmEventTracePerfCheckStart @ 0x140258428 (PpmEventTracePerfCheckStart.c)
 *     EtwpFailLogging @ 0x140258780 (EtwpFailLogging.c)
 *     EtwpDiskProvTraceDisk @ 0x140259018 (EtwpDiskProvTraceDisk.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140331C90 (PpmPerfArbitratorApplyProcessorState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403B7B74 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x1403B7FD8 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PoFxSetComponentLatency @ 0x1403BB2A0 (PoFxSetComponentLatency.c)
 *     EtwWriteString @ 0x1406C9E70 (EtwWriteString.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
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
