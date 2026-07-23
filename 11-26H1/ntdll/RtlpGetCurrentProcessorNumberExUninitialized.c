/*
 * XREFs of RtlpGetCurrentProcessorNumberExUninitialized @ 0x1800FFBB0
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x180163440 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberInitialize @ 0x1800FFBD0 (RtlpGetCurrentProcessorNumberInitialize.c)
 */

void __fastcall RtlpGetCurrentProcessorNumberExUninitialized(__int64 a1)
{
  PPROCESSOR_NUMBER v1; // rdx

  RtlpGetCurrentProcessorNumberInitialize(a1, a1);
  RtlGetCurrentProcessorNumberEx(v1);
}
