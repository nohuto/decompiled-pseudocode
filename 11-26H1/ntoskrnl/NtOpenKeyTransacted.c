/*
 * XREFs of NtOpenKeyTransacted @ 0x1408554D0
 * Callers:
 *     DifNtOpenKeyTransactedWrapper @ 0x140681570 (DifNtOpenKeyTransactedWrapper.c)
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x140936740 (NtOpenKeyTransactedEx.c)
 */

NTSTATUS __cdecl NtOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  return NtOpenKeyTransactedEx(KeyHandle, DesiredAccess, ObjectAttributes, 0, TransactionHandle);
}
