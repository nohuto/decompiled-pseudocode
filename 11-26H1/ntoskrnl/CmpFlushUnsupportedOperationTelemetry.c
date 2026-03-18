/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x140AAB984
 * Callers:
 *     CmpFlushTraceLoggingProvider @ 0x14085523C (CmpFlushTraceLoggingProvider.c)
 *     CmpDoReconcileNextHive @ 0x140AAB490 (CmpDoReconcileNextHive.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14085EFBC (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

void CmpFlushUnsupportedOperationTelemetry()
{
  int v0; // ebx
  volatile __int32 *v1; // rdi

  v0 = 0;
  v1 = (volatile __int32 *)&CmpUnsupportedOperationHits;
  do
  {
    if ( _InterlockedExchange(v1, 0) )
      CmpSendUnsupportedOperationTelemetryEvent();
    ++v0;
    ++v1;
  }
  while ( v0 < 27 );
}
