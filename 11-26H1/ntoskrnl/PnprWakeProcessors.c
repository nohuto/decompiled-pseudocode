/*
 * XREFs of PnprWakeProcessors @ 0x140BF8DAC
 * Callers:
 *     PnprEndMirroring @ 0x140BF7670 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140BF7744 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     KeResumeClockTimerSafe @ 0x1405F0A60 (KeResumeClockTimerSafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprGetMillisecondCounter @ 0x140BF76E4 (PnprGetMillisecondCounter.c)
 *     KeRestoreMtrrBroadcast @ 0x140BFB2B0 (KeRestoreMtrrBroadcast.c)
 */

__int64 PnprWakeProcessors()
{
  __int64 v0; // rbx
  unsigned int MillisecondCounter; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), 0LL);
    v0 = PnprContext;
    *(_DWORD *)(v0 + 33324) = PnprGetMillisecondCounter(0);
    *(_DWORD *)(PnprContext + 200) = 6;
  }
  KeRestoreMtrrBroadcast();
  guard_dispatch_icall_no_overrides(0LL, 0LL);
  KeResumeClockTimerSafe();
  guard_dispatch_icall_no_overrides(2LL, *(_QWORD *)(PnprContext + 33176));
  MillisecondCounter = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_QWORD *)(PnprContext + 33296) = 10000 * (MillisecondCounter - *(_QWORD *)(PnprContext + 33296));
  *(_DWORD *)(v3 + 200) = 7;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 188));
  result = PnprContext;
  v5 = *(unsigned int *)(PnprContext + 64);
  if ( (v5 & 0x20) != 0 )
    return guard_dispatch_icall_no_overrides(v5, v2);
  return result;
}
