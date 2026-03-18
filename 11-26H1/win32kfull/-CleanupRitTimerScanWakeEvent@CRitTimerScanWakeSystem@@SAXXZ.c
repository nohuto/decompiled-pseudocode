/*
 * XREFs of ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x14022FB54
 * Callers:
 *     EditionDriverUninitialize @ 0x14022F800 (EditionDriverUninitialize.c)
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  void *v3; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 18768), 0);
  v3 = *(void **)(UserSessionState + 18760);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(UserSessionState + 18760) = 0LL;
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 18768), 0LL);
}
