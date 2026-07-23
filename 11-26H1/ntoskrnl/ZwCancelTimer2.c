/*
 * XREFs of ZwCancelTimer2 @ 0x140729280
 * Callers:
 *     DifZwCancelTimer2Wrapper @ 0x1406A06B0 (DifZwCancelTimer2Wrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelTimer2(HANDLE TimerHandle, PT2_CANCEL_PARAMETERS Parameters)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
