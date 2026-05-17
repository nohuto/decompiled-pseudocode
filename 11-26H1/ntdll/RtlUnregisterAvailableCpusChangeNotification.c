/*
 * XREFs of RtlUnregisterAvailableCpusChangeNotification @ 0x1801492D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18006E910 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 */

__int64 __fastcall RtlUnregisterAvailableCpusChangeNotification(__int64 *a1)
{
  RtlUnsubscribeWnfNotificationWaitForCompletion(*a1);
  return RtlFreeHeap_0();
}
