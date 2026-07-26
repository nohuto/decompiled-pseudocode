/*
 * XREFs of RtlCopyToUser @ 0x140138ED8
 * Callers:
 *     ndisFastIoDeviceControl @ 0x140058C20 (ndisFastIoDeviceControl.c)
 *     RtlCopyToUser$thunk$8481748130428616498 @ 0x1400F3010 (RtlCopyToUser$thunk$8481748130428616498.c)
 * Callees:
 *     ProbeForRead_0 @ 0x14009104F (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x1400EA090 (RtlCopyVolatileMemory.c)
 */

void *__fastcall RtlCopyToUser(void *a1, void *Src, size_t Size)
{
  void *result; // rax

  result = 0LL;
  if ( Size )
  {
    ProbeForRead_0(a1, Size, 1u);
    return RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}
