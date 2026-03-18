/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x140A7A138
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1408F806C (AlpcpReceiveMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1409C0E68 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpInsertMessageLargeMessageQueue @ 0x140A7A27C (AlpcpInsertMessageLargeMessageQueue.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140A7A3A0 (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpExposeContextAttribute @ 0x140A7A4A0 (AlpcpExposeContextAttribute.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3,
        struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rdi
  void *v8; // rdx
  LegacyAutoBoost *v9; // rsi
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  int v12; // eax

  v4 = (signed __int64 *)(a1 + 352);
  *a3 = 0LL;
  a3[1] = 0LL;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 352, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v9, (struct _KTHREAD *)v4);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v12 = *(_DWORD *)(a1 + 416) & 0x40;
  if ( a2[8] == a1 )
  {
    if ( v12 )
    {
      a2[8] = 0LL;
      a2[7] = 0LL;
    }
    else
    {
      ++*((_WORD *)a2 - 15);
      AlpcpInsertMessageCanceledQueue(a1, a2);
    }
LABEL_17:
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((unsigned __int64)v4);
    AlpcpExposeContextAttribute(a1, a2, a3, 0LL, 0);
    return 3221225507LL;
  }
  if ( !v12 )
  {
    if ( a2[2] )
      AlpcpRemoveMessageFromPendingQueue((__int64)a2, (__int64)v8, v10, v11);
    ++*((_WORD *)a2 - 15);
    AlpcpInsertMessageLargeMessageQueue(a1, a2);
    goto LABEL_17;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((unsigned __int64)v4);
  return 3221227264LL;
}
