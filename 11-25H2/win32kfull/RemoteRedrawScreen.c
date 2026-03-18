/*
 * XREFs of RemoteRedrawScreen @ 0x14012515C
 * Callers:
 *     RemoteShadowCleanup @ 0x140124E84 (RemoteShadowCleanup.c)
 *     xxxRemoteDisconnect @ 0x1401263A8 (xxxRemoteDisconnect.c)
 *     RemotePassthruDisable @ 0x1402023C8 (RemotePassthruDisable.c)
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 *     NtUserRemoteRedrawScreen @ 0x14029D4B0 (NtUserRemoteRedrawScreen.c)
 *     RemoteShadowStart @ 0x1402B894C (RemoteShadowStart.c)
 * Callees:
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140220910 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??4?$SGRDPgbFreezeScreenUpdates@H@@QEAAAEAHAEBH@Z @ 0x14026EA80 (--4-$SGRDPgbFreezeScreenUpdates@H@@QEAAAEAHAEBH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall RemoteRedrawScreen(void **a1, __int64 a2)
{
  __int64 v3; // rcx
  bool v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  int v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24[2]; // [rsp+50h] [rbp-30h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]

  v3 = *(_QWORD *)&WPP_GLOBAL_Control;
  v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      13,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v3, a2) + 68860) )
  {
    v22 = 0;
    SGRDPgbFreezeScreenUpdates<int>::operator=(v9, &v22);
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      LOBYTE(v23) = 0;
      ActivityId = 0LL;
      EtwActivityIdControl(3u, &ActivityId);
      DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x42u, 0, v24, (unsigned __int8 *)&v23);
      v12 = v24[0];
      v15 = W32GetUserSessionState(v14, v13);
      DrvSetMonitorPowerState(*(_QWORD *)(*(_QWORD *)(v15 + 56968) + 16LL), 1LL, 0LL, v12);
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)&v23);
    }
    else
    {
      v18 = W32GetUserSessionState(v11, v10);
      KeSetEvent(*(PRKEVENT *)(v18 + 68440), 1, 0);
    }
    if ( *a1 )
    {
      *(_DWORD *)(W32GetUserSessionState(v17, v16) + 62832) = 0;
      v19 = *((_QWORD *)*a1 + 5);
      if ( (*((_DWORD *)*a1 + 12) & 8) == 0 )
      {
        Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(&v23, *((void **)*a1 + 5));
        Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(&ActivityId, *a1);
        xxxSwitchDesktop(v19, *a1, 2LL);
        if ( v26 != -1 )
        {
          PopAndFreeW32ThreadLock((__int64)&ActivityId, v20);
          v26 = -1LL;
        }
        if ( v24[1] != (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)-1LL )
          PopAndFreeW32ThreadLock((__int64)&v23, v20);
      }
      LockObjectAssignment(a1, 0LL);
    }
  }
  return 0LL;
}
