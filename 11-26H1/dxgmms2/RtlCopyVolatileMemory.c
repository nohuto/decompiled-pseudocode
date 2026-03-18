/*
 * XREFs of RtlCopyVolatileMemory @ 0x14005B7A0
 * Callers:
 *     RtlCopyFromUser @ 0x14004CC90 (RtlCopyFromUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlCopyVolatileMemory(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
