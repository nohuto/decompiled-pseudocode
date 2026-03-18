/*
 * XREFs of CmFcpManagerProcessUsageDataProviders @ 0x140ABF658
 * Callers:
 *     CmFcpManagerFlushFeatureUsageDataWorker @ 0x140ABF640 (CmFcpManagerFlushFeatureUsageDataWorker.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     CmpWorkItemQueueWork @ 0x140356AAC (CmpWorkItemQueueWork.c)
 *     ExBlockOnAddressPushLock @ 0x14047EBC0 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140ABF83C (CmFcpManagerPublishFeatureUsageData.c)
 */

__int64 __fastcall CmFcpManagerProcessUsageDataProviders(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rdi
  char v7; // bp
  void *v8; // rdx
  LegacyAutoBoost *v9; // rsi
  signed __int32 v10; // eax
  unsigned int v11; // ecx
  __int64 *i; // rsi
  int v13; // eax
  bool v14; // zf
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  int v17; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = (signed __int64 *)(a1 + 968);
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 968, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v9, (struct _KTHREAD *)v5);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  _m_prefetchw((const void *)(a1 + 1744));
  do
  {
    v10 = *(_DWORD *)(a1 + 1744);
    v11 = v10;
    if ( (v10 & 0x10) != 0 )
    {
      v11 = *(_DWORD *)(a1 + 1744) & 6 | ((*(_DWORD *)(a1 + 1744) & 0xFFFFFFE0) + 32);
      v7 = 0;
    }
    else if ( (v10 & 8) != 0 )
    {
      v11 = v10 & 0xFFFFFFF7;
      v7 = 1;
    }
  }
  while ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1744), v11, v10) );
  if ( v7 || (v11 & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 1788) = 0;
    for ( i = *(__int64 **)(a1 + 1344); i != (__int64 *)(a1 + 1344); i = (__int64 *)*i )
    {
      v13 = *((_DWORD *)i + 25);
      if ( v7 )
        v14 = (v13 & 2) == 0;
      else
        v14 = (v13 & 1) == 0;
      if ( !v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 1788));
        CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 2));
      }
    }
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((unsigned __int64)v5);
    KeLeaveCriticalRegion();
    while ( 1 )
    {
      v17 = *(_DWORD *)(a1 + 1788);
      if ( !v17 )
        break;
      ExBlockOnAddressPushLock((signed __int64 *)(a1 + 1376), (_BYTE *)(a1 + 1788), &v17, 4LL, 0LL);
    }
    if ( !v7 )
      _InterlockedAdd((volatile signed __int32 *)(a1 + 1744), 0x20u);
    _InterlockedOr(v16, 0);
    if ( *(_QWORD *)(a1 + 1384) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 1384), 0LL);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((unsigned __int64)v5);
    KeLeaveCriticalRegion();
  }
  return CmFcpManagerPublishFeatureUsageData(a1, 0LL);
}
