/*
 * XREFs of MiRemoveFromSystemSpace @ 0x14048FFF8
 * Callers:
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     EtwpCoverageEnsureContext @ 0x140775C70 (EtwpCoverageEnsureContext.c)
 *     IopDeleteIoRing @ 0x140797E10 (IopDeleteIoRing.c)
 *     PspDeleteServerSiloGlobals @ 0x1407EEE3C (PspDeleteServerSiloGlobals.c)
 *     RtlNlsDeleteState @ 0x140801D94 (RtlNlsDeleteState.c)
 *     EtwpCoverageSamplerCleanup @ 0x1408310E4 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140831304 (EtwpCoverageSamplerSetBloomFilter.c)
 *     ExInitializeLeapSecondData @ 0x1408356F4 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1408446A0 (NtMapCMFModule.c)
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 *     MiOpenHotPatchFile @ 0x140873028 (MiOpenHotPatchFile.c)
 *     MiValidateSectionUnmap @ 0x14087B3F8 (MiValidateSectionUnmap.c)
 *     AlpcViewDestroyProcedure @ 0x1409C1BF0 (AlpcViewDestroyProcedure.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409C9790 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiRelocateCleanup @ 0x1409CAA04 (MiRelocateCleanup.c)
 *     MiRelocateValidateFixups @ 0x1409CB26C (MiRelocateValidateFixups.c)
 *     MiParseComAndCetHeaders @ 0x1409CC26C (MiParseComAndCetHeaders.c)
 *     KsepSdbMapToMemory @ 0x1409E6578 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x1409E6EA4 (KsepSdbUnmapFromMemory.c)
 *     CmFcpUnmapSection @ 0x140ABEF18 (CmFcpUnmapSection.c)
 *     MiGetSystemAddressForImage @ 0x140AC6DF4 (MiGetSystemAddressForImage.c)
 *     MmUnmapViewInSystemSpace @ 0x140AE2510 (MmUnmapViewInSystemSpace.c)
 *     PspSchedulerSharedDataRegionDelete @ 0x140AEB060 (PspSchedulerSharedDataRegionDelete.c)
 *     MiUnmapImageInSystemSpace @ 0x140B1B8C8 (MiUnmapImageInSystemSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     MiManageSubsectionView @ 0x14027DC70 (MiManageSubsectionView.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiUnlockVadTree @ 0x140326440 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403265D0 (MiLockVadTree.c)
 *     MiRemoveMappedPtes @ 0x14033FBF8 (MiRemoveMappedPtes.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiUnmapLargePages @ 0x14050B984 (MiUnmapLargePages.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiDereferencePerSessionProtos @ 0x140A96D34 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveFromSystemSpace(ULONG_PTR BugCheckParameter1)
{
  struct _KLOCK_ENTRIES *v2; // r9
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v4; // r14
  ULONG *v5; // rsi
  KIRQL v6; // al
  struct _LIST_ENTRY *Flink; // rbx
  KIRQL v8; // r12
  unsigned __int64 v9; // r8
  volatile LONG *v10; // rcx
  struct _LIST_ENTRY *v11; // rsi
  struct _LIST_ENTRY *v12; // rdi
  AutoBoost *v13; // rax
  volatile unsigned __int8 *v14; // rdx
  __int64 v15; // r8
  signed __int8 v16; // cf
  AutoBoost *v17; // rbx
  KIRQL v18; // al
  KIRQL v19; // si
  unsigned __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rdx
  _QWORD v26[20]; // [rsp+30h] [rbp-C8h] BYREF

  memset_0(v26, 0, sizeof(v26));
  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (BugCheckParameter1 & 0x3FFFFFFF) != 0 )
    goto LABEL_15;
  v5 = &MiState + 4 * (unsigned __int8)(BugCheckParameter1 >> 30);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v5 + 8755);
  Flink = (struct _LIST_ENTRY *)*((_QWORD *)v5 + 4376);
  v8 = v6;
  if ( Flink )
  {
    do
    {
      v9 = (unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL;
      if ( (struct _LIST_ENTRY *)BugCheckParameter1 >= (struct _LIST_ENTRY *)((char *)Flink[2].Flink + v9) )
      {
        Flink = Flink->Blink;
      }
      else
      {
        if ( BugCheckParameter1 >= v9 )
          break;
        Flink = Flink->Flink;
      }
    }
    while ( Flink );
    if ( Flink )
    {
      RtlAvlRemoveNode((unsigned __int64 *)v5 + 4376, (__int64)Flink);
      --v5[8754];
    }
  }
  v10 = (volatile LONG *)(v5 + 8755);
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  else
    ExReleaseSpinLockExclusive(v10, v8);
  if ( !Flink )
  {
LABEL_15:
    --CurrentThread->SpecialApcDisable;
    v13 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E34C08, 0LL, 0LL, v2);
    v16 = _interlockedbittestandset64(&stru_140E34C08.Header.Lock, 0LL);
    v17 = v13;
    if ( v16 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E34C08, v13, (__int64)&stru_140E34C08);
    if ( v17 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v14) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v17 + 33), v14, 1);
      }
      else
      {
        *((_BYTE *)v17 + 10) = 1;
      }
    }
    v18 = MiLockVadTree(6u, (__int64)v14, v15);
    Flink = stru_140E34C08.Header.WaitListHead.Flink;
    v19 = v18;
    if ( !stru_140E34C08.Header.WaitListHead.Flink )
      goto LABEL_45;
    do
    {
      v20 = (unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL;
      if ( (struct _LIST_ENTRY *)BugCheckParameter1 >= (struct _LIST_ENTRY *)((char *)Flink[2].Flink + v20) )
      {
        Flink = Flink->Blink;
      }
      else
      {
        if ( BugCheckParameter1 >= v20 )
          break;
        Flink = Flink->Flink;
      }
    }
    while ( Flink );
    if ( !Flink )
LABEL_45:
      KeBugCheckEx(0xD7u, BugCheckParameter1, 1uLL, 0LL, 0LL);
    --LODWORD(stru_140E34C08.Header.WaitListHead.Blink);
    RtlAvlRemoveNode((unsigned __int64 *)&stru_140E34C08.Header.WaitListHead, (__int64)Flink);
    MiUnlockVadTree(6, v19);
    v11 = Flink[4].Flink;
    v12 = Flink[3].Flink->Flink;
    v26[0] = v12;
    MiManageSubsectionView(v26, &Flink[4].Blink, 4, v21);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E34C08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E34C08.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E34C08);
    v24 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v24 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v23, v22);
  }
  else
  {
    v11 = Flink[4].Flink;
    v12 = Flink[3].Flink->Flink;
  }
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x63536D4Du);
  if ( ((__int64)Flink[3].Blink & 1) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&v12[5].Blink + 1);
  if ( ((__int64)Flink[3].Blink & 0x10) != 0 )
    MiRemoveMappedPtes((__int64)Flink, (__int64)&unk_140E36F40);
  if ( ((__int64)Flink[3].Blink & 0x20) != 0 )
    MiDereferencePerSessionProtos(v12, 0xFFFFFFFFLL);
  v25 = (((unsigned __int64)Flink[2].Flink >> 12) + 15) & 0xFFFFFFF0;
  if ( ((__int64)Flink[3].Blink & 0xC) == 0xC )
    MiReleasePtes((__int64)&unk_140E349E0, v4, v25);
  else
    MiUnmapLargePages((unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL, v25 << 12, 8LL);
  ExFreePoolWithTag(Flink, 0);
}
