/*
 * XREFs of ZwSetTimer2 @ 0x14072B7E0
 * Callers:
 *     DifZwSetTimer2Wrapper @ 0x1406BFDF0 (DifZwSetTimer2Wrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
