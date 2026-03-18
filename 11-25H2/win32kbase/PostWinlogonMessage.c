/*
 * XREFs of PostWinlogonMessage @ 0x14016BE20
 * Callers:
 *     PowerOffMonitor @ 0x1400E1480 (PowerOffMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x14010F890 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxDwmControl @ 0x14017E230 (xxxDwmControl.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9090 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x14009AF70 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     SetTimerCoalescingTolerance @ 0x140115E34 (SetTimerCoalescingTolerance.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x140116A64 (IsSetTimerCoalescingToleranceSupported.c)
 *     ??0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z @ 0x1401B6914 (--0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z.c)
 *     ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1401B6954 (--1CAcquireReleaseRundownProtection@@QEAA@XZ.c)
 *     Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline @ 0x1401B6B5C (Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline.c)
 *     ?TraceLoggingLockMessagePosted@@YAXXZ @ 0x1401C2B00 (-TraceLoggingLockMessagePosted@@YAXXZ.c)
 *     WmsgpPostMessage @ 0x1402C9DE4 (WmsgpPostMessage.c)
 */

__int64 __fastcall PostWinlogonMessage(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 69120) )
    return 0LL;
  if ( (unsigned int)Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v5, v4);
    CAcquireReleaseRundownProtection::CAcquireReleaseRundownProtection(
      (CAcquireReleaseRundownProtection *)&v18,
      UserSessionState + 8641);
    if ( !v18 )
    {
      CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection((CAcquireReleaseRundownProtection *)&v18);
      return 0LL;
    }
    v9 = W32GetUserSessionState(v8, v7);
    v10 = WmsgpPostMessage(*(RPC_BINDING_HANDLE *)(v9 + 69120));
    CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection((CAcquireReleaseRundownProtection *)&v18);
  }
  else
  {
    v11 = W32GetUserSessionState(v5, v4);
    v10 = WmsgpPostMessage(*(RPC_BINDING_HANDLE *)(v11 + 69120));
  }
  if ( v10 >= 0 && v2 == 1027 )
  {
    TraceLoggingLockMessagePosted();
    v14 = W32GetUserSessionState(v13, v12);
    CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v14 + 3056), 1);
    if ( (int)IsSetTimerCoalescingToleranceSupported(v16, v15) >= 0 )
      SetTimerCoalescingTolerance(3LL, v17);
  }
  return (unsigned int)v10;
}
