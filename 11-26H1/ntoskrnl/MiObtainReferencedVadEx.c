/*
 * XREFs of MiObtainReferencedVadEx @ 0x1402B1F20
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 *     MiProbeAndLockPrepare @ 0x1402C74B0 (MiProbeAndLockPrepare.c)
 *     MiFaultTrimBehind @ 0x14043AA6C (MiFaultTrimBehind.c)
 *     MmUpdateUserShadowStackValue @ 0x1404DA2DC (MmUpdateUserShadowStackValue.c)
 *     MiQueryImageExtensionInformation @ 0x1404DF9B0 (MiQueryImageExtensionInformation.c)
 *     MiPrefetchPreallocatePages @ 0x1406FBE0C (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x140704FE8 (MmGetEnclaveModuleList.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MmSecureVirtualMemoryEx @ 0x14077A5F0 (MmSecureVirtualMemoryEx.c)
 *     MiHandleEnclaveFault @ 0x14077EB34 (MiHandleEnclaveFault.c)
 *     MiGetVadForHotPatchInProgress @ 0x1408763E8 (MiGetVadForHotPatchInProgress.c)
 *     MmCommitHotPatchTable @ 0x14087AD88 (MmCommitHotPatchTable.c)
 *     MmPrepareImagePagesForHotPatch @ 0x14087B034 (MmPrepareImagePagesForHotPatch.c)
 *     NtTerminateEnclave @ 0x14087D760 (NtTerminateEnclave.c)
 *     MiScrubProcessLargePage @ 0x1408842B8 (MiScrubProcessLargePage.c)
 *     MmGetFileNameForAddress @ 0x140920A08 (MmGetFileNameForAddress.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409950D0 (MiUnmapViewOfSectionPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A027C4 (MiUnmapLockedPagesInUserSpace.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140A02FF8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MmDeleteTeb @ 0x140A048C4 (MmDeleteTeb.c)
 *     MmFreeVirtualMemory @ 0x140A04CB0 (MmFreeVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140A06AE0 (NtAreMappedFilesTheSame.c)
 *     MiCopyVmLockVad @ 0x140A2BC40 (MiCopyVmLockVad.c)
 *     MmGetImageInformation @ 0x140A35D4C (MmGetImageInformation.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 *     MiPrepareWriteWatchPacket @ 0x140A929A0 (MiPrepareWriteWatchPacket.c)
 *     MiQuerySingleLoadedPatch @ 0x140A9D93C (MiQuerySingleLoadedPatch.c)
 *     MiCfgMarkValidEntries @ 0x140AA27E4 (MiCfgMarkValidEntries.c)
 *     MiCheckShadowStackOverflow @ 0x140AA45B0 (MiCheckShadowStackOverflow.c)
 *     NtResetWriteWatch @ 0x140AB8910 (NtResetWriteWatch.c)
 *     MiInitializeEnclave @ 0x140AB8BBC (MiInitializeEnclave.c)
 *     MmStoreFreeVirtualMemory @ 0x140AB9EA0 (MmStoreFreeVirtualMemory.c)
 *     MmRotatePhysicalView @ 0x140AEF280 (MmRotatePhysicalView.c)
 *     NtLoadEnclaveData @ 0x140AF16E0 (NtLoadEnclaveData.c)
 *     MiReferenceCfgVad @ 0x140AF33F0 (MiReferenceCfgVad.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140B2CB38 (MmSelectVsmEnclaveByAddress.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B672B8 (MiQueryMemoryPhysicalContiguity.c)
 *     MiProcessVaRangesInfoClass @ 0x140B6E518 (MiProcessVaRangesInfoClass.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C07A84 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiLockVadShared @ 0x14027DE40 (MiLockVadShared.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVadShared @ 0x14027E1C0 (MiUnlockVadShared.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiTryLockVad @ 0x1404CF304 (MiTryLockVad.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiWaitForVadDeletion @ 0x140533514 (MiWaitForVadDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiObtainReferencedVadEx(unsigned __int64 a1, __int64 a2, int *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v6; // r15
  _KPROCESS *Process; // r13
  _DWORD *v8; // rbx
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  signed __int32 v12; // edx
  _KPROCESS *v13; // r9
  ULONG_PTR Flink; // rbx
  unsigned __int64 v15; // r8
  int v16; // eax
  volatile signed __int32 *v17; // r8
  unsigned __int64 v19; // r12
  int v20; // r15d
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // r8
  struct _KLOCK_ENTRIES *v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v8 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v8);
    v11 = *v8 & 0x7FFFFFFF;
    v10 = _InterlockedCompareExchange(v8, v11 + 1, v11);
    if ( v11 != v10 )
    {
      while ( v10 >= 0 )
      {
        v12 = v10;
        v10 = _InterlockedCompareExchange(v8, v10 + 1, v10);
        if ( v10 == v12 )
          goto LABEL_13;
      }
      ExpWaitForSpinLockSharedAndAcquire(v8, CurrentIrql, (__int64)a3);
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v8, CurrentIrql);
  }
LABEL_13:
  v13 = KeGetCurrentThread()->ApcState.Process;
  Flink = (ULONG_PTR)v13[3].Header.WaitListHead.Flink;
  if ( !Flink )
    goto LABEL_65;
  v15 = a1 >> 12;
  if ( a1 >> 12 < (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32))
    || v15 > (*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
  {
    Flink = *(_QWORD *)&v13[3].Header.Lock;
    if ( Flink )
    {
      do
      {
        if ( v15 <= (*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
        {
          if ( v15 >= (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32)) )
            break;
          Flink = *(_QWORD *)Flink;
        }
        else
        {
          Flink = *(_QWORD *)(Flink + 8);
        }
      }
      while ( Flink );
      if ( Flink )
      {
        v13[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Flink;
        goto LABEL_24;
      }
    }
LABEL_65:
    v16 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v16 = -1073741664;
    goto LABEL_67;
  }
LABEL_24:
  if ( (v6 & 9) == 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v16 = -1073741558;
    goto LABEL_67;
  }
  if ( (v6 & 8) != 0 )
  {
    if ( !(unsigned int)MiTryLockVad(CurrentThread, Flink) )
    {
      v16 = -1073740758;
      goto LABEL_67;
    }
    if ( (*(_DWORD *)(Flink + 48) & 1) != 0 )
    {
      MiUnlockVad((__int64)CurrentThread, Flink);
      v16 = -1073741431;
LABEL_67:
      *a3 = v16;
      MiUnlockVadTree(0LL, CurrentIrql);
      v23 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v23
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v28, v27);
      }
      return 0LL;
    }
  }
  if ( !_InterlockedIncrement((volatile signed __int32 *)(Flink + 36)) )
    KeBugCheckEx(0x1Au, 0x41203uLL, Flink, 0LL, 0LL);
  v17 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v17, 0xBFFFFFFF);
      _InterlockedDecrement(v17);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v17, retaddr);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v17, 0xBFFFFFFF);
      _InterlockedDecrement(v17);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v17, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( (v6 & 8) != 0 )
    return Flink;
  v19 = a1 >> 12;
  v20 = v6 & 2;
  if ( v20 )
    MiLockVadShared((__int64)CurrentThread, Flink, (__int64)v17, (struct _KLOCK_ENTRIES *)v13);
  else
    MiLockVad((__int64)CurrentThread, Flink, (__int64)v17, (struct _KLOCK_ENTRIES *)v13);
  v23 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v23 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v22, v21);
  if ( (*(_DWORD *)(Flink + 48) & 1) != 0 )
  {
    if ( v20 )
    {
      MiUnlockVadShared((__int64)CurrentThread, Flink);
      MiLockVad((__int64)CurrentThread, Flink, v24, v25);
    }
    MiWaitForVadDeletion(Flink);
    MiUnlockAndDereferenceVad((volatile signed __int32 *)Flink);
    v26 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v26 = -1073741664;
    *a3 = v26;
    return 0LL;
  }
  if ( v19 >= (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32))
    && v19 <= (*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
  {
    return Flink;
  }
  if ( v20 )
    MiUnlockAndDereferenceVadShared(Flink);
  else
    MiUnlockAndDereferenceVad((volatile signed __int32 *)Flink);
  *a3 = -1073741664;
  return 0LL;
}
