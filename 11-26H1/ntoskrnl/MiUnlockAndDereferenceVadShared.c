/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x14027CFA0
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiQueryPteCleanup @ 0x14040F8FC (MiQueryPteCleanup.c)
 *     MiReturnLockedVadOrNextVa @ 0x140446910 (MiReturnLockedVadOrNextVa.c)
 *     MiCleanCfg @ 0x1404BD924 (MiCleanCfg.c)
 *     MiPrefetchPreallocatePages @ 0x1406FBE0C (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x140704FE8 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MiHandleEnclaveFault @ 0x14077EB34 (MiHandleEnclaveFault.c)
 *     MiHotPatchProcess @ 0x1408765A8 (MiHotPatchProcess.c)
 *     MmGetFileNameForAddress @ 0x140920A08 (MmGetFileNameForAddress.c)
 *     MiQueryDetach @ 0x140923A4C (MiQueryDetach.c)
 *     NtAreMappedFilesTheSame @ 0x140A06AE0 (NtAreMappedFilesTheSame.c)
 *     MiCopyVirtualMemory @ 0x140A2B990 (MiCopyVirtualMemory.c)
 *     MmGetImageInformation @ 0x140A35D4C (MmGetImageInformation.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 *     MiCheckShadowStackOverflow @ 0x140AA45B0 (MiCheckShadowStackOverflow.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B08044 (MiFinishPlaceholderVadReplacement.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B672B8 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  if ( v9 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  if ( v4 )
    ExFreePoolWithTag((PVOID)P, 0);
}
