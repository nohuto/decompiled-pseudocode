/*
 * XREFs of EtwReplyNotification @ 0x18010ACF0
 * Callers:
 *     EtwDeliverDataBlock @ 0x18003CB30 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 */

ULONG __cdecl EtwReplyNotification(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG NotificationSize; // r8d
  ULONG v2; // ebx
  NTSTATUS v3; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  NotificationSize = Notification->NotificationSize;
  v2 = 0;
  ReturnLength = 0;
  v3 = NtTraceControl(EtwSendReplyDataBlock, Notification, NotificationSize, 0LL, 0, &ReturnLength);
  if ( v3 )
    return RtlNtStatusToDosError(v3);
  return v2;
}
