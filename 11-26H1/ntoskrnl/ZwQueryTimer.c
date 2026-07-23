/*
 * XREFs of ZwQueryTimer @ 0x1407286C0
 * Callers:
 *     DifZwQueryTimerWrapper @ 0x1406B86E0 (DifZwQueryTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryTimer(
        HANDLE TimerHandle,
        TIMER_INFORMATION_CLASS TimerInformationClass,
        PVOID TimerInformation,
        ULONG TimerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
