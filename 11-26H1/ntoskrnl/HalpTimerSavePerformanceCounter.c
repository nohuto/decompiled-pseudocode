/*
 * XREFs of HalpTimerSavePerformanceCounter @ 0x1404E4D90
 * Callers:
 *     HalpAcpiPreSleep @ 0x140C0EB98 (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 */

__int64 HalpTimerSavePerformanceCounter()
{
  ULONG_PTR v0; // rdi
  __int64 v1; // rbp
  __int64 CounterSafe; // rax
  __int64 v3; // r14
  signed __int64 v4; // rdx
  __int64 result; // rax
  ULONG_PTR v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  signed __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int64 v11; // r10
  signed __int64 v12; // rax
  int v13; // r9d
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned __int64 v17; // r9
  signed __int64 v18; // rax
  int v19; // r8d
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r8
  __int64 v24; // rsi
  unsigned __int64 v25; // rbp
  signed __int32 v26[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = HalpPerformanceCounter;
  v1 = -1LL;
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
    v3 = *(_QWORD *)(v0 + 208);
    v4 = CounterSafe;
  }
  else
  {
    do
    {
      v3 = *(_QWORD *)(v0 + 208);
      do
      {
        v10 = *(_QWORD *)(v0 + 200);
        v11 = HalpTimerQueryCounterSafe(v0);
        _InterlockedOr(v26, 0);
        v12 = *(_QWORD *)(v0 + 200);
      }
      while ( v10 != v12 );
    }
    while ( v3 != *(_QWORD *)(v0 + 208) );
    v13 = *(_DWORD *)(v0 + 220);
    v14 = v10 ^ v11;
    if ( _bittest64((const __int64 *)&v14, (unsigned __int8)(v13 - 1)) )
    {
      v22 = -1LL;
      if ( v13 != 64 )
        v22 = (1LL << v13) - 1;
      v23 = v10 & v22;
      v4 = (v11 | v10 ^ v23) + (1LL << v13);
      if ( v11 >= v23 )
        v4 = v11 | v10 ^ v23;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v4, v12);
    }
    else
    {
      if ( v13 == 64 )
        v15 = -1LL;
      else
        v15 = (1LL << v13) - 1;
      v4 = v11 | v10 & ~v15;
    }
  }
  result = v3 + v4;
  *(_QWORD *)(v0 + 16) = v3 + v4;
  v6 = HalpAlwaysOnCounter;
  if ( HalpAlwaysOnCounter )
  {
    if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
    {
      v7 = HalpTimerQueryCounterSafe(HalpAlwaysOnCounter);
      v8 = *(_QWORD *)(v6 + 208);
      v9 = v7;
    }
    else
    {
      do
      {
        v8 = *(_QWORD *)(v6 + 208);
        do
        {
          v16 = *(_QWORD *)(v6 + 200);
          v17 = HalpTimerQueryCounterSafe(v6);
          _InterlockedOr(v26, 0);
          v18 = *(_QWORD *)(v6 + 200);
        }
        while ( v16 != v18 );
      }
      while ( v8 != *(_QWORD *)(v6 + 208) );
      v19 = *(_DWORD *)(v6 + 220);
      v20 = v16 ^ v17;
      if ( _bittest64((const __int64 *)&v20, (unsigned __int8)(v19 - 1)) )
      {
        v24 = 1LL << v19;
        if ( v19 != 64 )
          v1 = v24 - 1;
        v25 = v16 & v1;
        v9 = (v17 | v16 ^ v25) + v24;
        if ( v17 >= v25 )
          v9 = v17 | v16 ^ v25;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 200), v9, v18);
      }
      else
      {
        if ( v19 == 64 )
          v21 = -1LL;
        else
          v21 = (1LL << v19) - 1;
        v9 = v17 | v16 & ~v21;
      }
    }
    result = v8 + v9;
    *(_QWORD *)(v6 + 16) = v8 + v9;
  }
  return result;
}
