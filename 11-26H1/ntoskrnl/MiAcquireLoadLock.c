/*
 * XREFs of MiAcquireLoadLock @ 0x1404A507C
 * Callers:
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     MiAcquireLoadLockShared @ 0x1404A5064 (MiAcquireLoadLockShared.c)
 *     MiEnumerateSystemImages @ 0x1404DE724 (MiEnumerateSystemImages.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 *     MiLockLoadedDataTableEntry @ 0x140701E40 (MiLockLoadedDataTableEntry.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140B32F4C (MiProcessKernelCfgAddressTakenImports.c)
 *     MiReloadBootLoadedDrivers @ 0x140D07090 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
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
    if ( *(struct _KTHREAD **)&stru_140E2D2D0.SavedApcStateFill[40] != CurrentThread )
    {
      ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
      ++LODWORD(CurrentThread[1].Teb);
      goto LABEL_7;
    }
    v2 = 1;
  }
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  if ( !*(_DWORD *)&stru_140E2D2D0.SchedulerApc.Type )
    *(_QWORD *)&stru_140E2D2D0.SavedApcStateFill[40] = CurrentThread;
  ++*(_DWORD *)&stru_140E2D2D0.SchedulerApc.Type;
LABEL_7:
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4, v3);
  return v2;
}
