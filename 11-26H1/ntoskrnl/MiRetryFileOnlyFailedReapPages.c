/*
 * XREFs of MiRetryFileOnlyFailedReapPages @ 0x1402A5FD8
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A6FA0 (MiSystemPeriodicTick.c)
 *     MiReapFileOnlyPfns @ 0x1406FABB0 (MiReapFileOnlyPfns.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207BF0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAppendPageChain @ 0x1404578A0 (MiAppendPageChain.c)
 *     MiWakeFileOnlyReaper @ 0x140522624 (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiRetryFileOnlyFailedReapPages(int a1)
{
  ULONG64 v2; // rax
  __int64 v3; // rdi
  KIRQL v4; // bl
  unsigned __int64 QpcTimeStamp; // [rsp+38h] [rbp+10h] BYREF

  if ( qword_140E2D140 )
  {
    v2 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    v3 = v2;
    if ( a1 || v2 - qword_140E2D148 >= 0x2FAF080 )
    {
      v4 = ExAcquireSpinLockExclusive(&dword_140E399E0);
      qword_140E2D148 = v3;
      if ( qword_140E2D140 )
      {
        MiAppendPageChain(&qword_140E2D118, &xmmword_140E2D130);
        qword_140E2D140 = 0LL;
        xmmword_140E2D130 = 0LL;
        if ( qword_140E2D128 )
          MiWakeFileOnlyReaper();
      }
      if ( v4 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E399E0);
      else
        ExReleaseSpinLockExclusive(&dword_140E399E0, v4);
    }
  }
}
