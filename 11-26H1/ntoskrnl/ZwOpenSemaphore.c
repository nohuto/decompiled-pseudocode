/*
 * XREFs of ZwOpenSemaphore @ 0x14072A6A0
 * Callers:
 *     DifZwOpenSemaphoreWrapper @ 0x1406B1200 (DifZwOpenSemaphoreWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle);
}
