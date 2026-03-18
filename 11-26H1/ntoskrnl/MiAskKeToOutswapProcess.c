/*
 * XREFs of MiAskKeToOutswapProcess @ 0x1404D8150
 * Callers:
 *     MiTrimAllWorkingSets @ 0x140466450 (MiTrimAllWorkingSets.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiAttachThreadDone @ 0x1402C66F0 (MiAttachThreadDone.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnWsToExpansionList @ 0x14047D620 (MiReturnWsToExpansionList.c)
 *     KeRetryOutswapProcess @ 0x1404AA98C (KeRetryOutswapProcess.c)
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
    v4 = (volatile LONG *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174)) + 21384LL);
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
