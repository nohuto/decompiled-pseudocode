/*
 * XREFs of HalpTimerInitialize @ 0x140579E08
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x140579EAC (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerSelectRoles @ 0x14057A3A8 (HalpTimerSelectRoles.c)
 *     HalpTimerMeasureFrequencies @ 0x1405847E8 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140586D60 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1404DED74 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerSetProblemEx @ 0x1404F8144 (HalpTimerSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerInitialize(ULONG_PTR BugCheckParameter3)
{
  int v2; // edi
  __int64 InternalData; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx

  if ( (*(_DWORD *)(BugCheckParameter3 + 184) & 2) != 0 )
  {
    v2 = 0;
  }
  else
  {
    InternalData = HalpTimerGetInternalData(BugCheckParameter3);
    v5 = guard_dispatch_icall_no_overrides(InternalData, v4);
    v2 = v5;
    if ( v5 >= 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter3 + 224) & 2) != 0 )
      {
        v6 = HalpTimerGetInternalData(BugCheckParameter3);
        _InterlockedExchange64(
          (volatile __int64 *)(BugCheckParameter3 + 200),
          guard_dispatch_icall_no_overrides(v6, v7));
        HalpTimerCalibratePerformanceCounter(BugCheckParameter3, 0LL);
      }
    }
    else
    {
      HalpTimerSetProblemEx(
        BugCheckParameter3,
        15,
        v5,
        (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c",
        0xA1Bu);
    }
  }
  *(_DWORD *)(BugCheckParameter3 + 184) |= (v2 >> 31) + 2;
  return (unsigned int)v2;
}
