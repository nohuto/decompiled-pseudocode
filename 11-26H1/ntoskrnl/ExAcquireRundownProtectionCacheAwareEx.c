/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x140218430
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpCCSwapFlush @ 0x140217830 (EtwpCCSwapFlush.c)
 *     EtwpTraceMessageVa @ 0x1402179E0 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x140218514 (EtwpOpenLogger.c)
 *     RawBeginOperation @ 0x140218CC4 (RawBeginOperation.c)
 *     EtwpFailLogging @ 0x140258780 (EtwpFailLogging.c)
 *     EtwpQueueApcPoolDpc @ 0x140503254 (EtwpQueueApcPoolDpc.c)
 *     EtwpCompressionDpc @ 0x140532BE0 (EtwpCompressionDpc.c)
 *     EtwInitialize @ 0x14082A958 (EtwInitialize.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1408336C0 (PeriodicCaptureStateTimerCallback.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpUpdateEnableMask @ 0x14097A288 (EtwpUpdateEnableMask.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x140AB2D10 (EtwpStopTrace.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
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
