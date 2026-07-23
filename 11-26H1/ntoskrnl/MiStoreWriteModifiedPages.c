/*
 * XREFs of MiStoreWriteModifiedPages @ 0x140401E78
 * Callers:
 *     MiModwriterIssueWrite @ 0x140401A18 (MiModwriterIssueWrite.c)
 * Callees:
 *     MiStoreModifiedWriteDereference @ 0x14020A990 (MiStoreModifiedWriteDereference.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KeSetUserAffinityThread @ 0x1403F0B04 (KeSetUserAffinityThread.c)
 *     MiStoreWriteIssue @ 0x140400FE8 (MiStoreWriteIssue.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404022B0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404027E8 (MiStoreDecrementOutstandingWrites.c)
 *     MiStoreWriteProcessFailedPages @ 0x140402824 (MiStoreWriteProcessFailedPages.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14040353C (MiDerefPageFileSpaceBitmaps.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140470380 (KeQueryNodeActiveAffinityEx.c)
 *     MiStoreUpdatePagefileHash @ 0x140499C50 (MiStoreUpdatePagefileHash.c)
 *     MiStoreExtendVirtualPagefile @ 0x14050B248 (MiStoreExtendVirtualPagefile.c)
 *     PsQueryProcessAvailableCpus @ 0x140535050 (PsQueryProcessAvailableCpus.c)
 *     MiStoreLogFullPagefile @ 0x14070F76C (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x14070F9E4 (MiStoreLogWriteDisabled.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  ULONG v7; // r14d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // rbx
  bool v10; // zf
  char *MappedSystemVa; // rax
  ULONG v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r15d
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rdx
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
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 224LL);
  MemoryDescriptorList = (PMDL)(a1 + 104);
  v27[0] = v6;
  v27[1] = a1;
  v7 = *(_DWORD *)(a1 + 144) >> 12;
  if ( *(_DWORD *)(v6 + 1316) )
  {
    if ( stru_140E366D8.FirstArgument
      && *(_DWORD *)stru_140E366D8.FirstArgument
      && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 2LL) )
    {
      MiStoreLogWriteDisabled(v25, *(unsigned int *)(v6 + 1316), v7);
    }
    --*(_DWORD *)(v6 + 1316);
    return 3221225626LL;
  }
  v31 = *(_QWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 1300) + 22304);
  if ( *(_DWORD *)(v31 + 12) < v7 )
  {
    MiStoreExtendVirtualPagefile(v6, v31);
    v5 = *(unsigned int *)(v31 + 12);
    if ( !(_DWORD)v5 )
    {
      if ( stru_140E366D8.FirstArgument
        && *(_DWORD *)stru_140E366D8.FirstArgument
        && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 2LL) )
      {
        MiStoreLogFullPagefile();
      }
      return 3221225599LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
  {
    if ( (unsigned __int16)KeNumberNodes > 1u && v7 == dword_140FBF21C )
    {
      v26 = (_WORD *)(v6 + 1528);
      v39 = 0;
      KeQueryNodeActiveAffinityEx((unsigned int)(a2 - 1), v6 + 1528, &v39);
      if ( v39 )
      {
        PsQueryProcessAvailableCpus(*(_QWORD *)(*(_QWORD *)(v6 + 256) + 120LL), v6 + 1792, 0LL, &v39);
        if ( (unsigned int)RtlAndAffinityEx((unsigned __int16 *)(v6 + 1528), (unsigned __int16 *)(v6 + 1792), v6 + 1528) )
        {
          KeSetUserAffinityThread((__int64)CurrentThread, (unsigned __int16 *)(v6 + 1528));
          memset_0((void *)(v6 + 1536), 0, 8LL * (unsigned __int16)*v26);
          *v26 = 1;
          KeSetUserAffinityThread((__int64)CurrentThread, (unsigned __int16 *)(v6 + 1528));
        }
      }
    }
  }
  v9 = *(_QWORD *)(a1 + 72);
  if ( !v9 )
  {
    PoolMm = ExAllocatePoolMm(
               64LL,
               8LL * (unsigned int)dword_140FBF21C + 96,
               2001956173,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    *(_QWORD *)(a1 + 72) = PoolMm;
    v9 = PoolMm;
    if ( !PoolMm )
    {
      *(_DWORD *)(v6 + 1316) = 32;
      return 3221225626LL;
    }
  }
  v33 = 0LL;
  v32 = &v33;
  --CurrentThread->KernelApcDisable;
  --CurrentThread->SpecialApcDisable;
  if ( *(_QWORD *)(v6 + 1400) )
  {
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v5, v4);
    v19 = -1073740640;
    goto LABEL_30;
  }
  ++*(_DWORD *)(v6 + 1324);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5, v4);
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
  v28 = MappedSystemVa;
  if ( !MappedSystemVa )
  {
    v19 = -1073741688;
    goto LABEL_27;
  }
  v12 = 0;
  *(_DWORD *)(v9 + 88) = v7 + 1;
  v13 = *(_QWORD *)(a1 + 88) >> 12;
  v37 = *(_DWORD *)(v31 + 88);
  v14 = *(_QWORD *)(v6 + 1520);
  v30 = v14;
  v36 = v13;
  if ( v7 )
  {
    do
    {
      MiStoreWriteModifiedPagePrepare(v27, v12);
      v28 += 4096;
      ++v12;
    }
    while ( v12 < v7 );
    v14 = v30;
  }
  v15 = 0;
  v16 = (v14 - *(_QWORD *)(v6 + 1520)) >> 6;
  if ( (_DWORD)v16 )
  {
    v30 = *(_QWORD *)(v6 + 1520);
    v15 = MiStoreWriteIssue(v27, v16);
  }
  if ( v38 )
    *(_DWORD *)(v6 + 1316) = 32;
  _InterlockedAdd((volatile signed __int32 *)(v9 + 88), -v34);
  if ( v34 == v7 )
  {
    RtlClearBits(*(PRTL_BITMAP *)(v6 + 1512), 0, v7);
    *(_DWORD *)(v9 + 88) = 0;
    v19 = -1073740759;
LABEL_27:
    --CurrentThread->SpecialApcDisable;
    MiStoreDecrementOutstandingWrites(v6);
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v21, v20);
    goto LABEL_30;
  }
  v28 = 0LL;
  if ( v34 )
    MiStoreWriteProcessFailedPages(v27);
  v17 = v35;
  *(_DWORD *)(a1 + 40) |= 0x40u;
  v18 = (unsigned int)(v15 + v17);
  if ( (_DWORD)v18 != v7 || *(_QWORD *)(v31 + 184) )
    MiStoreUpdatePagefileHash(v18, a1, MemoryDescriptorList, v7);
  MiStoreModifiedWriteDereference(a1);
  v19 = 259;
LABEL_30:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
  return v19;
}
