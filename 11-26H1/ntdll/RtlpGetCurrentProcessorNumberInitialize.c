/*
 * XREFs of RtlpGetCurrentProcessorNumberInitialize @ 0x1800FFBD0
 * Callers:
 *     RtlpGetCurrentProcessorNumberUninitialized @ 0x1800FFB90 (RtlpGetCurrentProcessorNumberUninitialized.c)
 *     RtlpGetCurrentProcessorNumberExUninitialized @ 0x1800FFBB0 (RtlpGetCurrentProcessorNumberExUninitialized.c)
 * Callees:
 *     <none>
 */

__int64 RtlpGetCurrentProcessorNumberInitialize()
{
  __int64 result; // rax

  result = 3LL;
  if ( MEMORY[0x7FFE0295] )
  {
    result = 1LL;
  }
  else if ( MEMORY[0x7FFE0294] )
  {
    result = 2LL;
  }
  RtlpGetCurrentProcessorNumberHow = result;
  return result;
}
