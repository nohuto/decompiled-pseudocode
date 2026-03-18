/*
 * XREFs of FsRtlReleasePushLock @ 0x1402C23EC
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x1402C1230 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlRemovePerStreamContext @ 0x140449180 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1404492B0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140A36AA0 (FsRtlTeardownPerStreamContexts.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

void __fastcall FsRtlReleasePushLock(struct _KTHREAD *a1)
{
  signed __int64 v2; // rax
  unsigned __int64 v3; // rdx
  signed __int64 v4; // rcx

  _m_prefetchw(a1);
  v2 = *(_QWORD *)&a1->Header.Lock;
  v3 = *(_QWORD *)&a1->Header.Lock & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = *(_QWORD *)&a1->Header.Lock - 16LL;
  if ( v3 <= 0x10 )
    v4 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, v4, v2) )
    ExfReleasePushLock(a1, v3);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
}
