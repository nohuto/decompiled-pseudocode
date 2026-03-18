/*
 * XREFs of ZwSetTimerEx @ 0x140726C30
 * Callers:
 *     DifZwSetTimerExWrapper @ 0x1406BC3A0 (DifZwSetTimerExWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, *(_QWORD *)&TimerSetInformationClass);
}
