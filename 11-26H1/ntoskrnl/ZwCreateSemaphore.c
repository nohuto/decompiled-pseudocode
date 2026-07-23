/*
 * XREFs of ZwCreateSemaphore @ 0x1407298A0
 * Callers:
 *     DifZwCreateSemaphoreWrapper @ 0x1406A5920 (DifZwCreateSemaphoreWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SemaphoreHandle);
}
