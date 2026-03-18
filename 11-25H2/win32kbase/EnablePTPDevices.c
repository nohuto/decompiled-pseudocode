/*
 * XREFs of EnablePTPDevices @ 0x1401B4DE0
 * Callers:
 *     NtUserEnableTouchPad @ 0x1401BD300 (NtUserEnableTouchPad.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1400A89E4 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     AccessPTPEnabledStatus @ 0x1400B2A10 (AccessPTPEnabledStatus.c)
 *     RIMDeliverConfigRequest @ 0x1400B3038 (RIMDeliverConfigRequest.c)
 *     UpdateInputSettingWnfState @ 0x1401334C0 (UpdateInputSettingWnfState.c)
 *     EtwTraceTouchPadEnabledStatusChangeStart @ 0x1401B8750 (EtwTraceTouchPadEnabledStatusChangeStart.c)
 *     EtwTraceTouchPadEnabledStatusChangeStop @ 0x1401B8780 (EtwTraceTouchPadEnabledStatusChangeStop.c)
 */

_BOOL8 __fastcall EnablePTPDevices(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct W32_PUSH_LOCK *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 i; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  BOOL v13; // ebx
  __int64 v14; // rdx

  EtwTraceTouchPadEnabledStatusChangeStart();
  v4 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v3, v2) + 16840) + 1232LL);
  W32AcquirePushLockSharedEx(v4, 0);
  for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 16840) + 1240LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(_DWORD *)(i + 48) == 3 && (v8 = *(_QWORD *)(i + 440), *(_WORD *)(v8 + 42) == 13) && *(_WORD *)(v8 + 40) == 14 )
    {
      RIMDeliverConfigRequest((struct RIMDEV *)i, v8, 0x57u, a1 != 0);
    }
    else if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 )
    {
      v9 = *(_QWORD *)(i + 456);
      if ( *(_DWORD *)(v9 + 24) == 7 )
        *(_DWORD *)(v9 + 368) = (a1 << 11) ^ (*(_DWORD *)(v9 + 368) ^ (a1 << 11)) & 0xFFFFF7FF;
    }
  }
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  *(_DWORD *)(W32GetUserSessionState(v11, v10) + 328) = a1;
  v13 = AccessPTPEnabledStatus(a1, 0, 0LL);
  if ( v13 )
  {
    PTPTelemetry::PTPConfigUpdateEx(0LL, v12);
    UpdateInputSettingWnfState(175LL, v14);
  }
  EtwTraceTouchPadEnabledStatusChangeStop();
  return v13;
}
