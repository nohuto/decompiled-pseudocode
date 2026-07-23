/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x1404B83D0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcFindNextWorkQueueEntry @ 0x1403870A0 (CcFindNextWorkQueueEntry.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcCompleteAsyncRead @ 0x1403A05A8 (CcCompleteAsyncRead.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r15
  _SLIST_ENTRY *NextWorkQueueEntry; // rsi
  unsigned __int64 *v4; // rdi
  __int64 v5; // r13
  char v6; // bl
  struct _KLOCK_ENTRIES *v7; // r9
  AutoBoost *v8; // rax
  __int64 v9; // rcx
  AutoBoost *v10; // rsi
  _QWORD *v11; // r8
  signed __int64 v12; // rax
  signed __int64 v13; // rdx
  unsigned __int64 v14; // rtt
  __int64 v16; // [rsp+70h] [rbp+18h]

  if ( *(_DWORD *)(a1 + 32) == 4 )
  {
    v1 = *(_QWORD *)(a1 + 56);
    v2 = *(_QWORD *)(a1 + 72);
    NextWorkQueueEntry = *(_SLIST_ENTRY **)(a1 + 48);
    v4 = (unsigned __int64 *)(*(_QWORD *)(a1 + 64) + 1160LL);
    v16 = *(_QWORD *)(a1 + 64);
    if ( !CcEnablePerVolumeLazyWriter )
      v4 = (unsigned __int64 *)(v1 + 1224);
    v5 = *(unsigned int *)(a1 + 36);
    v6 = 0;
    do
    {
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      v8 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, v7);
      v10 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
      if ( v10 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          *((_BYTE *)v10 + 33) |= 2u;
        else
          *((_BYTE *)v10 + 10) = 1;
      }
      v11 = (_QWORD *)(16 * v5 + *(_QWORD *)(v2 + 264));
      if ( (_QWORD *)*v11 == v11 )
      {
        v6 = 1;
        NextWorkQueueEntry = 0LL;
        --*(_DWORD *)(*(_QWORD *)(v2 + 248) + 4 * v5);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v9, v2, v11);
      }
      _m_prefetchw(v4);
      v12 = *v4;
      v13 = *v4 - 16;
      if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v13 = 0LL;
      if ( (v12 & 2) != 0 || (v14 = *v4, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v13, v12)) )
        ExfReleasePushLock(v4);
      KeAbPostRelease((unsigned __int64)v4);
    }
    while ( !v6 );
    CcDereferencePartitionAndPrivateVolumeCacheMap(v1, v16);
    ExFreePoolWithTag((PVOID)a1, 0x71576343u);
  }
}
