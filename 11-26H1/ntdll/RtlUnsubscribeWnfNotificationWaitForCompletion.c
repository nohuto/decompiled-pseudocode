/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18008ED60
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18008E48C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180090260 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlWaitForWnfMetaNotification @ 0x180090610 (RtlWaitForWnfMetaNotification.c)
 *     RtlUnregisterAvailableCpusChangeNotification @ 0x180149180 (RtlUnregisterAvailableCpusChangeNotification.c)
 *     RtlpCtContextFree @ 0x1801494FC (RtlpCtContextFree.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x180069DA0 (RtlpWaitOnAddress.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180090260 (RtlUnsubscribeWnfStateChangeNotification.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(__int64 a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  if ( LODWORD(NtCurrentTeb()->ClientId.UniqueThread) == *(_DWORD *)(a1 + 136) )
    __fastfail(5u);
  v2 = 0;
  *(_QWORD *)(a1 + 88) = &v2;
  RtlUnsubscribeWnfStateChangeNotification((PWNF_USER_CALLBACK)a1);
  LODWORD(v3) = 0;
  do
  {
    if ( byte_1801CA908 )
      break;
    RtlpWaitOnAddress((unsigned __int64)&v2, &v3, 4LL, 0LL, RtlpWaitOnAddressSpinCycleCount, 0LL);
    LODWORD(v3) = v2;
  }
  while ( !v2 );
  return 0LL;
}
