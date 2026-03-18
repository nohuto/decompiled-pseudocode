/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140257080
 * Callers:
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x140256DF0 (EtwpFailLogging.c)
 *     RawEndOperation @ 0x14025769C (RawEndOperation.c)
 *     EtwpApcPoolDpc @ 0x140257CF0 (EtwpApcPoolDpc.c)
 *     EtwpQueueApcPoolDpc @ 0x1405097A4 (EtwpQueueApcPoolDpc.c)
 *     EtwpCompressionProc @ 0x1406C7EC0 (EtwpCompressionProc.c)
 *     EtwInitialize @ 0x140824718 (EtwInitialize.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14091ED40 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContext @ 0x14091EE28 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpQueryTrace @ 0x14091F240 (EtwpQueryTrace.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     EtwpGetTraceGuidInfo @ 0x140935E90 (EtwpGetTraceGuidInfo.c)
 *     EtwpAddRegEntryToGroup @ 0x14093B720 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseLoggerContext @ 0x14093D918 (EtwpReleaseLoggerContext.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093E008 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A693C0 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpUpdateTrace @ 0x140A6C6F0 (EtwpUpdateTrace.c)
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A6F5B8 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpFlushTrace @ 0x140A6F6CC (EtwpFlushTrace.c)
 *     EtwpUpdateEnableMask @ 0x140A6F8F4 (EtwpUpdateEnableMask.c)
 *     EtwpLookupLoggerIdByName @ 0x140A7099C (EtwpLookupLoggerIdByName.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A71974 (EtwpRealtimeDisconnectConsumer.c)
 *     WdipSemGetLoggerIds @ 0x140ADADBC (WdipSemGetLoggerIds.c)
 *     EtwpUpdateDisallowList @ 0x140AE392C (EtwpUpdateDisallowList.c)
 *     AddDecodeGuidToSessions @ 0x140AFD670 (AddDecodeGuidToSessions.c)
 *     EtwpGetDisallowList @ 0x140AFDB14 (EtwpGetDisallowList.c)
 *     EtwpRealtimeConnect @ 0x140B294B0 (EtwpRealtimeConnect.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140B2AA20 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwShutdown @ 0x140B362AC (EtwShutdown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
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
