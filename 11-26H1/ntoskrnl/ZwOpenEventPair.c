/*
 * XREFs of ZwOpenEventPair @ 0x14072A4E0
 * Callers:
 *     DifZwOpenEventPairWrapper @ 0x1406AF280 (DifZwOpenEventPairWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenEventPair(
        PHANDLE EventPairHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle);
}
