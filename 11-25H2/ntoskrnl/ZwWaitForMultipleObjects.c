/*
 * XREFs of ZwWaitForMultipleObjects @ 0x14069BCA0
 * Callers:
 *     DifZwWaitForMultipleObjectsWrapper @ 0x14063DC10 (DifZwWaitForMultipleObjectsWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Count);
}
