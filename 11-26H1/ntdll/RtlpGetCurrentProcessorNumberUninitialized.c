/*
 * XREFs of RtlpGetCurrentProcessorNumberUninitialized @ 0x180100440
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x1801634D0 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberInitialize @ 0x180100480 (RtlpGetCurrentProcessorNumberInitialize.c)
 */

__int64 RtlpGetCurrentProcessorNumberUninitialized()
{
  RtlpGetCurrentProcessorNumberInitialize();
  return RtlGetCurrentProcessorNumber();
}
