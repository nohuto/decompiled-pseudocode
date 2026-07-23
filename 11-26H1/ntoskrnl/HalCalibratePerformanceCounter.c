/*
 * XREFs of HalCalibratePerformanceCounter @ 0x140578FF0
 * Callers:
 *     HalpTscFallback @ 0x140586130 (HalpTscFallback.c)
 *     KiCalibrateTimeAdjustment @ 0x140C0DAB0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     HalpTimerResetProfileAdjustment @ 0x1403128B0 (HalpTimerResetProfileAdjustment.c)
 *     HalpSetVirtualRtc @ 0x140449C88 (HalpSetVirtualRtc.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1404DED74 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpQueryVirtualRtc @ 0x140587850 (HalpQueryVirtualRtc.c)
 */

__int64 __fastcall HalCalibratePerformanceCounter(volatile signed __int32 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int Number; // r11d
  unsigned __int64 v4; // rbp
  ULONG_PTR v5; // rsi
  __int64 *v7; // rdi
  unsigned __int64 v8; // rdx
  char v9; // r14
  unsigned __int64 v10; // rax
  ULONG_PTR v11; // r11
  __int64 result; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER v14; // [rsp+50h] [rbp+18h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v4 = a2;
  v5 = HalpPerformanceCounter;
  v14.QuadPart = 0LL;
  v13 = 0;
  v7 = (__int64 *)(HalpPerformanceCounter + 192);
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    v4 = HalpTimerScaleCounter(a2, 0x989680uLL, *v7);
  if ( v5 != HalpOriginalPerformanceCounter )
  {
    v8 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v8 = 10000000LL;
    v4 = HalpTimerScaleCounter(v4, v8, *v7);
  }
  if ( !Number )
  {
    v9 = HalpQueryVirtualRtc(&v14, &v13);
    HalpTimerCalibratePerformanceCounter(v5, v4);
    if ( HalpAlwaysOnCounter )
    {
      v10 = HalpTimerScaleCounter(v4, *v7, *(_QWORD *)(HalpAlwaysOnCounter + 192));
      HalpTimerCalibratePerformanceCounter(v11, v10);
    }
    if ( v9 && v13 )
      HalpSetVirtualRtc(&v14);
  }
  HalpTimerResetProfileAdjustment((__int64)a1, a2, a3);
  _InterlockedDecrement(a1);
  do
  {
    _mm_pause();
    result = *(unsigned int *)a1;
  }
  while ( (int)result > 0 );
  return result;
}
