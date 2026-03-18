/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x14061FE08
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x14061FA20 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x14061FC60 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x14061FD30 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x14061FDA0 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x14061FDE0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall RtlpTraceDatabaseAcquireLock(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 56);
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
    *(_BYTE *)(a1 + 40) = KeAcquireSpinLockRaiseToDpc(v2);
  else
    ExAcquireFastMutex((PKGUARDED_MUTEX)v2);
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  return 1;
}
