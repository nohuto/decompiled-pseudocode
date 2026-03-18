/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x140498C60
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x140498C20 (ExInitializeNPagedLookasideList.c)
 *     RtlInitializeCompression @ 0x140617DD0 (RtlInitializeCompression.c)
 *     VfObjectContextInit @ 0x140C22764 (VfObjectContextInit.c)
 *     ViIovInitialization @ 0x140C2AC6C (ViIovInitialization.c)
 *     VfDeadlockInitialize @ 0x140C36058 (VfDeadlockInitialize.c)
 *     ViDmaInit @ 0x140C397DC (ViDmaInit.c)
 *     VfWdInit @ 0x140C39FB0 (VfWdInit.c)
 *     CcInitializeCacheManager @ 0x140C7F4E8 (CcInitializeCacheManager.c)
 *     FsRtlInitializeLargeMcbs @ 0x140CB8D9C (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140CB8F3C (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeOplockPerf @ 0x140CB90F0 (FsRtlInitializeOplockPerf.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PopInitializeIrpWorkers @ 0x140CD3300 (PopInitializeIrpWorkers.c)
 *     VfInitBootDriversLoaded @ 0x140CDE91C (VfInitBootDriversLoaded.c)
 *     WmipInitializeRegistration @ 0x140CDFEE8 (WmipInitializeRegistration.c)
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403ACC60 (DifObjTrkIsKvEnabledForPlugin.c)
 *     InitializeSListHead @ 0x140499200 (InitializeSListHead.c)
 *     DifObjTrkInsertItem @ 0x14064AED0 (DifObjTrkInsertItem.c)
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
  void ****AllFields; // rcx
  void ***v16; // rax
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
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack);
  if ( a8 )
  {
    *(_WORD *)(a1 + 16) = a7;
    *(_WORD *)(a1 + 18) = -1;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  AllFields = (void ****)ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields;
  v16 = (void ***)(a1 + 64);
  if ( *(struct _KTHREAD **)ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase )
    __fastfail(3u);
  *(_QWORD *)(a1 + 72) = ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields;
  *v16 = &ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase;
  *AllFields = v16;
  ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields = a1 + 64;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack, v14);
  result = DifObjTrkIsKvEnabledForPlugin(48LL);
  if ( result )
    return DifObjTrkInsertItem(v18, a1, 128LL, 0LL);
  return result;
}
