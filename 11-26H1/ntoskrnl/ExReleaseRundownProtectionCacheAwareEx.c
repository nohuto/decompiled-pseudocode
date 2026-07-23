/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x140258780 (EtwpFailLogging.c)
 *     RawEndOperation @ 0x140258E74 (RawEndOperation.c)
 *     EtwpApcPoolDpc @ 0x1402594D0 (EtwpApcPoolDpc.c)
 *     EtwpQueueApcPoolDpc @ 0x140503254 (EtwpQueueApcPoolDpc.c)
 *     EtwpCompressionProc @ 0x1406CBEA0 (EtwpCompressionProc.c)
 *     EtwInitialize @ 0x14082A958 (EtwInitialize.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpGetTraceGuidInfo @ 0x140911A40 (EtwpGetTraceGuidInfo.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1409797A0 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContext @ 0x140979888 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpQueryTrace @ 0x140979CA0 (EtwpQueryTrace.c)
 *     EtwpUpdateEnableMask @ 0x14097A288 (EtwpUpdateEnableMask.c)
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A76390 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A99C44 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x140AB2034 (EtwpLookupLoggerIdByName.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140AB2BB4 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStopTrace @ 0x140AB2D10 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140AB2FD0 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140AB34A8 (EtwpRealtimeConnect.c)
 *     WdipSemGetLoggerIds @ 0x140AD786C (WdipSemGetLoggerIds.c)
 *     EtwpUpdateDisallowList @ 0x140AE1434 (EtwpUpdateDisallowList.c)
 *     AddDecodeGuidToSessions @ 0x140AFF1E0 (AddDecodeGuidToSessions.c)
 *     EtwpGetDisallowList @ 0x140AFFB84 (EtwpGetDisallowList.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140B2CAA0 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwShutdown @ 0x140B384BC (EtwShutdown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

void __stdcall ExReleaseRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRef, ULONG Count)
{
  _EX_RUNDOWN_REF *RunRefs; // r8
  signed __int64 v3; // r9
  unsigned __int64 v4; // r9

  RunRefs = (_EX_RUNDOWN_REF *)((char *)RunRef->RunRefs + RunRef->RunRefSize
                                                        * (KeGetPcr()->Prcb.Number % RunRef->Number));
  _m_prefetchw(RunRefs);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = RunRefs->Count;
      if ( (RunRefs->Count & 1) != 0 )
        break;
      if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)RunRefs, v3 - 2 * Count, v3) )
        return;
    }
    if ( v3 != 1 )
      break;
    RunRefs = RunRef->RunRefs;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, -Count) == Count )
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
}
