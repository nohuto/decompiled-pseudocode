/*
 * XREFs of RtlCopyVolatileMemory @ 0x1400EA090
 * Callers:
 *     RtlCopyToUser @ 0x140138ED8 (RtlCopyToUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlCopyVolatileMemory(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
