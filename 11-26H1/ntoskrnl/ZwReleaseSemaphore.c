/*
 * XREFs of ZwReleaseSemaphore @ 0x140728100
 * Callers:
 *     DifZwReleaseSemaphoreWrapper @ 0x1406BA610 (DifZwReleaseSemaphoreWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle);
}
