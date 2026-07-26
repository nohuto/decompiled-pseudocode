/*
 * XREFs of RtlSetVolatileMemory @ 0x1400EA0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlSetVolatileMemory(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
