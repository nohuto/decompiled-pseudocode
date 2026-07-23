/*
 * XREFs of HalpTimerReinitializeThisProcessor @ 0x14057A1F0
 * Callers:
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpTimerSetProblemEx @ 0x1404F8144 (HalpTimerSetProblemEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG_PTR *HalpTimerReinitializeThisProcessor()
{
  ULONG_PTR i; // rbx
  ULONG_PTR *result; // rax
  __int64 InternalData; // rax
  __int64 v3; // rdx
  int v4; // r8d
  unsigned int v5; // r10d
  ULONG_PTR BugCheckParameter4; // r8

  for ( i = HalpRegisteredTimers; ; i = *(_QWORD *)i )
  {
    result = &HalpRegisteredTimers;
    if ( (ULONG_PTR *)i == &HalpRegisteredTimers )
      break;
    if ( (*(_DWORD *)(i + 224) & 1) != 0 && (*(_DWORD *)(i + 184) & 5) == 4 )
    {
      InternalData = HalpTimerGetInternalData(i);
      v4 = guard_dispatch_icall_no_overrides(InternalData, v3);
      if ( v4 < 0 )
      {
        HalpTimerSetProblemEx(i, 15, v4, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0xC1Fu);
        KeBugCheckEx(v5 + 77, 0x110uLL, i, v5, BugCheckParameter4);
      }
    }
  }
  return result;
}
