/*
 * XREFs of MiRemoveFromSystemSpace @ 0x140489AA8
 * Callers:
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     EtwpCoverageEnsureContext @ 0x140778B18 (EtwpCoverageEnsureContext.c)
 *     IopDeleteIoRing @ 0x14079A940 (IopDeleteIoRing.c)
 *     PspDeleteServerSiloGlobals @ 0x1407F499C (PspDeleteServerSiloGlobals.c)
 *     RtlNlsDeleteState @ 0x140807834 (RtlNlsDeleteState.c)
 *     EtwpCoverageSamplerCleanup @ 0x140837324 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140837544 (EtwpCoverageSamplerSetBloomFilter.c)
 *     ExInitializeLeapSecondData @ 0x14083B934 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140849B30 (NtMapCMFModule.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     MiValidateSectionUnmap @ 0x1408817F8 (MiValidateSectionUnmap.c)
 *     AlpcViewDestroyProcedure @ 0x140992BD0 (AlpcViewDestroyProcedure.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14099A770 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiRelocateCleanup @ 0x14099B9E4 (MiRelocateCleanup.c)
 *     MiRelocateValidateFixups @ 0x14099C24C (MiRelocateValidateFixups.c)
 *     MiParseComAndCetHeaders @ 0x14099D24C (MiParseComAndCetHeaders.c)
 *     KsepSdbUnmapFromMemory @ 0x1409D5E7C (KsepSdbUnmapFromMemory.c)
 *     KsepSdbMapToMemory @ 0x1409D65BC (KsepSdbMapToMemory.c)
 *     CmFcpUnmapSection @ 0x140AC0FB8 (CmFcpUnmapSection.c)
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 *     MmUnmapViewInSystemSpace @ 0x140ADFA00 (MmUnmapViewInSystemSpace.c)
 *     PspSchedulerSharedDataRegionDelete @ 0x140AEDE30 (PspSchedulerSharedDataRegionDelete.c)
 *     MiUnmapImageInSystemSpace @ 0x140B1DACC (MiUnmapImageInSystemSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiManageSubsectionView @ 0x14027D1E0 (MiManageSubsectionView.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiRemoveMappedPtes @ 0x140341C78 (MiRemoveMappedPtes.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiUnmapLargePages @ 0x1405053F4 (MiUnmapLargePages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiDereferencePerSessionProtos @ 0x140A9AEB4 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
    v13 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E34D88, 0LL, 0LL, v2);
    v16 = _interlockedbittestandset64(&stru_140E34D88.Header.Lock, 0LL);
    v17 = v13;
    if ( v16 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E34D88, v13, (__int64)&stru_140E34D88);
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
    Flink = stru_140E34D88.Header.WaitListHead.Flink;
    v19 = v18;
    if ( !stru_140E34D88.Header.WaitListHead.Flink )
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
    --LODWORD(stru_140E34D88.Header.WaitListHead.Blink);
    RtlAvlRemoveNode((unsigned __int64 *)&stru_140E34D88.Header.WaitListHead, (__int64)Flink);
    MiUnlockVadTree(6, v19);
    v11 = Flink[4].Flink;
    v12 = Flink[3].Flink->Flink;
    v26[0] = v12;
    MiManageSubsectionView(v26, &Flink[4].Blink, 4, v21);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E34D88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E34D88.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E34D88);
    v24 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v24 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
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
    MiRemoveMappedPtes((__int64)Flink, (__int64)&unk_140E370C0);
  if ( ((__int64)Flink[3].Blink & 0x20) != 0 )
    MiDereferencePerSessionProtos(v12, 0xFFFFFFFFLL);
  v25 = (((unsigned __int64)Flink[2].Flink >> 12) + 15) & 0xFFFFFFF0;
  if ( ((__int64)Flink[3].Blink & 0xC) == 0xC )
    MiReleasePtes((__int64)&unk_140E34B60, v4, v25);
  else
    MiUnmapLargePages((unsigned __int64)Flink[5].Blink & 0xFFFFFFFFFFFFF000uLL, v25 << 12, 8LL);
  ExFreePoolWithTag(Flink, 0);
}
