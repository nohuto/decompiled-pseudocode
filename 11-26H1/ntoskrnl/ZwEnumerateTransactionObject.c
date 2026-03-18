/*
 * XREFs of ZwEnumerateTransactionObject @ 0x140725130
 * Callers:
 *     DifZwEnumerateTransactionObjectWrapper @ 0x1406A57A0 (DifZwEnumerateTransactionObjectWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwEnumerateTransactionObject(
        HANDLE RootObjectHandle,
        KTMOBJECT_TYPE QueryType,
        PKTMOBJECT_CURSOR ObjectCursor,
        ULONG ObjectCursorLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(RootObjectHandle, *(_QWORD *)&QueryType);
}
