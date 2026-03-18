/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x140B485BC
 * Callers:
 *     AlpcpLogWaitForNewMessage @ 0x140770AC0 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x14077A1B0 (AlpcpLogWaitForReply.c)
 *     AlpcpLogUnwait @ 0x14077A678 (AlpcpLogUnwait.c)
 *     AlpcpLogClosePort @ 0x1407C1A40 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1407C1AB0 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1407C1B24 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1407C1B94 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogSendMessage @ 0x140B484DC (AlpcpLogSendMessage.c)
 *     AlpcpLogReceiveMessage @ 0x140B4854C (AlpcpLogReceiveMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  void *v6; // rdx
  LegacyAutoBoost *v7; // rbx
  PVOID *i; // rbx

  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock.CurrentRunTime, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpMessageLogLock.CurrentRunTime, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&AlpcpMessageLogLock.CurrentRunTime,
      0,
      v7,
      (struct _KTHREAD *)&AlpcpMessageLogLock.CurrentRunTime);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    guard_dispatch_icall_no_overrides(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpMessageLogLock.CurrentRunTime, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpMessageLogLock.CurrentRunTime);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock.CurrentRunTime);
}
