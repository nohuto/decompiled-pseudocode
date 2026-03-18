/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x14027DA30
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiQueryPteCleanup @ 0x1404101DC (MiQueryPteCleanup.c)
 *     MiReturnLockedVadOrNextVa @ 0x14044E7E0 (MiReturnLockedVadOrNextVa.c)
 *     MiCleanCfg @ 0x1404C4044 (MiCleanCfg.c)
 *     MiPrefetchPreallocatePages @ 0x1406F719C (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x140700318 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14070B810 (MiProcessVaContiguityInformation.c)
 *     MiHandleEnclaveFault @ 0x14077BFB4 (MiHandleEnclaveFault.c)
 *     MiHotPatchProcess @ 0x140870248 (MiHotPatchProcess.c)
 *     MiQueryDetach @ 0x140920308 (MiQueryDetach.c)
 *     MmGetImageInformation @ 0x140942C3C (MmGetImageInformation.c)
 *     NtAreMappedFilesTheSame @ 0x140961230 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1409FBE08 (MmGetFileNameForAddress.c)
 *     MiCopyVirtualMemory @ 0x140A22370 (MiCopyVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140A5CF70 (MmFlushVirtualMemory.c)
 *     MiCheckShadowStackOverflow @ 0x140AA2AE0 (MiCheckShadowStackOverflow.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B05F14 (MiFinishPlaceholderVadReplacement.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B64218 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVadShared(ULONG_PTR P)
{
  signed __int32 v2; // eax
  struct _KTHREAD *CurrentThread; // rdi
  BOOL v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)(P + 36));
  if ( v2 == -1 )
    KeBugCheckEx(0x1Au, 0x41203uLL, P, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  v4 = v2 == 0;
  LODWORD(CurrentThread[1].Queue) &= ~0x4000u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(P + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(P + 40));
  KeAbPostRelease(P + 40);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  if ( v4 )
    ExFreePoolWithTag((PVOID)P, 0);
}
