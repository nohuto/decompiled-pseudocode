/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x140B4A34C
 * Callers:
 *     AlpcpLogWaitForNewMessage @ 0x140773AC0 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x14077D0E0 (AlpcpLogWaitForReply.c)
 *     AlpcpLogUnwait @ 0x14077D5A8 (AlpcpLogUnwait.c)
 *     AlpcpLogClosePort @ 0x1407C4AA0 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1407C4B10 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1407C4B84 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1407C4BF4 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogSendMessage @ 0x140B4A26C (AlpcpLogSendMessage.c)
 *     AlpcpLogReceiveMessage @ 0x140B4A2DC (AlpcpLogReceiveMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  void *v6; // rdx
  LegacyAutoBoost *v7; // rbx
  PVOID *i; // rbx

  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock.CycleTime, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpMessageLogLock.CycleTime, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&AlpcpMessageLogLock.CycleTime,
      0,
      v7,
      (struct _KTHREAD *)&AlpcpMessageLogLock.CycleTime);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    guard_dispatch_icall_no_overrides(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpMessageLogLock.CycleTime, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpMessageLogLock.CycleTime);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock.CycleTime);
}
