/*
 * XREFs of ZwCreateKeyedEvent @ 0x1407296A0
 * Callers:
 *     DifZwCreateKeyedEventWrapper @ 0x1406A39C0 (DifZwCreateKeyedEventWrapper.c)
 *     ExpKeyedEventInitialization @ 0x140CED750 (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyedEventHandle);
}
