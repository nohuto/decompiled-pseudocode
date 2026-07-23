/*
 * XREFs of HalpHwPerfCntInitSystem @ 0x140BF09A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInitializeUncoreProfiling @ 0x1405992C8 (HalpInitializeUncoreProfiling.c)
 *     HalpPmuArbiterQueryRegistryQuantum @ 0x140784378 (HalpPmuArbiterQueryRegistryQuantum.c)
 *     HalpCompleteInitializeProfiling @ 0x140BF3700 (HalpCompleteInitializeProfiling.c)
 *     HalpInitializeProfiling @ 0x140BF3728 (HalpInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140CB47C8 (HalpInitializePmcCounterSetInfo.c)
 *     HalpInitializePmuArbiter @ 0x140CB48AC (HalpInitializePmuArbiter.c)
 */

__int64 __fastcall HalpHwPerfCntInitSystem(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // edi

  v2 = 0;
  v3 = a2;
  if ( (_DWORD)a1 != 13 )
  {
    if ( (_DWORD)a1 != 17 )
    {
      if ( (_DWORD)a1 != 19 )
      {
        if ( (_DWORD)a1 == 21 )
        {
          HalpInitializeUncoreProfiling(a1, a2);
        }
        else if ( (_DWORD)a1 == 27 )
        {
          HalpPmuArbiterQueryRegistryQuantum();
        }
        return (unsigned int)v2;
      }
      v2 = HalpInitializeProfiling((unsigned int)a2);
      if ( v2 < 0 )
        return (unsigned int)v2;
    }
    HalpCompleteInitializeProfiling();
    return (unsigned int)v2;
  }
  off_140E00A30[0] = (__int64 (__fastcall *)())HalpAllocatePmcCounterSet;
  off_140E00CA0[0] = (__int64 (__fastcall *)())HalpAllocatePmcCounterSetEx;
  off_140E00A40[0] = (__int64 (__fastcall *)())HalpFreePmcCounterSet;
  off_140E00A38[0] = (__int64 (__fastcall *)())HalpCollectPmcCounters;
  off_140E00CA8[0] = (__int64 (__fastcall *)())HalpStartProfileInterruptEx;
  off_140E00CE0[0] = (__int64 (__fastcall *)())HalpRequestPmuAccess;
  off_140E00CF0[0] = HalpReleasePmuAccessRequest;
  HalpInitializePmcCounterSetInfo();
  v2 = HalpInitializeProfiling(v3);
  if ( v2 >= 0 )
  {
    HalpPerfInterruptHandlerRegistrationLock = 0LL;
    HalpInitializePmuArbiter();
  }
  return (unsigned int)v2;
}
