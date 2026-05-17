/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x18006FE10
 * Callers:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18006E910 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180070600 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18006FE64 (RtlpRemoveUserSubFromNameSub.c)
 */

__int64 __fastcall RtlUnsubscribeWnfStateChangeNotification(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(_QWORD *)(a1 + 88)
    || *(_QWORD *)(a1 + 96)
    || LODWORD(NtCurrentTeb()->ClientId.UniqueThread) == *(_DWORD *)(a1 + 136) )
  {
    return RtlpRemoveUserSubFromNameSub(*(_QWORD *)(a1 + 24), a1, &v2);
  }
  else
  {
    return RtlUnsubscribeWnfNotificationWaitForCompletion(a1);
  }
}
