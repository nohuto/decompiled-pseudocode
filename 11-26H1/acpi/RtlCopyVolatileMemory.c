/*
 * XREFs of RtlCopyVolatileMemory @ 0x140072320
 * Callers:
 *     RtlCopyDeviceMemory @ 0x140055E90 (RtlCopyDeviceMemory.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlCopyVolatileMemory(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
