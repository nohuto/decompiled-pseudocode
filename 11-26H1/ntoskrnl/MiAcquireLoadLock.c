/*
 * XREFs of MiAcquireLoadLock @ 0x1404AB9EC
 * Callers:
 *     MmAcquireLoadLock @ 0x1404AB9B0 (MmAcquireLoadLock.c)
 *     MiAcquireLoadLockShared @ 0x1404AB9D4 (MiAcquireLoadLockShared.c)
 *     MiEnumerateSystemImages @ 0x1404E5184 (MiEnumerateSystemImages.c)
 *     MiProtectDriverSectionPte @ 0x1406E5D50 (MiProtectDriverSectionPte.c)
 *     MiLockLoadedDataTableEntry @ 0x1406FD170 (MiLockLoadedDataTableEntry.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140B30D4C (MiProcessKernelCfgAddressTakenImports.c)
 *     MiReloadBootLoadedDrivers @ 0x140D00CF0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall MiAcquireLoadLock(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // zf

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
  {
    if ( *(struct _KTHREAD **)&stru_140E2D150.SavedApcStateFill[40] != CurrentThread )
    {
      ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
      ++LODWORD(CurrentThread[1].Teb);
      goto LABEL_7;
    }
    v2 = 1;
  }
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  if ( !*(_DWORD *)&stru_140E2D150.SchedulerApc.Type )
    *(_QWORD *)&stru_140E2D150.SavedApcStateFill[40] = CurrentThread;
  ++*(_DWORD *)&stru_140E2D150.SchedulerApc.Type;
LABEL_7:
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4, v3);
  return v2;
}
