/*
 * XREFs of CmpUnlockNameHashEntry @ 0x140A66C80
 * Callers:
 *     CmpGetNameControlBlock @ 0x1408CAFF0 (CmpGetNameControlBlock.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 */

void __fastcall CmpUnlockNameHashEntry(unsigned int a1)
{
  struct _LIST_ENTRY *v1; // rbx
  signed __int64 Flink; // rax
  signed __int64 v3; // rdx
  struct _LIST_ENTRY *v4; // rtt

  v1 = &CmpKeyLockTracker.WaitListEntry.Flink[((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF];
  _m_prefetchw(v1);
  Flink = (signed __int64)v1->Flink;
  v3 = (signed __int64)&v1->Flink[-1];
  if ( ((unsigned __int64)v1->Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (Flink & 2) != 0
    || (v4 = v1->Flink,
        v4 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64((volatile signed __int64 *)v1, v3, Flink)) )
  {
    ExfReleasePushLock(v1);
  }
  KeAbPostRelease((unsigned __int64)v1);
}
