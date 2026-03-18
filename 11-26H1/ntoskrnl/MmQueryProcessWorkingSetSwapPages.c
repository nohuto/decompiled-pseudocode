/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x1404B3F10
 * Callers:
 *     PfpPrivSourceEnum @ 0x14096984C (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStart @ 0x140AE9D90 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x140AE9E34 (SmStoreCompressionStop.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetWorkingSetSwapSupport @ 0x1403683CC (MiGetWorkingSetSwapSupport.c)
 */

__int64 __fastcall MmQueryProcessWorkingSetSwapPages(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v4; // r8
  unsigned int v6; // ebx
  volatile LONG *v7; // rdi
  unsigned __int64 WorkingSetSwapSupport; // rax
  KIRQL v9; // r9

  v2 = a1 + 1024;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(a1 + 1024) <= 2 )
    return 3221226021LL;
  v6 = -1073741275;
  v7 = (volatile LONG *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v4 + 1198)) + 1288LL);
  ExAcquireSpinLockExclusive(v7);
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2);
  if ( WorkingSetSwapSupport > 2 )
  {
    v6 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)WorkingSetSwapSupport + 24LL);
  }
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  else
    ExReleaseSpinLockExclusive(v7, v9);
  return v6;
}
