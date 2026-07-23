/*
 * XREFs of RtlUnregisterAvailableCpusChangeNotification @ 0x180149180
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18008ED60 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 */

LOGICAL __fastcall RtlUnregisterAvailableCpusChangeNotification(__int64 *BaseAddress)
{
  RtlUnsubscribeWnfNotificationWaitForCompletion(*BaseAddress);
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
