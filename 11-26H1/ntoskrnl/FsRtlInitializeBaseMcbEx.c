/*
 * XREFs of FsRtlInitializeBaseMcbEx @ 0x140475E10
 * Callers:
 *     FsRtlInitializeLargeMcb @ 0x140475DA0 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcb @ 0x1405B7C70 (FsRtlInitializeBaseMcb.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
    ++unk_140E112D4;
    v5 = RtlpInterlockedPopEntrySList(&FsRtlFirstPagedMappingLookasideList);
    if ( !v5 )
    {
      ++unk_140E112D8;
      v5 = (void *)guard_dispatch_icall_no_overrides(unk_140E112E4, unk_140E112EC);
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
