/*
 * XREFs of ExFreeToLookasideListEx @ 0x14039E0D0
 * Callers:
 *     CcFreePrivateCacheMapIgnoreNull @ 0x14039CBEC (CcFreePrivateCacheMapIgnoreNull.c)
 *     VmpAccessFault @ 0x14081C2B4 (VmpAccessFault.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDecommisssionKcb @ 0x1408C6330 (CmpDecommisssionKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     CmpBounceContextCleanup @ 0x14097DA80 (CmpBounceContextCleanup.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     CmpFreeKeyControlBlock @ 0x140A591A0 (CmpFreeKeyControlBlock.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
