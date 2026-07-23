/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x1404927B0
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x140492770 (ExInitializeNPagedLookasideList.c)
 *     RtlInitializeCompression @ 0x14061AE20 (RtlInitializeCompression.c)
 *     VfObjectContextInit @ 0x140C28774 (VfObjectContextInit.c)
 *     ViIovInitialization @ 0x140C30C7C (ViIovInitialization.c)
 *     VfDeadlockInitialize @ 0x140C3C068 (VfDeadlockInitialize.c)
 *     ViDmaInit @ 0x140C3F7EC (ViDmaInit.c)
 *     VfWdInit @ 0x140C3FFC0 (VfWdInit.c)
 *     CcInitializeCacheManager @ 0x140C854E8 (CcInitializeCacheManager.c)
 *     FsRtlInitializeLargeMcbs @ 0x140CBEDE0 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140CBEF80 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeOplockPerf @ 0x140CBF134 (FsRtlInitializeOplockPerf.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     PopInitializeIrpWorkers @ 0x140CD94A0 (PopInitializeIrpWorkers.c)
 *     VfInitBootDriversLoaded @ 0x140CE4CB4 (VfInitBootDriversLoaded.c)
 *     WmipInitializeRegistration @ 0x140CE6280 (WmipInitializeRegistration.c)
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
 */

char __fastcall ExInitializeNPagedLookasideListInternal(
        __int64 a1,
        PVOID (__fastcall *a2)(int a1, SIZE_T a2, ULONG a3),
        void (__stdcall *a3)(PVOID P),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  PVOID (__fastcall *v12)(int, SIZE_T, ULONG); // rax
  void (__stdcall *v13)(PVOID); // rax
  KIRQL v14; // dl
  _KTHREAD_WPS_FEEDBACK ****v15; // rcx
  _KTHREAD_WPS_FEEDBACK ***v16; // rax
  char result; // al
  unsigned int v18; // r10d

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  v12 = ExAllocatePoolZero;
  if ( a2 )
    v12 = a2;
  *(_WORD *)(a1 + 18) = 256;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 48) = v12;
  v13 = ExFreePool;
  if ( a3 )
    v13 = a3;
  *(_QWORD *)(a1 + 56) = v13;
  *(_QWORD *)(a1 + 80) = 0LL;
  v14 = KeAcquireSpinLockRaiseToDpc(&ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields);
  if ( a8 )
  {
    *(_WORD *)(a1 + 16) = a7;
    *(_WORD *)(a1 + 18) = -1;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v15 = (_KTHREAD_WPS_FEEDBACK ****)ExSaPageGroupDescriptorArrayLock.Spare35[0];
  v16 = (_KTHREAD_WPS_FEEDBACK ***)(a1 + 64);
  if ( *(struct _KTHREAD **)ExSaPageGroupDescriptorArrayLock.Spare35[0] != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.WpsFeedback )
    __fastfail(3u);
  *(_QWORD *)(a1 + 72) = ExSaPageGroupDescriptorArrayLock.Spare35[0];
  *v16 = &ExSaPageGroupDescriptorArrayLock.WpsFeedback;
  *v15 = v16;
  ExSaPageGroupDescriptorArrayLock.Spare35[0] = a1 + 64;
  KeReleaseSpinLock(&ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields, v14);
  result = DifObjTrkIsKvEnabledForPlugin(48LL);
  if ( result )
    return DifObjTrkInsertItem(v18, a1, 128LL, 0LL);
  return result;
}
