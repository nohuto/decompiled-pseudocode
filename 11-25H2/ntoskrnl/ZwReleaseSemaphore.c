/*
 * XREFs of ZwReleaseSemaphore @ 0x14069B280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle);
}
