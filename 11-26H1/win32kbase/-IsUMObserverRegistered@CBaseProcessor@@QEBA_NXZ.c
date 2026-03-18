/*
 * XREFs of ?IsUMObserverRegistered@CBaseProcessor@@QEBA_NXZ @ 0x140089E24
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x140089CEC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CBaseProcessor::IsUMObserverRegistered(CBaseProcessor *this, int a2, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // ecx
  char v9; // di
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // si

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 18800);
  v5 = v4 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4 + 8, 0LL);
  v8 = (*(_QWORD *)(v4 + 24) == 0LL) ^ (*(_QWORD *)(v4 + 32) == 0LL) ^ (*(_DWORD *)(v4 + 40) == 0);
  if ( v8 != (*(_DWORD *)(v4 + 16) == 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 213LL);
  v9 = 1;
  if ( !*(_QWORD *)(v4 + 24)
    || (v10 = *(_QWORD *)(W32GetUserSessionState(v8, v6, v7) + 19176),
        v11 = *(_QWORD *)(v4 + 24),
        v12 = 1,
        *(_QWORD *)(v11 + 488) != v10) )
  {
    v12 = 0;
  }
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( !v12 || (*((_DWORD *)this + 2) & 6) == 0 )
    return 0;
  return v9;
}
