/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x1404AECD0
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035DF88 (HalpDmaAcquireBufferMappings.c)
 *     SmFpAllocate @ 0x14035EF20 (SmFpAllocate.c)
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 *     PspIumFreePhysicalPages @ 0x1403CCB2C (PspIumFreePhysicalPages.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x140439EB8 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14043A160 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     PnprCopyReservedMapping @ 0x140507038 (PnprCopyReservedMapping.c)
 *     sub_140553C50 @ 0x140553C50 (sub_140553C50.c)
 *     EtwpSavePersistedLogger @ 0x140834B24 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x140BF7AD0 (PnprMapPhysicalPages.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402D2A30 (MiLegitimatePageForDriversToMap.c)
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiTranslateCacheType @ 0x14034A480 (MiTranslateCacheType.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

PVOID __stdcall MmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  ULONG_PTR v5; // r14
  _DWORD *v7; // r8
  int v8; // r12d
  unsigned __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // cl
  KIRQL v11; // bp
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  ULONG_PTR BugCheckParameter4; // rcx
  _QWORD *v20; // r9
  PMDL i; // rbx

  v5 = PoolTag;
  v8 = MiTranslateCacheType(CacheType);
  if ( v8 == 3 )
    return 0LL;
  v9 = (((v7[8] + v7[11]) & 0xFFF) + (unsigned __int64)(unsigned int)v7[10] + 4095) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E34CE8);
  }
  else
  {
    v11 = ExAcquireSpinLockShared(&dword_140E34CE8);
  }
  v12 = qword_140E34CF0;
  v13 = (unsigned __int64)MappingAddress & 0xFFFFFFFFFFFFF000uLL;
  if ( !qword_140E34CF0 )
    goto LABEL_33;
  do
  {
    v14 = *(_QWORD *)(v12 + 24);
    if ( v13 < v14 )
    {
      v12 = *(_QWORD *)v12;
    }
    else
    {
      if ( v13 < v14 + (*(_QWORD *)(v12 + 32) << 12) )
        break;
      v12 = *(_QWORD *)(v12 + 8);
    }
  }
  while ( v12 );
  if ( !v12 )
LABEL_33:
    KeBugCheckEx(0xDAu, 0x106uLL, (ULONG_PTR)MappingAddress, v5, 1uLL);
  if ( v11 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E34CE8);
  else
    ExReleaseSpinLockShared(&dword_140E34CE8, v11);
  if ( *(_DWORD *)(v12 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v12 + 40));
  if ( (*(_DWORD *)(v12 + 44) & 1) != 0 )
  {
    if ( ((unsigned __int16)MappingAddress & 0xFFF) != 0 )
      return 0LL;
    v16 = v9;
    v17 = *(_QWORD *)(v12 + 32) - (((unsigned __int64)MappingAddress - *(_QWORD *)(v12 + 24)) >> 12);
  }
  else
  {
    v17 = *(_QWORD *)(v12 + 32);
    MappingAddress = *(PVOID *)(v12 + 24);
    v16 = v17;
  }
  if ( v9 <= v17 )
  {
    v18 = (((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    BugCheckParameter4 = v18 + 8 * v16;
    v20 = (_QWORD *)v18;
    if ( v18 < BugCheckParameter4 )
    {
      do
      {
        if ( *v20 )
          KeBugCheckEx(0xDAu, 0x107uLL, (ULONG_PTR)MappingAddress, (ULONG_PTR)v20, BugCheckParameter4);
        ++v20;
      }
      while ( (unsigned __int64)v20 < BugCheckParameter4 );
    }
    for ( i = MemoryDescriptorList + 1;
          i->Next > (struct _MDL *)qword_140E2D920
       || ((*(_QWORD *)(48 * (__int64)i->Next - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
       || (int)MiLegitimatePageForDriversToMap(48 * (__int64)i->Next - 0x220000000000LL, v16, v15) >= 0;
          i = (PMDL)((char *)i + 8) )
    {
      if ( !--v9 )
        return (PVOID)MiMapMdlCommon(
                        MemoryDescriptorList,
                        (unsigned __int64 *)((((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                        0LL,
                        4u,
                        v8);
    }
  }
  return 0LL;
}
