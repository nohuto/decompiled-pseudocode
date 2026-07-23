/*
 * XREFs of ZwReleaseKeyedEvent @ 0x14072AF80
 * Callers:
 *     DifZwReleaseKeyedEventWrapper @ 0x1406BA310 (DifZwReleaseKeyedEventWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyedEventHandle);
}
