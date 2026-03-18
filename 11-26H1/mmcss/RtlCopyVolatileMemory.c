/*
 * XREFs of RtlCopyVolatileMemory @ 0x140005810
 * Callers:
 *     RtlCopyFromUser @ 0x140004420 (RtlCopyFromUser.c)
 *     CiDispatchFastIoDeviceControl @ 0x14000FA60 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlCopyVolatileMemory(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
