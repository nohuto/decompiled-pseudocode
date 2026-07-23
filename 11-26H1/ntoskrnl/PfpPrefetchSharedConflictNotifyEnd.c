/*
 * XREFs of PfpPrefetchSharedConflictNotifyEnd @ 0x140B56930
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     PfpPrefetchSharedDeref @ 0x14098804C (PfpPrefetchSharedDeref.c)
 */

void __fastcall PfpPrefetchSharedConflictNotifyEnd(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( a2 )
  {
    v6 = (struct _KTHREAD *)a1;
    if ( !a1 )
      v6 = (struct _KTHREAD *)&stru_140E66D40.WaitBlockFill11[48];
    KeAbPreAcquire((__int64)v6, a2, 0LL, a4);
    KeAbPostReleaseEx(v6, a2, v7, v8);
  }
  if ( a1 )
    PfpPrefetchSharedDeref(a1);
}
