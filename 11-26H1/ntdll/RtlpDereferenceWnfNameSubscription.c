/*
 * XREFs of RtlpDereferenceWnfNameSubscription @ 0x18003ABD0
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18003A200 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x1800902B4 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlRbRemoveNode @ 0x18008BD00 (RtlRbRemoveNode.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x180114A98 (RtlpWnfETWEventNameSubRundown.c)
 *     NtUnsubscribeWnfStateChange @ 0x180162A50 (NtUnsubscribeWnfStateChange.c)
 */

void __fastcall RtlpDereferenceWnfNameSubscription(char *BaseAddress)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // r8

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_1801C6200 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 11, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v5 = 2147353486LL;
    if ( *(_BYTE *)v5 )
      RtlpWnfETWEventNameSubRundown(*((_QWORD *)BaseAddress + 2), BaseAddress);
    NtUnsubscribeWnfStateChange((PCWNF_STATE_NAME)BaseAddress + 2);
    RtlRbRemoveNode((PRTL_RB_TREE)(qword_1801C6200 + 16), (PRTL_BALANCED_NODE)(BaseAddress + 32));
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    v6 = (void *)*((_QWORD *)BaseAddress + 16);
    if ( v6 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801C6200 + 8));
}
