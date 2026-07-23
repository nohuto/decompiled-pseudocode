/*
 * XREFs of MiReleaseLoadLock @ 0x14049E290
 * Callers:
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmReleaseLoadLockShared @ 0x14049E268 (MmReleaseLoadLockShared.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall MiReleaseLoadLock(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // zf

  --*(_WORD *)(a1 + 486);
  if ( a2 || *(_QWORD *)&stru_140E2D2D0.SavedApcStateFill[40] == a1 )
  {
    if ( !--*(_DWORD *)&stru_140E2D2D0.SchedulerApc.Type )
      *(_QWORD *)&stru_140E2D2D0.SavedApcStateFill[40] = 0LL;
  }
  else
  {
    --*(_DWORD *)(a1 + 1456);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v5 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
  if ( v5 && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v4, v3);
  return KeLeaveCriticalRegionThread(a1);
}
