/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180090260
 * Callers:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18008ED60 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180090A50 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800902B4 (RtlpRemoveUserSubFromNameSub.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  if ( *((_QWORD *)Callback + 11)
    || *((_QWORD *)Callback + 12)
    || LODWORD(NtCurrentTeb()->ClientId.UniqueThread) == *((_DWORD *)Callback + 34) )
  {
    return RtlpRemoveUserSubFromNameSub(*((PVOID *)Callback + 3), Callback);
  }
  else
  {
    return RtlUnsubscribeWnfNotificationWaitForCompletion((__int64)Callback);
  }
}
