/*
 * XREFs of EnablePTPDevices @ 0x1401D7790
 * Callers:
 *     NtUserEnableTouchPad @ 0x1401E3C50 (NtUserEnableTouchPad.c)
 * Callees:
 *     AccessPTPEnabledStatus @ 0x1400F0360 (AccessPTPEnabledStatus.c)
 *     RIMDeliverConfigRequest @ 0x1400F1398 (RIMDeliverConfigRequest.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140160DC0 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     UpdateInputSettingWnfState @ 0x14016D960 (UpdateInputSettingWnfState.c)
 *     EtwTraceTouchPadEnabledStatusChangeStop @ 0x1401C6D10 (EtwTraceTouchPadEnabledStatusChangeStop.c)
 *     EtwTraceTouchPadEnabledStatusChangeStart @ 0x1401DB650 (EtwTraceTouchPadEnabledStatusChangeStart.c)
 */

_BOOL8 __fastcall EnablePTPDevices(int a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // rbx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 i; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rcx
  BOOL v17; // ebx
  int v18; // r8d
  int v19; // edx
  int v20; // r8d

  EtwTraceTouchPadEnabledStatusChangeStart();
  v5 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v3, v2, v4) + 16832) + 1232LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 16832) + 1240LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(_DWORD *)(i + 48) == 3
      && (v10 = *(_QWORD *)(i + 440), *(_WORD *)(v10 + 42) == 13)
      && *(_WORD *)(v10 + 40) == 14 )
    {
      RIMDeliverConfigRequest((struct RIMDEV *)i, v10, 87, a1 != 0);
    }
    else if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 )
    {
      v11 = *(_QWORD *)(i + 456);
      if ( *(_DWORD *)(v11 + 24) == 7 )
        *(_DWORD *)(v11 + 368) = (a1 << 11) ^ (*(_DWORD *)(v11 + 368) ^ (a1 << 11)) & 0xFFFFF7FF;
    }
  }
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 328) = a1;
  v17 = AccessPTPEnabledStatus(a1, 0, 0LL);
  if ( v17 )
  {
    PTPTelemetry::PTPConfigUpdateEx(0LL, v15, v18);
    UpdateInputSettingWnfState(175, v19, v20);
  }
  EtwTraceTouchPadEnabledStatusChangeStop(v16);
  return v17;
}
