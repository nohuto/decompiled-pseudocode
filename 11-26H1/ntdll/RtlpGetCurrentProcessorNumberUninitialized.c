/*
 * XREFs of RtlpGetCurrentProcessorNumberUninitialized @ 0x1800FFB90
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x1801633D0 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberInitialize @ 0x1800FFBD0 (RtlpGetCurrentProcessorNumberInitialize.c)
 */

ULONG RtlpGetCurrentProcessorNumberUninitialized()
{
  RtlpGetCurrentProcessorNumberInitialize();
  return RtlGetCurrentProcessorNumber();
}
