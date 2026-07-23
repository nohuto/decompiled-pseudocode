/*
 * XREFs of ZwEnumerateTransactionObject @ 0x140729D00
 * Callers:
 *     DifZwEnumerateTransactionObjectWrapper @ 0x1406A9380 (DifZwEnumerateTransactionObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateTransactionObject(
        HANDLE RootObjectHandle,
        KTMOBJECT_TYPE QueryType,
        PKTMOBJECT_CURSOR ObjectCursor,
        ULONG ObjectCursorLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(RootObjectHandle);
}
