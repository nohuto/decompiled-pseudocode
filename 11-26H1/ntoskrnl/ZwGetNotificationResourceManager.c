/*
 * XREFs of ZwGetNotificationResourceManager @ 0x140725450
 * Callers:
 *     DifZwGetNotificationResourceManagerWrapper @ 0x1406A7FC0 (DifZwGetNotificationResourceManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwGetNotificationResourceManager(
        HANDLE ResourceManagerHandle,
        PTRANSACTION_NOTIFICATION TransactionNotification,
        ULONG NotificationLength,
        PLARGE_INTEGER Timeout,
        PULONG ReturnLength,
        ULONG Asynchronous,
        ULONG_PTR AsynchronousContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, TransactionNotification);
}
