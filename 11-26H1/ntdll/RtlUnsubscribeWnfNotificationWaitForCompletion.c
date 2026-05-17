/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18006E910
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x18006FE10 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800701C0 (RtlWaitForWnfMetaNotification.c)
 *     RtlUnregisterAvailableCpusChangeNotification @ 0x1801492D0 (RtlUnregisterAvailableCpusChangeNotification.c)
 *     RtlpCtContextFree @ 0x18014964C (RtlpCtContextFree.c)
 * Callees:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x18006FE10 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlpWaitOnAddress @ 0x18007B580 (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(__int64 a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF

  if ( LODWORD(NtCurrentTeb()->ClientId.UniqueThread) == *(_DWORD *)(a1 + 136) )
    __fastfail(5u);
  v2 = 0;
  *(_QWORD *)(a1 + 88) = &v2;
  RtlUnsubscribeWnfStateChangeNotification();
  v3 = 0;
  do
  {
    if ( byte_1801CB8C8 )
      break;
    RtlpWaitOnAddress((unsigned int)&v2, (unsigned int)&v3, 4, 0, RtlpWaitOnAddressSpinCycleCount, 0LL);
    v3 = v2;
  }
  while ( !v2 );
  return 0LL;
}
