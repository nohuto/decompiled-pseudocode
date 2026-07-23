/*
 * XREFs of ZwOpenKeyedEvent @ 0x14072A5A0
 * Callers:
 *     DifZwOpenKeyedEventWrapper @ 0x1406B0080 (DifZwOpenKeyedEventWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyedEventHandle);
}
