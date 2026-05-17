/*
 * XREFs of RtlSetVolatileMemory @ 0x1801646A0
 * Callers:
 *     RtlSetBits @ 0x180092430 (RtlSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x180093C70 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x1800941F0 (RtlClearBits.c)
 *     RtlClearBitsEx @ 0x180140940 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x180141710 (RtlSetBitsEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlSetVolatileMemory(void *a1, int Val, size_t Size)
{
  return memset_thunk_772440563353939046(a1, Val, Size);
}
