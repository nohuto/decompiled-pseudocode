/*
 * XREFs of PostWinlogonMessage @ 0x1401D97F0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x14014CB40 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     PowerOffMonitor @ 0x1401D62C0 (PowerOffMonitor.c)
 *     xxxDwmControl @ 0x1401FBEF0 (xxxDwmControl.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212890 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x140156610 (SetTimerCoalescingTolerance.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x1401570D4 (IsSetTimerCoalescingToleranceSupported.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x140162140 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ??0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z @ 0x1401D94C4 (--0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z.c)
 *     ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1401D9508 (--1CAcquireReleaseRundownProtection@@QEAA@XZ.c)
 *     ?TraceLoggingLockMessagePosted@@YAXXZ @ 0x1401EB5A0 (-TraceLoggingLockMessagePosted@@YAXXZ.c)
 *     WmsgpPostMessage @ 0x1402D31A8 (WmsgpPostMessage.c)
 */

__int64 __fastcall PostWinlogonMessage(int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rax
  int v13; // edi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rcx
  struct _EX_RUNDOWN_REF *v19; // [rsp+40h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 69112) )
    return 0LL;
  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v5, v4, v6);
  CAcquireReleaseRundownProtection::CAcquireReleaseRundownProtection(
    (CAcquireReleaseRundownProtection *)&v19,
    UserSessionState + 8640);
  if ( !v19 )
  {
    CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection(&v19);
    return 0LL;
  }
  v12 = W32GetUserSessionState(v10, v9, v11);
  v13 = WmsgpPostMessage(*(RPC_BINDING_HANDLE *)(v12 + 69112));
  CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection(&v19);
  if ( v13 >= 0 && a1 == 1027 )
  {
    TraceLoggingLockMessagePosted();
    v17 = W32GetUserSessionState(v15, v14, v16);
    CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v17 + 3056), 1);
    if ( (int)IsSetTimerCoalescingToleranceSupported(v18) >= 0 )
      SetTimerCoalescingTolerance(3LL);
  }
  return (unsigned int)v13;
}
