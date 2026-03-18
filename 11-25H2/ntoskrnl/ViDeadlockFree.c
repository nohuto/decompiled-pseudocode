/*
 * XREFs of ViDeadlockFree @ 0x140B896A0
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140608018 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140608178 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockInitializeResource @ 0x140B880D0 (VfDeadlockInitializeResource.c)
 *     ViDeadlockEmptyDatabase @ 0x140B8925C (ViDeadlockEmptyDatabase.c)
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140B983E4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViDeadlockFree(PVOID Entry, int a2)
{
  int v2; // edx
  int v3; // edx
  PVOID v4; // rdx
  struct _NPAGED_LOOKASIDE_LIST *v5; // rcx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
      v4 = Entry;
      v5 = &ViDeadlockThreadLookaside;
    }
    else
    {
      v4 = Entry;
      v5 = &ViDeadlockNodeLookaside;
    }
  }
  else
  {
    v4 = Entry;
    v5 = &ViDeadlockResourceLookaside;
  }
  ExFreeToNPagedLookasideList(v5, v4);
}
