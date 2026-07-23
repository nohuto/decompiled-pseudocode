/*
 * XREFs of RtlNumberOfSetBitsUlongPtr @ 0x14044CED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberOfSetBitsUlongPtr(ULONG_PTR Target)
{
  return __popcnt(Target);
}
