/*
 * XREFs of FsRtlpHeatRegisterVolume @ 0x14079305C
 * Callers:
 *     FsRtlHeatInit @ 0x140792DA0 (FsRtlHeatInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     McTemplateK0jq_EtwWriteTransfer @ 0x1405BA714 (McTemplateK0jq_EtwWriteTransfer.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlpHeatRegisterVolume(__int64 a1, const GUID *a2, unsigned int *a3)
{
  __int64 i; // r9
  __int64 v7; // rcx
  __int64 Pool2; // r8
  int v9; // ebx
  __int64 WriteOperationCount; // rax
  unsigned int v11; // edx
  __int128 v12; // xmm0
  __int64 *v13; // rcx
  __int64 v14; // rdx
  void *ExplicitScope; // [rsp+20h] [rbp-28h]

  ExAcquireResourceExclusiveLite((PERESOURCE)&VslpReservedTransferLock.ReadTransferCount, 1u);
  for ( i = VslpReservedTransferLock.WriteOperationCount;
        (__int64 *)i != &VslpReservedTransferLock.WriteOperationCount;
        i = *(_QWORD *)i )
  {
    v7 = *(_QWORD *)(i + 20) - *(_QWORD *)a1;
    if ( !v7 )
      v7 = *(_QWORD *)(i + 28) - *(_QWORD *)(a1 + 8);
    if ( !v7 )
    {
      ++*(_DWORD *)(i + 16);
      *a3 = *(_DWORD *)(i + 36);
      goto LABEL_21;
    }
  }
  Pool2 = ExAllocatePool2(0x102uLL);
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_22;
  }
  WriteOperationCount = VslpReservedTransferLock.WriteOperationCount;
  v11 = *(_DWORD *)a1 ^ (*(unsigned __int16 *)(a1 + 6) | (*(unsigned __int16 *)(a1 + 4) << 16)) ^ (*(unsigned __int8 *)(a1 + 15) | (*(unsigned __int8 *)(a1 + 10) << 24));
  while ( (__int64 *)WriteOperationCount != &VslpReservedTransferLock.WriteOperationCount )
  {
    if ( *(_DWORD *)(WriteOperationCount + 36) == v11 )
    {
      if ( !++v11 )
        WriteOperationCount = (__int64)&VslpReservedTransferLock.WriteOperationCount;
    }
    else if ( *(_DWORD *)(WriteOperationCount + 36) > v11 )
    {
      break;
    }
    WriteOperationCount = *(_QWORD *)WriteOperationCount;
  }
  v12 = *(_OWORD *)a1;
  *(_DWORD *)(Pool2 + 36) = v11;
  *(_DWORD *)(Pool2 + 16) = 1;
  *(_OWORD *)(Pool2 + 20) = v12;
  v13 = *(__int64 **)(WriteOperationCount + 8);
  if ( *v13 != WriteOperationCount )
    __fastfail(3u);
  *(_QWORD *)Pool2 = WriteOperationCount;
  *(_QWORD *)(Pool2 + 8) = v13;
  *v13 = Pool2;
  *(_QWORD *)(WriteOperationCount + 8) = Pool2;
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
  ExReleaseResourceLite((PERESOURCE)&VslpReservedTransferLock.ReadTransferCount);
  if ( v9 >= 0 )
  {
    if ( (VslpReservedTransferLock.ReadOperationCount & 1) != 0 )
    {
      LODWORD(ExplicitScope) = *a3;
      McTemplateK0jq_EtwWriteTransfer(MS_StorageTiering_Provider_Context, v14, a2, a1, (__int64)ExplicitScope);
    }
    ZwUpdateWnfStateData(&WNF_FSRL_TIERED_VOLUME_DETECTED, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)v9;
}
