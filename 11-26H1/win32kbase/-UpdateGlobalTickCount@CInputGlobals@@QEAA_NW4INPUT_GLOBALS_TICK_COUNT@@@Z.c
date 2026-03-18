/*
 * XREFs of ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x140162140
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

char __fastcall CInputGlobals::UpdateGlobalTickCount(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = a2;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v2;
  LOBYTE(v2) = *(_QWORD *)(a1 + 8 * v2 + 16) != v4;
  *(_QWORD *)(a1 + 8 * v5 + 16) = v4;
  *(_QWORD *)(a1 + 8 * v5 + 80) = (*(_QWORD *)(a1 + 72))++;
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1);
  return v2;
}
