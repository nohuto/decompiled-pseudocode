/*
 * XREFs of MiRetryFileOnlyFailedReapPages @ 0x1402A53D0
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A63BC (MiSystemPeriodicTick.c)
 *     MiReapFileOnlyPfns @ 0x1406FF880 (MiReapFileOnlyPfns.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAppendPageChain @ 0x14044F110 (MiAppendPageChain.c)
 *     MiWakeFileOnlyReaper @ 0x140524C90 (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiRetryFileOnlyFailedReapPages(int a1)
{
  ULONG64 v2; // rax
  __int64 v3; // rdi
  KIRQL v4; // bl
  unsigned __int64 QpcTimeStamp; // [rsp+38h] [rbp+10h] BYREF

  if ( qword_140E2D2C0 )
  {
    v2 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    v3 = v2;
    if ( a1 || v2 - qword_140E2D2C8 >= 0x2FAF080 )
    {
      v4 = ExAcquireSpinLockExclusive(&dword_140E39B60);
      qword_140E2D2C8 = v3;
      if ( qword_140E2D2C0 )
      {
        MiAppendPageChain(&qword_140E2D298, &xmmword_140E2D2B0);
        qword_140E2D2C0 = 0LL;
        xmmword_140E2D2B0 = 0LL;
        if ( qword_140E2D2A8 )
          MiWakeFileOnlyReaper();
      }
      if ( v4 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E39B60);
      else
        ExReleaseSpinLockExclusive(&dword_140E39B60, v4);
    }
  }
}
