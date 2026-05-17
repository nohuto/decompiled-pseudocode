/*
 * XREFs of RtlIsMultipleProcessorAffinityEx @ 0x18013F9E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCountSetBitsAffinityEx @ 0x18013F8A0 (RtlCountSetBitsAffinityEx.c)
 */

_BOOL8 __fastcall RtlIsMultipleProcessorAffinityEx(_WORD *a1)
{
  return (unsigned int)RtlCountSetBitsAffinityEx(a1) > 1;
}
