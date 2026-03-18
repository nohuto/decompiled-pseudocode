/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x140351A4C
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x14034F848 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x1403512D8 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1403513A4 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140351604 (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall RtlpCSparseBitmapUnlock(int *a1)
{
  __int64 v1; // rax
  int v2; // r8d
  volatile signed __int64 *v3; // rbx
  KIRQL v4; // dl
  volatile LONG *v5; // rcx

  v1 = *((_QWORD *)a1 + 1);
  v2 = *a1;
  v3 = (volatile signed __int64 *)(v1 + 24);
  if ( *(_BYTE *)(v1 + 48) )
  {
    v4 = *((_BYTE *)a1 + 4);
    v5 = (volatile LONG *)(v1 + 24);
    if ( v2 == 1 )
      ExReleaseSpinLockExclusive(v5, v4);
    else
      ExReleaseSpinLockShared(v5, v4);
  }
  else
  {
    if ( v2 == 1 )
    {
      if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
    }
    else if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)v3);
    }
    KeAbPostRelease((unsigned __int64)v3);
    KeLeaveGuardedRegion();
  }
}
