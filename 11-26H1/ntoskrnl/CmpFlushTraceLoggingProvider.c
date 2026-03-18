/*
 * XREFs of CmpFlushTraceLoggingProvider @ 0x14085523C
 * Callers:
 *     CmShutdownSystem2 @ 0x1406E24C0 (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x14071C85C (TlgAggregateFlush.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140AAB984 (CmpFlushUnsupportedOperationTelemetry.c)
 */

void CmpFlushTraceLoggingProvider()
{
  CmpFlushUnsupportedOperationTelemetry();
  TlgAggregateFlush((__int64)&dword_140E09EE8);
}
