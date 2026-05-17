/*
 * XREFs of RtlpDereferenceWnfNameSubscription @ 0x180050650
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004FC80 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18006FE64 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlRbRemoveNode @ 0x18006B8B0 (RtlRbRemoveNode.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x1801152B8 (RtlpWnfETWEventNameSubRundown.c)
 *     NtUnsubscribeWnfStateChange @ 0x180162B50 (NtUnsubscribeWnfStateChange.c)
 */

struct _TEB *__fastcall RtlpDereferenceWnfNameSubscription(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  signed __int64 v4; // rax
  bool v5; // cc
  signed __int64 v6; // rax
  __int64 v8; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(qword_1801C7200 + 8), a2);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 64), v3);
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), 0xFFFFFFFFFFFFFFFFuLL);
  v5 = v4 <= 1;
  v6 = v4 - 1;
  if ( v5 )
  {
    if ( v6 )
      __fastfail(0xEu);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v8 = 2147353486LL;
    if ( *(_BYTE *)v8 )
      RtlpWnfETWEventNameSubRundown(*(_QWORD *)(a1 + 16), a1);
    NtUnsubscribeWnfStateChange(a1 + 16);
    RtlRbRemoveNode(qword_1801C7200 + 16, a1 + 32);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    if ( *(_QWORD *)(a1 + 128) )
      RtlFreeHeap_0();
    RtlFreeHeap_0();
  }
  else
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801C7200 + 8));
}
