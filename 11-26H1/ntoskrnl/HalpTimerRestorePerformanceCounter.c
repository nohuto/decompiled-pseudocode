/*
 * XREFs of HalpTimerRestorePerformanceCounter @ 0x1404DEC68
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1404DED74 (HalpTimerCalibratePerformanceCounter.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

LARGE_INTEGER __fastcall HalpTimerRestorePerformanceCounter(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int Number; // esi
  ULONG_PTR v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  LARGE_INTEGER result; // rax
  ULONG_PTR BugCheckParameter2[3]; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  BugCheckParameter2[0] = HalpPerformanceCounter;
  BugCheckParameter2[1] = HalpAlwaysOnCounter;
  while ( (unsigned int)v2 < 2 )
  {
    v4 = BugCheckParameter2[v2];
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 224) & 0x10000) != 0 )
        v5 = *(_QWORD *)(v4 + 72) + *(_DWORD *)(v4 + 80) * KeGetPcr()->Prcb.Number;
      else
        v5 = *(_QWORD *)(v4 + 72);
      v6 = guard_dispatch_icall_no_overrides(v5, a2);
      if ( v6 < 0 )
      {
        *(_DWORD *)(v4 + 256) = v6;
        *(_QWORD *)(v4 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
        HalpTimerLastProblem = 15;
        *(_DWORD *)(v4 + 252) = 15;
        *(_DWORD *)(v4 + 272) = 2306;
        KeBugCheckEx(0x5Cu, 0x110uLL, v4, 0xFuLL, v6);
      }
      if ( *(_DWORD *)(v4 + 228) != 5 && !Number )
        HalpTimerCalibratePerformanceCounter(v4);
    }
    v2 = (unsigned int)(v2 + 1);
  }
  result = KeQueryPerformanceCounter(0LL);
  HalpTimerEarliestQpcAllowedToConvert = result.QuadPart;
  return result;
}
