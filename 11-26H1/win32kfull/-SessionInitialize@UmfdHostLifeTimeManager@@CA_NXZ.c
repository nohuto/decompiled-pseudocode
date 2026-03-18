/*
 * XREFs of ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1402943E8
 * Callers:
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x1401C1238 (-UmfdSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?InitializeMaxCrashCount@UmfdHostLifeTimeManager@@SAXXZ @ 0x14025F4A8 (-InitializeMaxCrashCount@UmfdHostLifeTimeManager@@SAXXZ.c)
 */

char __fastcall UmfdHostLifeTimeManager::SessionInitialize(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v3 = Win32AllocPoolNonPaged(24LL, 1986348102LL);
  *(_QWORD *)(v2 + 24200) = v3;
  if ( !v3 )
    return 0;
  v4 = Win32AllocPoolNonPaged(24LL, 1986348102LL);
  *(_QWORD *)(v2 + 24208) = v4;
  if ( !v4 )
    return 0;
  v5 = Win32AllocPoolNonPaged(24LL, 1986348102LL);
  *(_QWORD *)(v2 + 24216) = v5;
  if ( !v5 )
    return 0;
  v6 = Win32AllocPoolNonPaged(24LL, 1986348102LL);
  *(_QWORD *)(v2 + 24224) = v6;
  if ( !v6 )
    return 0;
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v2 + 24240));
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v2 + 24248));
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v2 + 24256));
  KeInitializeEvent(*(PRKEVENT *)(v2 + 24200), SynchronizationEvent, 0);
  KeInitializeEvent(*(PRKEVENT *)(v2 + 24208), NotificationEvent, 0);
  KeInitializeEvent(*(PRKEVENT *)(v2 + 24216), NotificationEvent, 0);
  KeInitializeEvent(*(PRKEVENT *)(v2 + 24224), NotificationEvent, 0);
  UmfdHostLifeTimeManager::InitializeMaxCrashCount(v8, v7);
  return 1;
}
