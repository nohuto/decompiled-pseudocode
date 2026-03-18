/*
 * XREFs of AcpiEvaluateBiosMethodsOnPciRootBusOnResume @ 0x1400498D8
 * Callers:
 *     PciRootBusBiosMethodDispatcherOnResume @ 0x140049850 (PciRootBusBiosMethodDispatcherOnResume.c)
 *     PciRootBusBiosMethodDispatcherOnResumeWorker @ 0x140065A20 (PciRootBusBiosMethodDispatcherOnResumeWorker.c)
 * Callees:
 *     AcpiEvaluateOscMethodOnPciRootBus @ 0x140048A6C (AcpiEvaluateOscMethodOnPciRootBus.c)
 *     AcpiEvaluateOscMethodOnCxlBus @ 0x140065908 (AcpiEvaluateOscMethodOnCxlBus.c)
 */

__int64 __fastcall AcpiEvaluateBiosMethodsOnPciRootBusOnResume(__int64 a1, __int64 a2, int a3)
{
  __int16 v3; // ax

  v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), 0, 0);
  if ( *(_DWORD *)(a1 + 244) == 5 )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 1008), 0x35u) && (v3 & 0x800) != 0 )
    {
      AcpiEvaluateOscMethodOnCxlBus(a1, a1 + 304);
    }
    else if ( (v3 & 8) != 0 )
    {
      AcpiEvaluateOscMethodOnPciRootBus(a1, 0, a3, (_DWORD *)(a1 + 304), (int *)(a1 + 304));
    }
  }
  return 0LL;
}
