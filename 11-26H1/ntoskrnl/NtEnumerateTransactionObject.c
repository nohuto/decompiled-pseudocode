/*
 * XREFs of NtEnumerateTransactionObject @ 0x140536550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtEnumerateTransactionObject(
        HANDLE RootObjectHandle,
        KTMOBJECT_TYPE QueryType,
        PKTMOBJECT_CURSOR ObjectCursor,
        ULONG ObjectCursorLength,
        PULONG ReturnLength)
{
  return __imp_NtEnumerateTransactionObject(RootObjectHandle, QueryType, ObjectCursor, ObjectCursorLength, ReturnLength);
}
