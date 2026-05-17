/*
 * XREFs of RtlpWnfNotificationThread @ 0x18004F7D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004FC80 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x180050768 (RtlpWnfCalculateAndSetNextTimer.c)
 *     NtGetCompleteWnfStateSubscription @ 0x180160E70 (NtGetCompleteWnfStateSubscription.c)
 */

void __fastcall RtlpWnfNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Heap_0; // rbx
  int CompleteWnfStateSubscription; // edi
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8[4]; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF

  v8[0] = -50000000LL;
  Heap_0 = 0LL;
  v7 = 0;
  v9 = 0;
  if ( qword_1801C7200 )
  {
    TpSetWaitEx(a3, a2, 0LL, 0LL);
    while ( 1 )
    {
      if ( !Heap_0 )
      {
        Heap_0 = RtlAllocateHeap_0();
        if ( !Heap_0 )
          break;
      }
      CompleteWnfStateSubscription = NtGetCompleteWnfStateSubscription(0LL, 0LL, 0LL, 0LL, Heap_0, 4144);
      if ( CompleteWnfStateSubscription < 0 )
      {
        RtlFreeHeap_0();
        if ( CompleteWnfStateSubscription == -2147483622 )
          return;
        break;
      }
      RtlpWnfProcessCurrentDescriptor(Heap_0, 0LL, &v7, &v9);
      if ( v9 )
        RtlpWnfCalculateAndSetNextTimer();
      if ( !v7 )
        Heap_0 = 0LL;
    }
    TpSetWaitEx(a3, a2, v8, 0LL);
  }
}
