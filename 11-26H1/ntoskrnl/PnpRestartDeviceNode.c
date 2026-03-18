/*
 * XREFs of PnpRestartDeviceNode @ 0x140B218FC
 * Callers:
 *     PiProfileUpdateDeviceTreeCallback @ 0x1407ACF70 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1407B87D4 (PiProcessQueryRemoveNoFdo.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PiRestartRemovalRelations @ 0x140B39AAC (PiRestartRemovalRelations.c)
 *     PiRestartDevice @ 0x140B3AFB0 (PiRestartDevice.c)
 *     PiProcessClearDeviceProblem @ 0x140B419C4 (PiProcessClearDeviceProblem.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExConvertExclusiveToSharedLite @ 0x140431900 (ExConvertExclusiveToSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14043CCB0 (ExIsResourceAcquiredSharedLite.c)
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     PipClearDevNodeFlags @ 0x14090E080 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x14090F028 (PipClearDevNodeUserFlags.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRestartDeviceNode(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  ULONG IsResourceAcquiredSharedLite; // esi
  ULONG v5; // ebp
  int v6; // eax
  void *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
  v5 = IsResourceAcquiredSharedLite;
  if ( IsResourceAcquiredSharedLite )
  {
    do
    {
      ExReleaseResourceLite(&IopDeviceTreeLock);
      --v5;
    }
    while ( v5 );
    do
    {
      ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
      --IsResourceAcquiredSharedLite;
    }
    while ( IsResourceAcquiredSharedLite );
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x10) != 0 )
  {
    PipClearDevNodeUserFlags(a1, 5);
    PipClearDevNodeFlags(a1, 1081344);
    *(_DWORD *)(a1 + 704) &= 0xFFFE3C03;
    v6 = *(_DWORD *)(a1 + 300);
    *(_DWORD *)(a1 + 296) = 0;
    *(_DWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    if ( v6 != 769 && v6 != 770 )
    {
      PipClearDevNodeFlags(a1, 2082475264);
      if ( *(_WORD *)(a1 + 56) )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
        *(_DWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v7 = *(void **)(a1 + 440);
      if ( v7 )
      {
        ExFreePoolWithTag(v7, 0);
        *(_QWORD *)(a1 + 440) = 0LL;
        PipClearDevNodeFlags(a1, 512);
      }
      KeReleaseGuardedMutex(&PiResourceListLock);
    }
    *(_DWORD *)(a1 + 660) = -1;
    PipSetDevNodeState(a1, 769);
  }
  else
  {
    v3 = -1073741823;
  }
  ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  return v3;
}
