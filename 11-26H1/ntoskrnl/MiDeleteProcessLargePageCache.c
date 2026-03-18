/*
 * XREFs of MiDeleteProcessLargePageCache @ 0x1404D05EC
 * Callers:
 *     MiDeleteWorkingSetList @ 0x1404D0588 (MiDeleteWorkingSetList.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiPruneProcessLargePageCaches @ 0x1402A8FB4 (MiPruneProcessLargePageCaches.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeProcessLargePageCache @ 0x140711EB0 (MiFreeProcessLargePageCache.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteProcessLargePageCache(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  KIRQL v3; // al
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  volatile LONG *v6; // rcx

  v1 = *(_QWORD **)(*(_QWORD *)(a1 + 1040) + 1176LL);
  if ( v1 )
  {
    v2 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 1198));
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 16832));
    v4 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = (volatile LONG *)(v2 + 16832);
    if ( v3 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    else
      ExReleaseSpinLockExclusive(v6, v3);
    MiFreeProcessLargePageCache(v2, v1);
    MiPruneProcessLargePageCaches(v2, 0);
    ExFreePoolWithTag(v1, 0);
  }
}
