/*
 * XREFs of EmonAllocateCounterInternal @ 0x14059751C
 * Callers:
 *     EmonAllocateCounter @ 0x140597438 (EmonAllocateCounter.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall EmonAllocateCounterInternal(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax

  v9 = 6LL * a5;
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8 * v9 + 24) = a2;
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 8 * v9 + 40) = 0;
  v10 = *(_QWORD *)(a1 + 16);
  *(LARGE_INTEGER *)(v10 + 8 * v9 + 8) = KeQueryPerformanceCounter(0LL);
  v11 = *(_QWORD *)(a1 + 16);
  if ( a2 == 2 )
  {
    *(_DWORD *)(v11 + 48LL * a5 + 36) = 24;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL * a5) = 0LL;
    result = *(_QWORD *)(a1 + 16);
    **(_DWORD **)(result + 48LL * a5 + 16) = 0;
  }
  else
  {
    *(_DWORD *)(v11 + 48LL * a5 + 36) = a4;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL * a5) = *(unsigned int *)(a3 + 24);
    result = *(unsigned int *)(a3 + 304);
    **(_DWORD **)(*(_QWORD *)(a1 + 16) + 48LL * a5 + 16) = result;
  }
  return result;
}
