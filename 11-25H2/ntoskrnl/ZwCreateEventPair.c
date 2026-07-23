/*
 * XREFs of ZwCreateEventPair @ 0x14069C740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEventPair(
        PHANDLE EventPairHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle);
}
