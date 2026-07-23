/*
 * XREFs of KeConfigureDynamicMemory @ 0x1405EE72C
 * Callers:
 *     MiAddPhysicalMemory @ 0x14086B3FC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     VslConfigureDynamicMemory @ 0x1405C5348 (VslConfigureDynamicMemory.c)
 *     HvlConfigureDynamicMemory @ 0x14072309C (HvlConfigureDynamicMemory.c)
 */

__int64 __fastcall KeConfigureDynamicMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // edi

  if ( (a3 & 0xFFFFFFFD) == 0
    && (ExAcquireFastMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.KcsanThread), a3 == 2)
    || ((a3 - 4) & 0xFFFFFFFB) == 0 )
  {
    v6 = VslConfigureDynamicMemory(a1, a2, a3);
    if ( v6 >= 0 )
    {
      v6 = HvlConfigureDynamicMemory(a1, a2, a3);
      if ( v6 < 0 )
      {
        if ( a3 == 2 )
          VslConfigureDynamicMemory(a1, a2, 8u);
        goto LABEL_13;
      }
      goto LABEL_12;
    }
LABEL_13:
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.KcsanThread);
    return (unsigned int)v6;
  }
  v6 = HvlConfigureDynamicMemory(a1, a2, a3);
  if ( v6 < 0 )
    goto LABEL_13;
  v6 = VslConfigureDynamicMemory(a1, a2, a3);
  if ( v6 < 0 )
  {
    if ( !a3 )
      HvlConfigureDynamicMemory(a1, a2, 8LL);
    goto LABEL_13;
  }
LABEL_12:
  if ( (a3 & 0xFFFFFFFD) != 0 )
    goto LABEL_13;
  return (unsigned int)v6;
}
