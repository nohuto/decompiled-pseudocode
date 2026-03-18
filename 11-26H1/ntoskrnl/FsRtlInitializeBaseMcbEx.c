/*
 * XREFs of FsRtlInitializeBaseMcbEx @ 0x14047C4A0
 * Callers:
 *     FsRtlInitializeLargeMcb @ 0x14047C430 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcb @ 0x1405B5460 (FsRtlInitializeBaseMcb.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall FsRtlInitializeBaseMcbEx(PBASE_MCB Mcb, POOL_TYPE PoolType, USHORT Flags)
{
  char v3; // di
  void *v5; // rax

  Mcb->PairCount = 0;
  v3 = Flags;
  Mcb->PoolType = PoolType;
  Mcb->Flags = Flags;
  if ( PoolType == PagedPool )
  {
    ++FsRtlFirstPagedMappingLookasideList.L.TotalAllocates;
    v5 = RtlpInterlockedPopEntrySList(&FsRtlFirstPagedMappingLookasideList.L.ListHead);
    if ( !v5 )
    {
      ++FsRtlFirstPagedMappingLookasideList.L.AllocateMisses;
      v5 = (void *)guard_dispatch_icall_no_overrides(
                     (unsigned int)FsRtlFirstPagedMappingLookasideList.L.Type,
                     FsRtlFirstPagedMappingLookasideList.L.Size);
    }
  }
  else
  {
    v5 = ExAllocateFromNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList);
  }
  Mcb->Mapping = v5;
  if ( v5 )
  {
    Mcb->MaximumPairCount = 15;
    return 1;
  }
  else
  {
    if ( (v3 & 1) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0;
  }
}
