/*
 * XREFs of RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180090A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlUnsubscribeWnfNotificationWithCompletionCallback(
        PWNF_USER_CALLBACK Callback,
        __int64 a2,
        __int64 a3)
{
  if ( *((_QWORD *)Callback + 12) )
    return -1073740008;
  *((_QWORD *)Callback + 12) = a2;
  *((_QWORD *)Callback + 13) = a3;
  return RtlUnsubscribeWnfStateChangeNotification(Callback);
}
