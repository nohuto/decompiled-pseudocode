/*
 * XREFs of ZwSetTimerEx @ 0x14069E960
 * Callers:
 *     <none>
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
