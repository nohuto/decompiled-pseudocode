/*
 * XREFs of ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ @ 0x1401BCE40
 * Callers:
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     FreezeThawProcessTimers @ 0x1402A7E80 (FreezeThawProcessTimers.c)
 *     SetProcessTimerDelay @ 0x1402A81B0 (SetProcessTimerDelay.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071870 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

char __fastcall CRitTimerScanWakeSystem::SignalRitTimerScanWakeEvent(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  struct W32_PUSH_LOCK *v3; // rdi
  struct _KEVENT *v4; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = (struct W32_PUSH_LOCK *)(UserSessionState + 18768);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(UserSessionState + 18768, 0LL);
  v4 = *(struct _KEVENT **)(UserSessionState + 18760);
  if ( v4 )
  {
    KeSetEvent(v4, 1, 0);
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
    return 1;
  }
  else
  {
    W32ReleasePushLockSharedEx(v3, 0LL);
    return 0;
  }
}
