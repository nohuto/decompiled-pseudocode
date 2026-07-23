/*
 * XREFs of MiAskKeToOutswapProcess @ 0x1404D1920
 * Callers:
 *     MiTrimAllWorkingSets @ 0x14045F5B0 (MiTrimAllWorkingSets.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAttachThreadDone @ 0x140311390 (MiAttachThreadDone.c)
 *     MiReturnWsToExpansionList @ 0x140476F90 (MiReturnWsToExpansionList.c)
 *     KeRetryOutswapProcess @ 0x1404A401C (KeRetryOutswapProcess.c)
 */

__int64 __fastcall MiAskKeToOutswapProcess(__int64 a1, KIRQL a2)
{
  __int64 v3; // rcx
  volatile LONG *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8

  v3 = *(_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(v3 + 72) )
  {
    v4 = (volatile LONG *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174)) + 21384LL);
    ++*(_DWORD *)(v3 + 56);
    if ( a2 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    else
      ExReleaseSpinLockExclusive(v4, a2);
    KeRetryOutswapProcess((volatile signed __int32 *)(a1 - 1024), v5, v6);
    ExAcquireSpinLockExclusive(v4);
    MiAttachThreadDone(a1, 1);
  }
  return MiReturnWsToExpansionList(a1, 1);
}
