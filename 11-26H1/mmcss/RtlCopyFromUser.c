/*
 * XREFs of RtlCopyFromUser @ 0x140004420
 * Callers:
 *     RtlCopyFromUser$thunk$11487580757436585079 @ 0x140007010 (RtlCopyFromUser$thunk$11487580757436585079.c)
 *     CiDispatchFastIoDeviceControl @ 0x14000FA60 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1400044A6 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x140005810 (RtlCopyVolatileMemory.c)
 */

__int64 (*__fastcall RtlCopyFromUser(void *a1, void *Src, size_t Size))(void)
{
  __int64 (*result)(void); // rax

  result = _uma_functions;
  if ( _uma_functions )
    return (__int64 (*)(void))_uma_functions();
  if ( Size )
  {
    ProbeForRead_0(Src, Size, 1u);
    return (__int64 (*)(void))RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}
