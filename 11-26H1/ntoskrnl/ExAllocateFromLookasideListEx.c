/*
 * XREFs of ExAllocateFromLookasideListEx @ 0x1403E50D0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     VmpAccessFault @ 0x1408224C4 (VmpAccessFault.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     CmpBounceContextStart @ 0x1409407E0 (CmpBounceContextStart.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     CmpAllocateKeyControlBlock @ 0x140A74560 (CmpAllocateKeyControlBlock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
