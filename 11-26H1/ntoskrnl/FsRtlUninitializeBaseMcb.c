/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x1403B6010
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x1403B5EB0 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  struct _SLIST_ENTRY *Mapping; // rdx
  PVOID v3; // rcx

  if ( Mcb->MaximumPairCount == 15 )
  {
    Mapping = (struct _SLIST_ENTRY *)Mcb->Mapping;
    if ( Mcb->PoolType == 1 )
    {
      ++FsRtlFirstPagedMappingLookasideList.L.TotalFrees;
      if ( LOWORD(FsRtlFirstPagedMappingLookasideList.L.ListHead.Alignment) < FsRtlFirstPagedMappingLookasideList.L.Depth )
      {
        RtlpInterlockedPushEntrySList(&FsRtlFirstPagedMappingLookasideList.L.ListHead, Mapping);
      }
      else
      {
        ++FsRtlFirstPagedMappingLookasideList.L.FreeMisses;
        guard_dispatch_icall_no_overrides(Mapping, Mapping);
      }
    }
    else
    {
      ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, Mapping);
    }
  }
  else
  {
    v3 = Mcb->Mapping;
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      Mcb->Mapping = 0LL;
    }
  }
}
