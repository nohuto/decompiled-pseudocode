/*
 * XREFs of MiStoreWriteModifiedPages @ 0x140408D88
 * Callers:
 *     MiModwriterIssueWrite @ 0x140408928 (MiModwriterIssueWrite.c)
 * Callees:
 *     MiStoreModifiedWriteDereference @ 0x14020A8B0 (MiStoreModifiedWriteDereference.c)
 *     RtlAndAffinityEx @ 0x140252394 (RtlAndAffinityEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     KeSetUserAffinityThread @ 0x1403F7154 (KeSetUserAffinityThread.c)
 *     MiStoreWriteIssue @ 0x140407EF8 (MiStoreWriteIssue.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404096F8 (MiStoreDecrementOutstandingWrites.c)
 *     MiStoreWriteProcessFailedPages @ 0x140409734 (MiStoreWriteProcessFailedPages.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14040A44C (MiDerefPageFileSpaceBitmaps.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140476C00 (KeQueryNodeActiveAffinityEx.c)
 *     MiStoreUpdatePagefileHash @ 0x1404A0100 (MiStoreUpdatePagefileHash.c)
 *     MiStoreExtendVirtualPagefile @ 0x1405117D8 (MiStoreExtendVirtualPagefile.c)
 *     PsQueryProcessAvailableCpus @ 0x140532BB0 (PsQueryProcessAvailableCpus.c)
 *     MiStoreLogFullPagefile @ 0x14070AAB8 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x14070AD30 (MiStoreLogWriteDisabled.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  ULONG v8; // r14d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v10; // rbx
  bool v11; // zf
  char *MappedSystemVa; // rax
  ULONG v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r15d
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 PoolMm; // rax
  __int64 v25; // rcx
  _WORD *v26; // r15
  _QWORD v27[2]; // [rsp+30h] [rbp-A8h] BYREF
  char *v28; // [rsp+40h] [rbp-98h]
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-90h]
  __int64 v30; // [rsp+50h] [rbp-88h]
  __int64 v31; // [rsp+58h] [rbp-80h]
  __int64 *v32; // [rsp+60h] [rbp-78h]
  __int64 v33; // [rsp+68h] [rbp-70h] BYREF
  int v34; // [rsp+90h] [rbp-48h]
  int v35; // [rsp+94h] [rbp-44h]
  int v36; // [rsp+98h] [rbp-40h]
  int v37; // [rsp+9Ch] [rbp-3Ch]
  int v38; // [rsp+A0h] [rbp-38h]
  __int16 v39; // [rsp+E0h] [rbp+8h] BYREF

  memset_0(v27, 0, 0x78uLL);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 224LL);
  MemoryDescriptorList = (PMDL)(a1 + 104);
  v27[0] = v7;
  v27[1] = a1;
  v8 = *(_DWORD *)(a1 + 144) >> 12;
  if ( *(_DWORD *)(v7 + 1316) )
  {
    if ( stru_140E36558.FirstArgument
      && *(_DWORD *)stru_140E36558.FirstArgument
      && (unsigned __int8)tlgKeywordOn(stru_140E36558.FirstArgument, 2LL) )
    {
      MiStoreLogWriteDisabled(v25, *(unsigned int *)(v7 + 1316), v8);
    }
    --*(_DWORD *)(v7 + 1316);
    return 3221225626LL;
  }
  v31 = *(_QWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 1300) + 22304);
  if ( *(_DWORD *)(v31 + 12) < v8 )
  {
    MiStoreExtendVirtualPagefile(v7, v31);
    v5 = *(unsigned int *)(v31 + 12);
    if ( !(_DWORD)v5 )
    {
      if ( stru_140E36558.FirstArgument
        && *(_DWORD *)stru_140E36558.FirstArgument
        && (unsigned __int8)tlgKeywordOn(stru_140E36558.FirstArgument, 2LL) )
      {
        MiStoreLogFullPagefile();
      }
      return 3221225599LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
  {
    if ( (unsigned __int16)KeNumberNodes > 1u && v8 == dword_140FBE21C )
    {
      v26 = (_WORD *)(v7 + 1528);
      v39 = 0;
      KeQueryNodeActiveAffinityEx((unsigned int)(a2 - 1), v7 + 1528, &v39);
      if ( v39 )
      {
        PsQueryProcessAvailableCpus(*(_QWORD *)(*(_QWORD *)(v7 + 256) + 120LL), v7 + 1792, 0LL, &v39);
        if ( (unsigned int)RtlAndAffinityEx((unsigned __int16 *)(v7 + 1528), (unsigned __int16 *)(v7 + 1792), v7 + 1528) )
        {
          KeSetUserAffinityThread((__int64)CurrentThread, (unsigned __int16 *)(v7 + 1528));
          memset_0((void *)(v7 + 1536), 0, 8LL * (unsigned __int16)*v26);
          *v26 = 1;
          KeSetUserAffinityThread((__int64)CurrentThread, (unsigned __int16 *)(v7 + 1528));
        }
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 72);
  if ( !v10 )
  {
    PoolMm = ExAllocatePoolMm(
               64LL,
               8LL * (unsigned int)dword_140FBE21C + 96,
               2001956173,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    *(_QWORD *)(a1 + 72) = PoolMm;
    v10 = PoolMm;
    if ( !PoolMm )
    {
      *(_DWORD *)(v7 + 1316) = 32;
      return 3221225626LL;
    }
  }
  v33 = 0LL;
  v32 = &v33;
  --CurrentThread->KernelApcDisable;
  --CurrentThread->SpecialApcDisable;
  if ( *(_QWORD *)(v7 + 1400) )
  {
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v5, v4);
    v20 = -1073740640;
    goto LABEL_30;
  }
  ++*(_DWORD *)(v7 + 1324);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5, v4);
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
  v28 = MappedSystemVa;
  if ( !MappedSystemVa )
  {
    v20 = -1073741688;
    goto LABEL_27;
  }
  v13 = 0;
  *(_DWORD *)(v10 + 88) = v8 + 1;
  v14 = *(_QWORD *)(a1 + 88) >> 12;
  v37 = *(_DWORD *)(v31 + 88);
  v15 = *(_QWORD *)(v7 + 1520);
  v30 = v15;
  v36 = v14;
  if ( v8 )
  {
    do
    {
      MiStoreWriteModifiedPagePrepare(v27, v13);
      v28 += 4096;
      ++v13;
    }
    while ( v13 < v8 );
    v15 = v30;
  }
  v16 = 0;
  v17 = (v15 - *(_QWORD *)(v7 + 1520)) >> 6;
  if ( (_DWORD)v17 )
  {
    v30 = *(_QWORD *)(v7 + 1520);
    v16 = MiStoreWriteIssue(v27, v17);
  }
  if ( v38 )
    *(_DWORD *)(v7 + 1316) = 32;
  _InterlockedAdd((volatile signed __int32 *)(v10 + 88), -v34);
  if ( v34 == v8 )
  {
    RtlClearBits(*(PRTL_BITMAP *)(v7 + 1512), 0, v8);
    *(_DWORD *)(v10 + 88) = 0;
    v20 = -1073740759;
LABEL_27:
    --CurrentThread->SpecialApcDisable;
    MiStoreDecrementOutstandingWrites(v7);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v21, v4);
    goto LABEL_30;
  }
  v28 = 0LL;
  if ( v34 )
    MiStoreWriteProcessFailedPages(v27);
  v18 = v35;
  *(_DWORD *)(a1 + 40) |= 0x40u;
  v19 = (unsigned int)(v16 + v18);
  if ( (_DWORD)v19 != v8 || *(_QWORD *)(v31 + 184) )
    MiStoreUpdatePagefileHash(v19, a1, MemoryDescriptorList, v8);
  MiStoreModifiedWriteDereference(a1);
  v20 = 259;
LABEL_30:
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v4, v6);
  if ( *v32 )
  {
    v22 = (__int64 *)MiDerefPageFileSpaceBitmaps(v31, v32, 0LL);
    v32 = v22;
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
  }
  if ( v28 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  }
  return v20;
}
