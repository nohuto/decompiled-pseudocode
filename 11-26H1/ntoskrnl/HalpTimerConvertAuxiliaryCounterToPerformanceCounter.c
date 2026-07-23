/*
 * XREFs of HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404334F0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerConvertAuxiliaryCounterToPerformanceCounter(unsigned __int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v4; // r10
  unsigned __int64 v5; // r12
  unsigned int v6; // r9d
  LARGE_INTEGER v7; // rax
  unsigned __int64 v8; // r13
  unsigned int v9; // r14d
  __int64 v10; // rbx
  LARGE_INTEGER v11; // rdi
  LARGE_INTEGER PerformanceCounter; // rbp
  __int64 InternalData; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  LONGLONG QuadPart; // rcx
  unsigned __int128 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v23; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER v26; // [rsp+88h] [rbp+20h]

  v4 = a2;
  if ( !HalpAuxiliaryCounter
    || (v5 = HalpTimerQpcFreqForAuxQpcConversion,
        v23 = *(_QWORD *)(HalpAuxiliaryCounter + 192),
        !HalpTimerQpcFreqForAuxQpcConversion)
    || !*(_QWORD *)(HalpAuxiliaryCounter + 192) )
  {
    v6 = -1073741637;
    goto LABEL_4;
  }
  v7.QuadPart = 0LL;
  v8 = 0LL;
  v9 = 0;
  v26.QuadPart = 0LL;
  v10 = -1LL;
  v11.QuadPart = -1LL;
  while ( v9 < 0xA )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    InternalData = HalpTimerGetInternalData(HalpAuxiliaryCounter);
    v15 = guard_dispatch_icall_no_overrides(InternalData, v14);
    QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart;
    if ( QuadPart <= (unsigned __int64)HalpTimerClosestAuxiliaryQpcPair )
      goto LABEL_16;
    if ( v11.QuadPart <= (unsigned __int64)QuadPart )
    {
      v7 = v26;
    }
    else
    {
      v7 = PerformanceCounter;
      v8 = v15;
      v26 = PerformanceCounter;
    }
    ++v9;
    if ( v11.QuadPart <= (unsigned __int64)QuadPart )
      QuadPart = v11.QuadPart;
    v11.QuadPart = QuadPart;
  }
  PerformanceCounter = v7;
  v15 = v8;
  QuadPart = v11.QuadPart;
LABEL_16:
  v17 = (unsigned __int64)QuadPart * (unsigned __int128)0x3B9ACA00uLL;
  if ( is_mul_ok(QuadPart, 0x3B9ACA00uLL) )
  {
    v18 = a1 - v15;
    v19 = v17 / v5;
    if ( v15 >= a1 )
      v18 = v15 - a1;
    if ( v18 / v23 >= 0xA )
    {
      v6 = -1073741811;
      goto LABEL_25;
    }
    if ( is_mul_ok(v5, v18) )
    {
      v20 = v5 * (unsigned __int128)v18 / v23;
      v21 = 0x3B9ACA00 / v5;
      if ( v15 < a1 )
      {
        if ( v20 + PerformanceCounter.QuadPart >= v20 )
          v10 = v20 + PerformanceCounter.QuadPart;
        v6 = v20 + PerformanceCounter.QuadPart < v20 ? 0xC0000095 : 0;
        if ( v20 + PerformanceCounter.QuadPart >= v20 )
        {
LABEL_26:
          if ( (v6 & 0x80000000) == 0 )
          {
            *a2 = v10;
            if ( a3 )
              *a3 = v19 + v21;
            return v6;
          }
          goto LABEL_32;
        }
LABEL_25:
        v21 = 0LL;
        v10 = 0LL;
        goto LABEL_26;
      }
      if ( PerformanceCounter.QuadPart >= v20 )
      {
        v6 = 0;
        v10 = PerformanceCounter.QuadPart - v20;
        goto LABEL_26;
      }
    }
    v6 = -1073741823;
    goto LABEL_25;
  }
  v6 = -1073741823;
LABEL_32:
  v4 = a2;
LABEL_4:
  *v4 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  return v6;
}
