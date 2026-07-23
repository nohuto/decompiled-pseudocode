/*
 * XREFs of CmpDereferenceNameControlBlockWithLock @ 0x1408CBB28
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x14085F524 (CmpCloneToUnbackedKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmpLockNameHashEntryExclusive @ 0x140A5C0D0 (CmpLockNameHashEntryExclusive.c)
 */

void __fastcall CmpDereferenceNameControlBlockWithLock(_DWORD *a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *v3; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ebx
  struct _LIST_ENTRY **i; // rdx
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *v10; // rbx
  signed __int64 Flink; // rax
  signed __int64 v12; // rdx
  struct _LIST_ENTRY *v13; // rtt

  v3 = (struct _LIST_ENTRY *)(a1 + 2);
  v5 = a1[2];
  CmpLockNameHashEntryExclusive(v5, a2, a3);
  v6 = *(_QWORD *)a1 - 1LL;
  *(_QWORD *)a1 = v6;
  v7 = 101027 * (v5 ^ (v5 >> 9));
  if ( !v6 )
  {
    for ( i = &CmpKeyLockTracker.WaitListEntry.Flink[((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int64)v7 >> 9)) & 0x7FF].Blink;
          i;
          i = &v9->Blink )
    {
      v9 = *i;
      if ( !*i )
        break;
      if ( v9 == v3 )
      {
        *i = v9->Blink;
        break;
      }
    }
    CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
  }
  v10 = &CmpKeyLockTracker.WaitListEntry.Flink[((unsigned __int16)((unsigned __int64)v7 >> 9) ^ (unsigned __int16)v7) & 0x7FF];
  _m_prefetchw(v10);
  Flink = (signed __int64)v10->Flink;
  v12 = (signed __int64)&v10->Flink[-1];
  if ( ((unsigned __int64)v10->Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (Flink & 2) != 0
    || (v13 = v10->Flink,
        v13 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64((volatile signed __int64 *)v10, v12, Flink)) )
  {
    ExfReleasePushLock(v10);
  }
  KeAbPostRelease((unsigned __int64)v10);
}
