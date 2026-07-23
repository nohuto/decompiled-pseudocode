/*
 * XREFs of HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404E7D10
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404CE8A0 (HalpTimerConvertAuxiliaryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerConvertPerformanceCounterToAuxiliaryCounter(unsigned __int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r9
  int v7; // r9d
  unsigned __int64 v9; // rbp
  LARGE_INTEGER v10; // r15
  unsigned int v11; // esi
  LARGE_INTEGER v12; // rdi
  LARGE_INTEGER PerformanceCounter; // r12
  __int64 InternalData; // rax
  __int64 v15; // rdx
  LONGLONG QuadPart; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+B8h] [rbp+20h]

  v19 = 0LL;
  v20 = 0LL;
  if ( !HalpAuxiliaryCounter
    || (v5 = HalpTimerQpcFreqForAuxQpcConversion,
        v6 = *(_QWORD *)(HalpAuxiliaryCounter + 192),
        v21 = v6,
        !HalpTimerQpcFreqForAuxQpcConversion)
    || !v6 )
  {
    v7 = -1073741637;
    goto LABEL_6;
  }
  if ( a1 < HalpTimerEarliestQpcAllowedToConvert )
  {
    v7 = -1073741811;
    goto LABEL_6;
  }
  v9 = 0LL;
  v10.QuadPart = 0LL;
  v11 = 0;
  v12.QuadPart = -1LL;
  while ( v11 < 0xA )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    InternalData = HalpTimerGetInternalData(HalpAuxiliaryCounter);
    v23 = guard_dispatch_icall_no_overrides(InternalData, v15);
    QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart;
    if ( QuadPart <= (unsigned __int64)HalpTimerClosestAuxiliaryQpcPair )
    {
      v17 = v23;
      goto LABEL_18;
    }
    if ( v12.QuadPart > (unsigned __int64)QuadPart )
    {
      v9 = v23;
      v10 = PerformanceCounter;
    }
    ++v11;
    if ( v12.QuadPart <= (unsigned __int64)QuadPart )
      QuadPart = v12.QuadPart;
    v12.QuadPart = QuadPart;
  }
  PerformanceCounter = v10;
  v17 = v9;
  QuadPart = v12.QuadPart;
LABEL_18:
  if ( !is_mul_ok(QuadPart, 0x3B9ACA00uLL) )
  {
    v7 = -1073741823;
    goto LABEL_6;
  }
  v18 = (unsigned __int64)QuadPart * (unsigned __int128)0x3B9ACA00uLL / v5;
  v7 = HalpTimerConvertAuxiliaryCounter(PerformanceCounter.QuadPart, v5, v17, v21, a1, &v19, &v20);
  if ( v7 < 0 )
  {
LABEL_6:
    *a2 = 0LL;
    if ( a3 )
      *a3 = 0LL;
    return (unsigned int)v7;
  }
  *a2 = v19;
  if ( a3 )
    *a3 = v18 + v20;
  return (unsigned int)v7;
}
