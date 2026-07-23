/*
 * XREFs of HalpTimerSchedulePeriodicQueries @ 0x14057A288
 * Callers:
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 *     HalpTscFallbackToPlatformSource @ 0x140586204 (HalpTscFallbackToPlatformSource.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 */

__int64 HalpTimerSchedulePeriodicQueries()
{
  ULONG_PTR v0; // rbx
  ULONG_PTR v1; // rdi
  NTSTATUS v2; // eax
  __int64 v3; // r9
  ULONGLONG v4; // r11
  ULONGLONG v5; // r10
  ULONGLONG v6; // rax
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF

  v0 = HalpAlwaysOnCounter;
  v1 = HalpPerformanceCounter;
  pullResult = 0LL;
  if ( HalpAlwaysOnCounter )
    v0 = -(__int64)(*(_DWORD *)(HalpAlwaysOnCounter + 220) < 0x40u) & HalpAlwaysOnCounter;
  KeQueryPerformanceCounter(0LL);
  HalpTimerLastDpc = MEMORY[0xFFFFF78000000014];
  v2 = RtlULongLongMult(1LL << *(_DWORD *)(v1 + 220), 0xFAuLL, &pullResult);
  LODWORD(v4) = 120000;
  if ( v2 < 0 )
    v5 = 120000LL;
  else
    v5 = pullResult / *(_QWORD *)(v1 + 192);
  pullResult = v5;
  if ( v0 )
  {
    v6 = RtlULongLongMult(v3 << *(_DWORD *)(v0 + 220), 0xFAuLL, &pullResult) < 0
       ? v4
       : pullResult / *(_QWORD *)(v0 + 192);
    if ( v6 < v5 )
      v5 = v6;
  }
  if ( v5 - 1 > 0x1D4BF )
    LODWORD(v5) = v4;
  return KiSetTimerEx((__int64)&HalpTimerPeriodicTimer, -10000LL * (int)v5, v5, 0, (__int64)&HalpTimerDpc);
}
