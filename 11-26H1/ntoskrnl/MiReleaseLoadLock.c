/*
 * XREFs of MiReleaseLoadLock @ 0x1404A4C00
 * Callers:
 *     MmReleaseLoadLock @ 0x1404A4B70 (MmReleaseLoadLock.c)
 *     MmReleaseLoadLockShared @ 0x1404A4BD8 (MmReleaseLoadLockShared.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall MiReleaseLoadLock(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  bool v6; // zf

  --*(_WORD *)(a1 + 486);
  if ( a2 || *(_QWORD *)&stru_140E2D150.SavedApcStateFill[40] == a1 )
  {
    if ( !--*(_DWORD *)&stru_140E2D150.SchedulerApc.Type )
      *(_QWORD *)&stru_140E2D150.SavedApcStateFill[40] = 0LL;
  }
  else
  {
    --*(_DWORD *)(a1 + 1456);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v6 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
  if ( v6 && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v4, v3);
  return KeLeaveCriticalRegionThread(a1, v3, v5);
}
