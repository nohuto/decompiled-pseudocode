/*
 * XREFs of RtlpGetCurrentProcessorNumberExUninitialized @ 0x180100460
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x180163540 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberInitialize @ 0x180100480 (RtlpGetCurrentProcessorNumberInitialize.c)
 */

__int64 __fastcall RtlpGetCurrentProcessorNumberExUninitialized(__int64 a1)
{
  __int64 v1; // rdx

  RtlpGetCurrentProcessorNumberInitialize(a1, a1);
  return RtlGetCurrentProcessorNumberEx(v1);
}
