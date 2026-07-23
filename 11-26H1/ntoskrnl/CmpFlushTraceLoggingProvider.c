/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x14085B5D4
 * Callers:
 *     CmShutdownSystem2 @ 0x1406E6740 (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x1407214EC (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140AA8F30 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140E09EE8);
}
