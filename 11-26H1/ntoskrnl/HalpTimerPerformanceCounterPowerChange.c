/*
 * XREFs of HalpTimerPerformanceCounterPowerChange @ 0x140584B68
 * Callers:
 *     HalpTimerPowerChange @ 0x140585104 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1404DED74 (HalpTimerCalibratePerformanceCounter.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_UNKNOWN **__fastcall HalpTimerPerformanceCounterPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v3; // rbp
  __int64 InternalData; // rax
  __int64 v5; // rdx
  int v6; // eax
  ULONG_PTR v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // r9
  signed __int64 v11; // rax
  int v12; // r8d
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // r15
  signed __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 CounterSafe; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r11
  unsigned __int64 v21; // rdx
  ULONG_PTR v22; // rdi
  ULONG_PTR v23; // r13
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // rbx
  unsigned __int64 v27; // r10
  signed __int64 v28; // rax
  int v29; // r9d
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rbx
  signed __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rbp
  ULONG_PTR v38; // rdi
  __int64 v39; // r12
  __int64 v40; // rbx
  unsigned __int64 v41; // r10
  signed __int64 v42; // rax
  int v43; // r9d
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rbx
  signed __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rax
  ULONG_PTR v51; // rdi
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // r12
  __int64 v55; // rbx
  unsigned __int64 v56; // r9
  signed __int64 v57; // rax
  int v58; // r8d
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r15
  unsigned __int64 v61; // rbx
  signed __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  ULONG_PTR v66; // r11
  int v67; // eax
  signed __int32 v68[8]; // [rsp+0h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = HalpTimerSavedPerformanceCounter;
  if ( HalpTimerSavedPerformanceCounter )
  {
    if ( BugCheckParameter3 == HalpTimerSavedPerformanceCounter && a2 )
    {
      InternalData = HalpTimerGetInternalData(HalpTimerSavedPerformanceCounter);
      v6 = guard_dispatch_icall_no_overrides(InternalData, v5);
      if ( v6 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v3, v6);
      if ( HalpTimerAlwaysOnQueryCounterStall )
      {
        *(_DWORD *)(HalpPerformanceCounter + 188) = HalpTimerAlwaysOnQueryCounterIndex;
        HalpTimerAlwaysOnQueryCounterStall = 0;
      }
      v7 = HalpPerformanceCounter;
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
        v8 = *(_QWORD *)(v7 + 208);
        v16 = CounterSafe;
      }
      else
      {
        do
        {
          v8 = *(_QWORD *)(v7 + 208);
          do
          {
            v9 = *(_QWORD *)(v7 + 200);
            v10 = HalpTimerQueryCounterSafe(v7);
            _InterlockedOr(v68, 0);
            v11 = *(_QWORD *)(v7 + 200);
          }
          while ( v9 != v11 );
        }
        while ( v8 != *(_QWORD *)(v7 + 208) );
        v12 = *(_DWORD *)(v7 + 220);
        v13 = v9 ^ v10;
        if ( _bittest64((const __int64 *)&v13, (unsigned __int8)(v12 - 1)) )
        {
          v14 = -1LL;
          if ( v12 != 64 )
            v14 = (1LL << v12) - 1;
          v15 = v9 & v14;
          v16 = (v10 | v9 ^ v15) + (1LL << v12);
          if ( v10 >= v15 )
            v16 = v10 | v9 ^ v15;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 200), v16, v11);
        }
        else
        {
          if ( v12 == 64 )
            v17 = -1LL;
          else
            v17 = (1LL << v12) - 1;
          v16 = v10 | v9 & ~v17;
        }
      }
      v19 = HalpTimerScaleCounter(
              v8 + v16,
              *(_QWORD *)(HalpPerformanceCounter + 192),
              *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192));
      v21 = *(_QWORD *)(v20 + 16);
      if ( v19 >= v21 )
        v21 = v19;
      result = (_UNKNOWN **)HalpTimerCalibratePerformanceCounter(v3, v21);
      if ( (int)result < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, v3, (int)result);
      HalpPerformanceCounter = v3;
      HalpTimerSavedPerformanceCounter = 0LL;
    }
  }
  else
  {
    v22 = HalpPerformanceCounter;
    if ( BugCheckParameter3 == HalpPerformanceCounter && !a2 )
    {
      v23 = HalpAlwaysOnCounter;
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      if ( !HalpAlwaysOnCounter )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x22uLL, BugCheckParameter3, 0LL);
      v24 = -1LL;
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v36 = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
        v25 = *(_QWORD *)(v22 + 208);
        v34 = v36;
      }
      else
      {
        do
        {
          v25 = *(_QWORD *)(v22 + 208);
          do
          {
            v26 = *(_QWORD *)(v22 + 200);
            v27 = HalpTimerQueryCounterSafe(v22);
            _InterlockedOr(v68, 0);
            v28 = *(_QWORD *)(v22 + 200);
          }
          while ( v26 != v28 );
        }
        while ( v25 != *(_QWORD *)(v22 + 208) );
        v29 = *(_DWORD *)(v22 + 220);
        v30 = v26 ^ v27;
        if ( _bittest64((const __int64 *)&v30, (unsigned __int8)(v29 - 1)) )
        {
          v31 = -1LL;
          if ( v29 != 64 )
            v31 = (1LL << v29) - 1;
          v32 = v26 & v31;
          v33 = v27 | v32 ^ v26;
          v34 = v33 + (1LL << v29);
          if ( v27 >= v32 )
            v34 = v33;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 200), v34, v28);
        }
        else
        {
          if ( v29 == 64 )
            v35 = -1LL;
          else
            v35 = (1LL << v29) - 1;
          v34 = v27 | v26 & ~v35;
        }
      }
      v37 = v25 + v34;
      v38 = HalpAlwaysOnCounter;
      *(_QWORD *)(HalpPerformanceCounter + 16) = v25 + v34;
      if ( *(_DWORD *)(v38 + 220) == 64 )
      {
        v50 = HalpTimerQueryCounterSafe(v38);
        v39 = *(_QWORD *)(v38 + 208);
        v48 = v50;
      }
      else
      {
        do
        {
          v39 = *(_QWORD *)(v38 + 208);
          do
          {
            v40 = *(_QWORD *)(v38 + 200);
            v41 = HalpTimerQueryCounterSafe(v38);
            _InterlockedOr(v68, 0);
            v42 = *(_QWORD *)(v38 + 200);
          }
          while ( v40 != v42 );
        }
        while ( v39 != *(_QWORD *)(v38 + 208) );
        v43 = *(_DWORD *)(v38 + 220);
        v44 = v40 ^ v41;
        if ( _bittest64((const __int64 *)&v44, (unsigned __int8)(v43 - 1)) )
        {
          v45 = -1LL;
          if ( v43 != 64 )
            v45 = (1LL << v43) - 1;
          v46 = v40 & v45;
          v47 = v41 | v46 ^ v40;
          v48 = v47 + (1LL << v43);
          if ( v41 >= v46 )
            v48 = v47;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 200), v48, v42);
        }
        else
        {
          if ( v43 == 64 )
            v49 = -1LL;
          else
            v49 = (1LL << v43) - 1;
          v48 = v41 | v40 & ~v49;
        }
      }
      v51 = HalpPerformanceCounter;
      v52 = HalpTimerScaleCounter(
              v39 + v48,
              *(_QWORD *)(HalpAlwaysOnCounter + 192),
              *(_QWORD *)(HalpPerformanceCounter + 192));
      v53 = v37 - v52;
      if ( v37 <= v52 )
        v53 = v52 - v37;
      if ( v53 > HalpTimerMaximumAllowableDrift )
      {
        ++HalpTimerDriftReadjustmentCount;
        if ( *(_DWORD *)(v51 + 220) == 64 )
        {
          v64 = HalpTimerQueryCounterSafe(v51);
          v54 = *(_QWORD *)(v51 + 208);
          v62 = v64;
        }
        else
        {
          do
          {
            v54 = *(_QWORD *)(v51 + 208);
            do
            {
              v55 = *(_QWORD *)(v51 + 200);
              v56 = HalpTimerQueryCounterSafe(v51);
              _InterlockedOr(v68, 0);
              v57 = *(_QWORD *)(v51 + 200);
            }
            while ( v55 != v57 );
          }
          while ( v54 != *(_QWORD *)(v51 + 208) );
          v58 = *(_DWORD *)(v51 + 220);
          v59 = v55 ^ v56;
          if ( _bittest64((const __int64 *)&v59, (unsigned __int8)(v58 - 1)) )
          {
            if ( v58 != 64 )
              v24 = (1LL << v58) - 1;
            v60 = v55 & v24;
            v61 = v56 | v60 ^ v55;
            v62 = v61 + (1LL << v58);
            if ( v56 >= v60 )
              v62 = v61;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v51 + 200), v62, v57);
          }
          else
          {
            if ( v58 == 64 )
              v63 = -1LL;
            else
              v63 = (1LL << v58) - 1;
            v62 = v56 | v55 & ~v63;
          }
        }
        v65 = HalpTimerScaleCounter(
                v54 + v62,
                *(_QWORD *)(HalpPerformanceCounter + 192),
                *(_QWORD *)(HalpAlwaysOnCounter + 192));
        v67 = HalpTimerCalibratePerformanceCounter(v66, v65);
        if ( v67 < 0 )
          KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, HalpAlwaysOnCounter, v67);
      }
      HalpTimerAlwaysOnQueryCounterIndex = *(_DWORD *)(v23 + 188);
      *(_DWORD *)(v23 + 188) = HalpTimerDelayedQueryCounterIndex;
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      result = (_UNKNOWN **)HalpAlwaysOnCounter;
      HalpPerformanceCounter = HalpAlwaysOnCounter;
      HalpTimerAlwaysOnQueryCounterStall = 1;
    }
  }
  return result;
}
