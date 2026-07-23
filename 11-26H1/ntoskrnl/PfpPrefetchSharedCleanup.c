/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x140987F6C
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x1407C88FC (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchRequestPerform @ 0x14098034C (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x14098976C (PfSnCleanupPrefetchHeader.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     PsSetCurrentThreadPrefetching @ 0x140988020 (PsSetCurrentThreadPrefetching.c)
 */

void __fastcall PfpPrefetchSharedCleanup(unsigned __int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  int v7; // ecx

  if ( *(_QWORD *)(a1 + 128) )
    KeAbPostRelease(a1);
  if ( *(_QWORD *)(a1 + 136) )
    KeAbPostRelease((unsigned __int64)&stru_140E66D40.WaitBlock[1]);
  if ( *(_QWORD *)a1 )
  {
    PfLockExclusiveAcquire((unsigned __int64 *)&stru_140E67200, a2, a3, a4);
    v5 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    PfLockExclusiveRelease(&stru_140E67200);
  }
  v7 = *(_DWORD *)(a1 + 68);
  if ( (v7 & 1) != 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140E66D40.Padding[3]);
    *(_DWORD *)(a1 + 68) &= ~1u;
    v7 = *(_DWORD *)(a1 + 68);
  }
  if ( *(_QWORD *)(a1 + 16) )
    PsSetCurrentThreadPrefetching((v7 & 2) != 0);
  if ( (*(_DWORD *)(a1 + 68) & 8) != 0 )
    KeLeaveCriticalRegion();
}
