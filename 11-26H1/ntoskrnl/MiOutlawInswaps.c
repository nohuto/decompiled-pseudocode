/*
 * XREFs of MiOutlawInswaps @ 0x140313C94
 * Callers:
 *     MiBeginProcessClean @ 0x140313D2C (MiBeginProcessClean.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetWorkingSetSwapSupport @ 0x1403683CC (MiGetWorkingSetSwapSupport.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rdi
  volatile LONG *v2; // rbx
  __int64 v3; // rdx
  KIRQL v4; // dl
  __int64 WorkingSetSwapSupport; // rsi
  _QWORD *v6; // rcx

  v1 = a1 + 1024;
  v2 = (volatile LONG *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 1198)) + 1288LL);
  LOBYTE(v3) = ExAcquireSpinLockExclusive(v2);
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1, v3);
  v6 = &unk_140E37818;
  if ( (*(_DWORD *)(v1 + 184) & 0xF) != 1 )
    v6 = (_QWORD *)(v1 + 216);
  *v6 = 2LL;
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v4);
  return WorkingSetSwapSupport;
}
