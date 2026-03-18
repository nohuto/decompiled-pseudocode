/*
 * XREFs of ExAllocateFromLookasideListEx @ 0x1403E1EE0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     VmpAccessFault @ 0x14081C2B4 (VmpAccessFault.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     CmpBounceContextStart @ 0x14097E7D0 (CmpBounceContextStart.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     CmpAllocateKeyControlBlock @ 0x140A67590 (CmpAllocateKeyControlBlock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall ExAllocateFromLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)guard_dispatch_icall_no_overrides((unsigned int)Lookaside->L.Type, Lookaside->L.Size);
  }
  return result;
}
