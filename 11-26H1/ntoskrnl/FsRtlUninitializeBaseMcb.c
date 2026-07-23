/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x1403BFF10
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x1403BFDB0 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  _SLIST_ENTRY *Mapping; // rdx
  PVOID v3; // rcx

  if ( Mcb->MaximumPairCount == 15 )
  {
    Mapping = (_SLIST_ENTRY *)Mcb->Mapping;
    if ( Mcb->PoolType == 1 )
    {
      ++unk_140E112DC;
      if ( LOWORD(FsRtlFirstPagedMappingLookasideList.Alignment) < unk_140E112D0 )
      {
        RtlpInterlockedPushEntrySList(&FsRtlFirstPagedMappingLookasideList, Mapping);
      }
      else
      {
        ++unk_140E112E0;
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
