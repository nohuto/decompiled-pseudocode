/*
 * XREFs of FsRtlpHeatRegisterVolume @ 0x14079052C
 * Callers:
 *     FsRtlHeatInit @ 0x140790270 (FsRtlHeatInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     McTemplateK0jq_EtwWriteTransfer @ 0x1405B7EA4 (McTemplateK0jq_EtwWriteTransfer.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlpHeatRegisterVolume(__int64 a1, const GUID *a2, unsigned int *a3)
{
  unsigned int *i; // r9
  __int64 v7; // rcx
  __int64 Pool2; // r8
  int v9; // ebx
  unsigned int *p_PriorityFloorSummary; // rax
  unsigned int v11; // edx
  __int128 v12; // xmm0
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-28h]

  ExAcquireResourceExclusiveLite((PERESOURCE)&VslpReservedTransferLock.ForegroundLossTime, 1u);
  for ( i = *(unsigned int **)&VslpReservedTransferLock.PriorityFloorSummary;
        i != &VslpReservedTransferLock.PriorityFloorSummary;
        i = *(unsigned int **)i )
  {
    v7 = *(_QWORD *)(i + 5) - *(_QWORD *)a1;
    if ( !v7 )
      v7 = *(_QWORD *)(i + 7) - *(_QWORD *)(a1 + 8);
    if ( !v7 )
    {
      ++i[4];
      *a3 = i[9];
      goto LABEL_21;
    }
  }
  Pool2 = ExAllocatePool2(0x102uLL);
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_22;
  }
  p_PriorityFloorSummary = *(unsigned int **)&VslpReservedTransferLock.PriorityFloorSummary;
  v11 = *(_DWORD *)a1 ^ (*(unsigned __int16 *)(a1 + 6) | (*(unsigned __int16 *)(a1 + 4) << 16)) ^ (*(unsigned __int8 *)(a1 + 15) | (*(unsigned __int8 *)(a1 + 10) << 24));
  while ( p_PriorityFloorSummary != &VslpReservedTransferLock.PriorityFloorSummary )
  {
    if ( p_PriorityFloorSummary[9] == v11 )
    {
      if ( !++v11 )
        p_PriorityFloorSummary = &VslpReservedTransferLock.PriorityFloorSummary;
    }
    else if ( p_PriorityFloorSummary[9] > v11 )
    {
      break;
    }
    p_PriorityFloorSummary = *(unsigned int **)p_PriorityFloorSummary;
  }
  v12 = *(_OWORD *)a1;
  *(_DWORD *)(Pool2 + 36) = v11;
  *(_DWORD *)(Pool2 + 16) = 1;
  *(_OWORD *)(Pool2 + 20) = v12;
  v13 = (__int64 *)*((_QWORD *)p_PriorityFloorSummary + 1);
  if ( (unsigned int *)*v13 != p_PriorityFloorSummary )
    __fastfail(3u);
  *(_QWORD *)Pool2 = p_PriorityFloorSummary;
  *(_QWORD *)(Pool2 + 8) = v13;
  *v13 = Pool2;
  *((_QWORD *)p_PriorityFloorSummary + 1) = Pool2;
  *a3 = v11;
  if ( !MS_StorageTiering_Provider_Context[0] )
    EtwRegister(
      &MS_StorageTiering_Provider,
      (PETWENABLECALLBACK)FsRtlpTieringHeatEventsControlCallbackV2,
      MS_StorageTiering_Provider_Context,
      MS_StorageTiering_Provider_Context);
LABEL_21:
  v9 = 0;
LABEL_22:
  ExReleaseResourceLite((PERESOURCE)&VslpReservedTransferLock.ForegroundLossTime);
  if ( v9 >= 0 )
  {
    if ( (VslpReservedTransferLock.PriorityFloorCounts[24] & 1) != 0 )
    {
      LODWORD(v16) = *a3;
      McTemplateK0jq_EtwWriteTransfer(MS_StorageTiering_Provider_Context, v14, a2, a1, v16);
    }
    ZwUpdateWnfStateData((__int64)&WNF_FSRL_TIERED_VOLUME_DETECTED, 0LL);
  }
  return (unsigned int)v9;
}
