/*
 * XREFs of MiSegmentDereferenceWorker @ 0x14049CE30
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x1404A9E70 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     CcUnmapInactiveViews @ 0x140408E3C (CcUnmapInactiveViews.c)
 *     MiRemoveUnusedSegments @ 0x14049CD9C (MiRemoveUnusedSegments.c)
 *     MiDeleteZeroValueSegments @ 0x14049CF04 (MiDeleteZeroValueSegments.c)
 *     MiDeleteControlAreaList @ 0x14049CF38 (MiDeleteControlAreaList.c)
 *     MiDeleteCachedEntries @ 0x14049D020 (MiDeleteCachedEntries.c)
 *     MiContractPagingFiles @ 0x1404E1D30 (MiContractPagingFiles.c)
 *     MiHandlePageFileSizeChanges @ 0x14052751C (MiHandlePageFileSizeChanges.c)
 *     MiComputeProportionalSystemCacheVaReduction @ 0x1405337F8 (MiComputeProportionalSystemCacheVaReduction.c)
 *     MiDistributeSystemCacheVaReductions @ 0x1406EC2FC (MiDistributeSystemCacheVaReductions.c)
 *     MiProcessDeleteOnClose @ 0x1406EC5B0 (MiProcessDeleteOnClose.c)
 */

LONG __fastcall MiSegmentDereferenceWorker(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // edx
  int v4; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 64);
  ((void (*)(void))MiDeleteZeroValueSegments)();
  v3 = *(_DWORD *)(a1 + 56);
  if ( v3 )
  {
    v4 = v3 - 2;
    if ( !v4 )
    {
      if ( *(_QWORD *)(a1 + 16) == 1LL )
        MiHandlePageFileSizeChanges(v1);
      goto LABEL_5;
    }
    v6 = v4 - 1;
    if ( !v6 )
    {
LABEL_5:
      MiRemoveUnusedSegments(a1);
      return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          if ( (ULONG *)v1 == &MiSystemPartition )
            MiDistributeSystemCacheVaReductions();
          v9 = MiComputeProportionalSystemCacheVaReduction(v1);
          if ( v9 )
            CcUnmapInactiveViews(*(_QWORD *)(v1 + 256), v9, 1LL, 0LL);
        }
      }
      else if ( *(_QWORD *)(a1 + 16) == 1LL )
      {
        MiContractPagingFiles(v1);
      }
    }
    else
    {
      MiProcessDeleteOnClose(v1, a1);
    }
  }
  else
  {
    do
    {
      MiDeleteCachedEntries(a1, 1LL);
      MiDeleteZeroValueSegments(a1);
    }
    while ( (ULONG *)v1 != &MiSystemPartition && *(_QWORD *)(v1 + 2464) != v1 + 2464 );
    MiProcessDeleteOnClose(v1, a1);
    MiDeleteControlAreaList(v1);
  }
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
