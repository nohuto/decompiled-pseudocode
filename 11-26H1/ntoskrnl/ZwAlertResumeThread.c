/*
 * XREFs of ZwAlertResumeThread @ 0x140728DA0
 * Callers:
 *     DifZwAlertResumeThreadWrapper @ 0x14069CE90 (DifZwAlertResumeThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
