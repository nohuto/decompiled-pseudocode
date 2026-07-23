/*
 * XREFs of ZwSetTimerEx @ 0x14072B800
 * Callers:
 *     DifZwSetTimerExWrapper @ 0x1406BFF80 (DifZwSetTimerExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
