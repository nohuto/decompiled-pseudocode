/*
 * XREFs of ExFreeToLookasideListEx @ 0x14039FE30
 * Callers:
 *     CcFreePrivateCacheMapIgnoreNull @ 0x14039E94C (CcFreePrivateCacheMapIgnoreNull.c)
 *     VmpAccessFault @ 0x1408224C4 (VmpAccessFault.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDecommisssionKcb @ 0x1408CC900 (CmpDecommisssionKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     CmpBounceContextCleanup @ 0x14093FA90 (CmpBounceContextCleanup.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     CmpFreeKeyControlBlock @ 0x140A66720 (CmpFreeKeyControlBlock.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall ExFreeToLookasideListEx(PLOOKASIDE_LIST_EX Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    guard_dispatch_icall_no_overrides(Entry, Lookaside, Entry);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
