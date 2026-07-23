/*
 * XREFs of MiOutlawInswaps @ 0x140315CC4
 * Callers:
 *     MiBeginProcessClean @ 0x140315D5C (MiBeginProcessClean.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetWorkingSetSwapSupport @ 0x14036A16C (MiGetWorkingSetSwapSupport.c)
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
  v2 = (volatile LONG *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 1198)) + 1288LL);
  LOBYTE(v3) = ExAcquireSpinLockExclusive(v2);
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1, v3);
  v6 = &unk_140E37998;
  if ( (*(_DWORD *)(v1 + 184) & 0xF) != 1 )
    v6 = (_QWORD *)(v1 + 216);
  *v6 = 2LL;
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v4);
  return WorkingSetSwapSupport;
}
