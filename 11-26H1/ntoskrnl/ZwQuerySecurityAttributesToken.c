/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x14072ACC0
 * Callers:
 *     DifZwQuerySecurityAttributesTokenWrapper @ 0x1406B7530 (DifZwQuerySecurityAttributesTokenWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
