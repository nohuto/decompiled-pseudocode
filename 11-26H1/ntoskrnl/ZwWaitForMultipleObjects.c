/*
 * XREFs of ZwWaitForMultipleObjects @ 0x140728B20
 * Callers:
 *     DifZwWaitForMultipleObjectsWrapper @ 0x1406C3220 (DifZwWaitForMultipleObjectsWrapper.c)
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
