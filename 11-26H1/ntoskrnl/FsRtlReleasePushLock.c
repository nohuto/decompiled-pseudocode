/*
 * XREFs of FsRtlReleasePushLock @ 0x14030D0AC
 * Callers:
 *     FsRtlInsertPerStreamContext @ 0x14021B420 (FsRtlInsertPerStreamContext.c)
 *     FsRtlRemovePerStreamContext @ 0x14021B5C0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14030BEF0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140919AA0 (FsRtlTeardownPerStreamContexts.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
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
    ExfReleasePushLock(a1);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
}
