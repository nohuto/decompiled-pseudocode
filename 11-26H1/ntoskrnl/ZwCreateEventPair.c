/*
 * XREFs of ZwCreateEventPair @ 0x1407295C0
 * Callers:
 *     DifZwCreateEventPairWrapper @ 0x1406A2B50 (DifZwCreateEventPairWrapper.c)
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
