/*
 * XREFs of ZwSubmitIoRing @ 0x14072B960
 * Callers:
 *     DifZwSubmitIoRingWrapper @ 0x1406C0D80 (DifZwSubmitIoRingWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSubmitIoRing(HANDLE IoRingHandle, ULONG Flags, ULONG WaitOperations, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoRingHandle);
}
