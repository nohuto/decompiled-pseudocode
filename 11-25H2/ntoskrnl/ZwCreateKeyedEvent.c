/*
 * XREFs of ZwCreateKeyedEvent @ 0x14069C820
 * Callers:
 *     ExpKeyedEventInitialization @ 0x140C326DC (ExpKeyedEventInitialization.c)
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
