/*
 * XREFs of FsRtlpHeatUnregisterVolume @ 0x1407906DC
 * Callers:
 *     FsRtlHeatUninit @ 0x1407904E0 (FsRtlHeatUninit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpHeatUnregisterVolume(_QWORD *a1)
{
  unsigned int *i; // rcx
  __int64 v3; // rdx
  unsigned int *v5; // rdx
  unsigned int **v6; // rax

  ExAcquireResourceExclusiveLite((PERESOURCE)&VslpReservedTransferLock.ForegroundLossTime, 1u);
  for ( i = *(unsigned int **)&VslpReservedTransferLock.PriorityFloorSummary;
        i != &VslpReservedTransferLock.PriorityFloorSummary;
        i = *(unsigned int **)i )
  {
    v3 = *(_QWORD *)(i + 5) - *a1;
    if ( !v3 )
      v3 = *(_QWORD *)(i + 7) - a1[1];
    if ( !v3 )
    {
      if ( i[4]-- == 1 )
      {
        v5 = *(unsigned int **)i;
        if ( *(unsigned int **)(*(_QWORD *)i + 8LL) != i || (v6 = (unsigned int **)*((_QWORD *)i + 1), *v6 != i) )
          __fastfail(3u);
        *v6 = v5;
        *((_QWORD *)v5 + 1) = v6;
        ExFreePoolWithTag(i, 0x68745346u);
      }
      break;
    }
  }
  ExReleaseResourceLite((PERESOURCE)&VslpReservedTransferLock.ForegroundLossTime);
}
