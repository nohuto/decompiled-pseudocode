/*
 * XREFs of ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ @ 0x14018687C
 * Callers:
 *     InternalSetTimer @ 0x140019C44 (InternalSetTimer.c)
 *     FreezeThawProcessTimers @ 0x14028BC50 (FreezeThawProcessTimers.c)
 *     SetProcessTimerDelay @ 0x14028BF70 (SetProcessTimerDelay.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400828F0 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

char __fastcall CRitTimerScanWakeSystem::SignalRitTimerScanWakeEvent(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  struct W32_PUSH_LOCK *v3; // rbx
  struct _KEVENT *v4; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = (struct W32_PUSH_LOCK *)(UserSessionState + 18720);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(UserSessionState + 18720, 0LL);
  v4 = *(struct _KEVENT **)(UserSessionState + 18712);
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
