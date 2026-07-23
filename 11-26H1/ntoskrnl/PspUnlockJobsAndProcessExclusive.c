/*
 * XREFs of PspUnlockJobsAndProcessExclusive @ 0x140AAC9DC
 * Callers:
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 *     PspUnlockJobChain @ 0x140AACA94 (PspUnlockJobChain.c)
 */

void __fastcall PspUnlockJobsAndProcessExclusive(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  bool v8; // zf

  v3 = *a1;
  while ( v3 )
  {
    v7 = *(_QWORD *)&a1[4 * --v3 + 2];
    if ( LOBYTE(a1[4 * v3 + 4]) )
      PspUnlockJobChain(v7, 0LL);
    else
      ExReleaseFastResourceExclusive(v7 + 56, 0LL, a3, 2LL * v3);
  }
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 456));
    KeAbPostRelease(a2 + 456);
  }
  v8 = (*(_WORD *)(a3 + 486))++ == 0xFFFF;
  if ( v8 && *(_QWORD *)(a3 + 152) != a3 + 152 )
    KiCheckForKernelApcDelivery((__int64)a1, a2);
}
