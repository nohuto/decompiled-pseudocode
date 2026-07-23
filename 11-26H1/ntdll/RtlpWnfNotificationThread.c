/*
 * XREFs of RtlpWnfNotificationThread @ 0x180039D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18003A200 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18003ACE8 (RtlpWnfCalculateAndSetNextTimer.c)
 *     NtGetCompleteWnfStateSubscription @ 0x180160D70 (NtGetCompleteWnfStateSubscription.c)
 */

void __fastcall RtlpWnfNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  NTSTATUS CompleteWnfStateSubscription; // edi
  _WNF_DELIVERY_DESCRIPTOR *NewDeliveryDescriptor; // rbx
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-20h] BYREF

  Timeout.QuadPart = -50000000LL;
  if ( qword_1801C6200 )
  {
    TpSetWaitEx(a3, a2, 0LL, 0LL);
    while ( 1 )
    {
      NewDeliveryDescriptor = (_WNF_DELIVERY_DESCRIPTOR *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x1030uLL);
      if ( !NewDeliveryDescriptor )
        break;
      CompleteWnfStateSubscription = NtGetCompleteWnfStateSubscription(0LL, 0LL, 0, 0, NewDeliveryDescriptor, 0x1030u);
      if ( CompleteWnfStateSubscription < 0 )
      {
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, NewDeliveryDescriptor);
        if ( CompleteWnfStateSubscription == -2147483622 )
          return;
        break;
      }
      RtlpWnfProcessCurrentDescriptor(&NewDeliveryDescriptor->SubscriptionId);
    }
    TpSetWaitEx(a3, a2, &Timeout, 0LL);
  }
}
