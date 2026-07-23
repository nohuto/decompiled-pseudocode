/*
 * XREFs of RtlSetVolatileMemory @ 0x1801645A0
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x180072E40 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x1800733C0 (RtlClearBits.c)
 *     RtlSetBits @ 0x180073DE0 (RtlSetBits.c)
 *     RtlClearBitsEx @ 0x180140840 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x180141610 (RtlSetBitsEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlSetVolatileMemory(void *a1, int Val, size_t Size)
{
  return memset_thunk_772440563353939046(a1, Val, Size);
}
