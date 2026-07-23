/*
 * XREFs of KiCheckStall @ 0x14052CE60
 * Callers:
 *     KeSwitchFrozenProcessor @ 0x1404EB1FC (KeSwitchFrozenProcessor.c)
 *     KeStallWhileFrozen @ 0x14052CE40 (KeStallWhileFrozen.c)
 *     KiFreezeTargetExecution @ 0x1405F8810 (KiFreezeTargetExecution.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KiCheckStall(__int64 a1, char a2)
{
  __int64 v2; // rdi
  LARGE_INTEGER v5; // r8
  __int64 result; // rax
  LARGE_INTEGER v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = KiFreezeStallOwner;
  v7.QuadPart = 0LL;
  if ( a1 == KiFreezeStallOwner )
  {
    v5 = KeQueryPerformanceCounter(&v7);
    if ( (unsigned __int64)(1000 * (v5.QuadPart - KiLastStallTick)) / v7.QuadPart > 0x1F4 )
      KiLastStallTick = v5.QuadPart;
  }
  result = KiDebuggerOwner;
  if ( a2 && v2 && v2 != a1 && KiDebuggerOwner && KiDebuggerOwner != a1 )
    _mm_pause();
  return result;
}
