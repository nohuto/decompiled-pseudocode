/*
 * XREFs of HalpDmaAllocateMapRegisters @ 0x14035C680
 * Callers:
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14035B920 (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalAllocateAdapterChannelV2 @ 0x14035BB40 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14035BE20 (HalBuildScatterGatherListV2.c)
 *     IoFreeAdapterChannelV2 @ 0x14035CB20 (IoFreeAdapterChannelV2.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14043721C (HalpAllocateDmaResourcesInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14057C2D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocateMapRegisters @ 0x140783F60 (HalpAllocateMapRegisters.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     HalpDmaPrependTranslations @ 0x140356778 (HalpDmaPrependTranslations.c)
 *     HalpDmaGetTranslationEntries @ 0x1403584D8 (HalpDmaGetTranslationEntries.c)
 *     HalpDmaLinkContiguousTranslations @ 0x140358E78 (HalpDmaLinkContiguousTranslations.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140359080 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1403592EC (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x14035B01C (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaGetMasterAdapterVersion @ 0x14035B1DC (HalpDmaGetMasterAdapterVersion.c)
 *     HalpDmaReturnPageToOwner @ 0x14035B200 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaGetAdapterVersion @ 0x14035E758 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousMemory @ 0x14050EE40 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x140511D00 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140511E84 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x1405339CC (HalpDmaFreeMapRegisterFrame.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14058B358 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14058B724 (HalpDmaCommitContiguousMapBuffers.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaAllocateMapRegisters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  ULONG v5; // r14d
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // r15
  __int64 ScatterPagesFromScatterPool; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  ULONG ClearBitsAndSet; // edi
  __int64 v14; // rcx
  ULONG v15; // edi
  __int64 v16; // rcx
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 i; // r15
  void *v22; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v24; // rax
  __int64 TranslationEntries; // rax
  unsigned int v26; // r14d
  __int64 *v27; // r12
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rcx
  ULONG v31; // r8d
  __int64 v32; // r10
  __int64 ScatterPagesFromContiguousPoolV2; // rax
  __int64 v34; // rax
  __int64 v35; // r15
  PHYSICAL_ADDRESS *QuadPart; // rdi
  void **v37; // rbx
  __int64 v38; // r12
  void *v39; // rcx
  PHYSICAL_ADDRESS v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 ContiguousPagesFromContiguousPoolV3; // rax
  void *MapRegisterFrame; // rax
  unsigned int ContiguousMemory; // eax
  PVOID v48; // rdi
  PMDL v49; // rbx
  PVOID BaseAddress; // [rsp+30h] [rbp-39h] BYREF
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE v53; // [rsp+58h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v54; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v55; // [rsp+D0h] [rbp+67h] BYREF
  int v56; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v57; // [rsp+E8h] [rbp+7Fh] BYREF

  v56 = 0;
  v4 = 0;
  v5 = a2;
  v55 = 0;
  BaseAddress = 0LL;
  v7 = 0LL;
  v57 = 0LL;
  MemoryDescriptorList = 0LL;
  memset(&v54, 0, sizeof(v54));
  if ( !*(_BYTE *)(a1 + 345) )
  {
    if ( *(_BYTE *)(a1 + 442) )
    {
      result = HalpDmaAllocateScatterPagesFromScatterPool(a1, a1, a2, 0, 0, &v55);
      v4 = v55;
      v7 = result;
      if ( v55 == v5 )
        return result;
    }
    else
    {
      if ( (unsigned int)HalpDmaGetAdapterVersion(a1, a2, a3, a4) == 2 )
      {
        v4 = v5;
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
        ClearBitsAndSet = -1;
        if ( v5 )
          ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a1 + 24), v5, 0);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( ClearBitsAndSet == -1 )
        {
          v7 = 0LL;
          v4 = 0;
        }
        else
        {
          v7 = HalpDmaLinkContiguousTranslations(a1, ClearBitsAndSet, v5);
        }
        v55 = v4;
      }
      else
      {
        ContiguousPagesFromContiguousPoolV3 = HalpDmaAllocateContiguousPagesFromContiguousPoolV3(v12, a1);
        v4 = v55;
        v7 = ContiguousPagesFromContiguousPoolV3;
      }
      if ( v7 )
        return v7;
    }
  }
  v9 = *(_QWORD *)(a1 + 160);
  if ( !*(_BYTE *)(a1 + 442) )
  {
    if ( (unsigned int)HalpDmaGetAdapterVersion(a1, a2, a3, a4) == 2 )
    {
      memset(&v53, 0, sizeof(v53));
      v4 = v5;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 128), &v53);
      v15 = -1;
      if ( v5 )
        v15 = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(v9 + 24), v5, 0);
      KeReleaseInStackQueuedSpinLock(&v53);
      if ( v15 == -1 )
      {
        v7 = 0LL;
        v4 = 0;
        goto LABEL_23;
      }
      v24 = HalpDmaLinkContiguousTranslations(v9, v15, v5);
    }
    else
    {
      v24 = HalpDmaAllocateContiguousPagesFromContiguousPoolV3(v14, v9);
      v4 = v55;
    }
    v7 = v24;
LABEL_23:
    if ( !v7 )
      goto LABEL_24;
    return v7;
  }
  ScatterPagesFromScatterPool = HalpDmaAllocateScatterPagesFromScatterPool(a1, v9, v5 - v4, 0, 0, (unsigned int *)&v56);
  if ( ScatterPagesFromScatterPool )
  {
    v11 = HalpDmaPrependTranslations(ScatterPagesFromScatterPool, v56, v7);
    v4 += v56;
    v7 = v11;
  }
  if ( v4 == v5 )
    return v7;
  if ( (unsigned int)HalpDmaGetMasterAdapterVersion(*(_QWORD *)(a1 + 160)) == 2 )
    ScatterPagesFromContiguousPoolV2 = HalpDmaAllocateScatterPagesFromContiguousPoolV2(
                                         v30,
                                         v32,
                                         v31,
                                         0,
                                         0,
                                         (ULONG *)&v56);
  else
    ScatterPagesFromContiguousPoolV2 = HalpDmaAllocateScatterPagesFromContiguousPoolV3(
                                         v30,
                                         v32,
                                         v31,
                                         0,
                                         0,
                                         (__int64)&v56);
  if ( ScatterPagesFromContiguousPoolV2 )
  {
    v34 = HalpDmaPrependTranslations(ScatterPagesFromContiguousPoolV2, v56, v7);
    v4 += v56;
    v7 = v34;
  }
  if ( v4 == v5 )
    return v7;
LABEL_24:
  if ( !*(_BYTE *)(a1 + 442) )
  {
    ContiguousMemory = HalpDmaAllocateContiguousMemory(
                         a1,
                         v5,
                         (unsigned int)&BaseAddress,
                         (unsigned int)&v57,
                         (__int64)&MemoryDescriptorList);
    v55 = ContiguousMemory;
    if ( ContiguousMemory )
    {
      v48 = BaseAddress;
      if ( HalpDmaCommitContiguousMapBuffers(*(_QWORD *)(a1 + 160), BaseAddress, v57, ContiguousMemory) )
        return HalpDmaAllocateContiguousPagesFromContiguousPool();
      v49 = MemoryDescriptorList;
      if ( MemoryDescriptorList )
      {
        if ( v48 )
          MmUnmapLockedPages(v48, MemoryDescriptorList);
        MiFreePagesFromMdl((ULONG_PTR)v49, 0, 0, 0);
        ExFreePoolWithTag(v49, 0);
      }
      else
      {
        MmFreeContiguousMemory(v48);
      }
    }
    return 0LL;
  }
  v17 = v5 - v4;
  v20 = HalpMmAllocCtxAlloc(v16, 8LL * v17);
  if ( !v20 )
  {
LABEL_42:
    if ( v4 )
    {
      v28 = v4;
      do
      {
        v29 = *(_QWORD *)(v7 + 8);
        HalpDmaReturnPageToOwner(a1, *(_QWORD *)(a1 + 160), v7);
        v7 = v29;
        --v28;
      }
      while ( v28 );
    }
    return 0LL;
  }
  for ( i = 0LL; (unsigned int)i < v17; i = (unsigned int)(i + 1) )
  {
    if ( HalpDmaCvmConfiguration )
    {
      MapRegisterFrame = (void *)HalpDmaAllocateMapRegisterFrame(v19, v18);
      *(_QWORD *)(v20 + 8 * i) = MapRegisterFrame;
      if ( !MapRegisterFrame )
        goto LABEL_36;
      PhysicalAddress = MmGetPhysicalAddress(MapRegisterFrame);
      if ( HalpDmaCvmConfiguration )
      {
        v19 = ~qword_140FBAD48;
        PhysicalAddress.QuadPart &= ~qword_140FBAD48;
      }
    }
    else
    {
      v22 = (void *)HalpMmAllocCtxAlloc(v19, 4096LL);
      *(_QWORD *)(v20 + 8 * i) = v22;
      if ( !v22 )
        goto LABEL_36;
      PhysicalAddress = MmGetPhysicalAddress(v22);
    }
    if ( PhysicalAddress.HighPart )
      goto LABEL_36;
  }
  TranslationEntries = HalpDmaGetTranslationEntries(*(_QWORD *)(a1 + 160), 1, v17);
  if ( !TranslationEntries )
  {
LABEL_36:
    v26 = 0;
    if ( (_DWORD)i )
    {
      v27 = (__int64 *)v20;
      do
      {
        if ( HalpDmaCvmConfiguration )
          HalpDmaFreeMapRegisterFrame(*v27);
        else
          HalpMmAllocCtxFree(v19, *v27);
        ++v26;
        ++v27;
      }
      while ( v26 < (unsigned int)i );
    }
    HalpMmAllocCtxFree(v19, v20);
    goto LABEL_42;
  }
  v35 = HalpDmaPrependTranslations(TranslationEntries, v17, v7);
  QuadPart = (PHYSICAL_ADDRESS *)v35;
  if ( v17 )
  {
    v37 = (void **)v20;
    v38 = v17;
    do
    {
      v39 = *v37;
      if ( HalpDmaCvmConfiguration )
        v40 = MmGetPhysicalAddress(v39);
      else
        v40.QuadPart = MmGetPhysicalAddress(v39).LowPart;
      *QuadPart = v40;
      v41 = (unsigned __int64)*v37;
      v42 = 1LL;
      v43 = 2LL;
      do
      {
        v41 |= v42++;
        --v43;
      }
      while ( v43 );
      ++v37;
      QuadPart[6].QuadPart = v41 | 0xC;
      QuadPart = (PHYSICAL_ADDRESS *)QuadPart[1].QuadPart;
      --v38;
    }
    while ( v38 );
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 128LL), &v54);
  *(_DWORD *)(*(_QWORD *)(a1 + 160) + 216LL) += v17;
  KeReleaseInStackQueuedSpinLock(&v54);
  HalpMmAllocCtxFree(v44, v20);
  return v35;
}
