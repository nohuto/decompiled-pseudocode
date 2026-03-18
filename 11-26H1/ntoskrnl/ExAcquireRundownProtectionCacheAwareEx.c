/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x140218100
 * Callers:
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     EtwpCCSwapFlush @ 0x140217500 (EtwpCCSwapFlush.c)
 *     EtwpTraceMessageVa @ 0x1402176B0 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x1402181E4 (EtwpOpenLogger.c)
 *     RawBeginOperation @ 0x140218994 (RawBeginOperation.c)
 *     EtwpFailLogging @ 0x140256DF0 (EtwpFailLogging.c)
 *     EtwpQueueApcPoolDpc @ 0x1405097A4 (EtwpQueueApcPoolDpc.c)
 *     EtwpCompressionDpc @ 0x1405306E0 (EtwpCompressionDpc.c)
 *     EtwInitialize @ 0x140824718 (EtwInitialize.c)
 *     PeriodicCaptureStateTimerCallback @ 0x14082D480 (PeriodicCaptureStateTimerCallback.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 *     EtwpUpdateEnableMask @ 0x140A6F8F4 (EtwpUpdateEnableMask.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (signed __int64 *)((char *)RunRefCacheAware->RunRefs
                        + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(v2);
  v3 = *v2;
  while ( (v3 & 1) == 0 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v2, v3 + 2 * Count, v3);
    if ( v4 == v3 )
      return 1;
  }
  return 0;
}
