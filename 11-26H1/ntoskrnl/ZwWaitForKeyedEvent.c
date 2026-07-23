/*
 * XREFs of ZwWaitForKeyedEvent @ 0x14072BC80
 * Callers:
 *     DifZwWaitForKeyedEventWrapper @ 0x1406C2EF0 (DifZwWaitForKeyedEventWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyedEventHandle);
}
