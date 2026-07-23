/*
 * XREFs of HalpTimerDpcRoutine @ 0x1404E3140
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 HalpTimerDpcRoutine()
{
  ULONG_PTR v0; // rdi
  __int64 CounterSafe; // rax
  __int64 v2; // rsi
  signed __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  ULONG_PTR v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // r11
  signed __int64 v9; // rax
  int v10; // r10d
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  signed __int32 v15[8]; // [rsp+0h] [rbp-38h] BYREF

  KeQueryPerformanceCounter(0LL);
  v0 = HalpAlwaysOnCounter;
  if ( HalpAlwaysOnCounter )
  {
    if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
    {
      CounterSafe = HalpTimerQueryCounterSafe(HalpAlwaysOnCounter);
      v2 = *(_QWORD *)(v0 + 208);
      v3 = CounterSafe;
    }
    else
    {
      do
      {
        v2 = *(_QWORD *)(v0 + 208);
        do
        {
          v7 = *(_QWORD *)(v0 + 200);
          v8 = HalpTimerQueryCounterSafe(v0);
          _InterlockedOr(v15, 0);
          v9 = *(_QWORD *)(v0 + 200);
        }
        while ( v7 != v9 );
      }
      while ( v2 != *(_QWORD *)(v0 + 208) );
      v10 = *(_DWORD *)(v0 + 220);
      v11 = v7 ^ v8;
      if ( _bittest64((const __int64 *)&v11, (unsigned __int8)(v10 - 1)) )
      {
        if ( v10 == 64 )
          v12 = -1LL;
        else
          v12 = (1LL << v10) - 1;
        v13 = v7 & v12;
        v3 = (v8 | v7 ^ v13) + (1LL << v10);
        if ( v8 >= v13 )
          v3 = v8 | v7 ^ v13;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v3, v9);
      }
      else
      {
        if ( v10 == 64 )
          v14 = -1LL;
        else
          v14 = (1LL << v10) - 1;
        v3 = v8 | v7 & ~v14;
      }
    }
    if ( v2 + v3 < HalpTimerLastAlwaysOnCounterValue )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x27uLL, v2 + v3, HalpTimerLastAlwaysOnCounterValue);
    HalpTimerLastAlwaysOnCounterValue = v2 + v3;
  }
  v4 = MEMORY[0xFFFFF78000000014];
  result = MEMORY[0xFFFFF78000000014] - HalpTimerLastDpc;
  if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - HalpTimerLastDpc) >= 0x47868C00 )
  {
    result = KiProcessorBlock[0];
    v6 = _InterlockedExchange64((volatile __int64 *)(KiProcessorBlock[0] + 224), 0LL);
    if ( v6 )
      result = KiInsertQueueDpc(v6, (unsigned int)v4, HIDWORD(v4), 0LL, 0);
    HalpTimerLastDpc = v4;
  }
  return result;
}
