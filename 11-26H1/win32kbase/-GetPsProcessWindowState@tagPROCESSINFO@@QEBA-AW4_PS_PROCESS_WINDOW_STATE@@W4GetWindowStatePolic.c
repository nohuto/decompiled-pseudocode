/*
 * XREFs of ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401CC3C4
 * Callers:
 *     ?EndDeferral@CQoSReport@@QEAAXXZ @ 0x1401A8070 (-EndDeferral@CQoSReport@@QEAAXXZ.c)
 *     ?ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A83E0 (-ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?PolicyChanged@QualityOfService@@YAXXZ @ 0x1401CC5A8 (-PolicyChanged@QualityOfService@@YAXXZ.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401D3C30 (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     IsCurrentSessionServiceSession @ 0x140165ED8 (IsCurrentSessionServiceSession.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401CC878 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetIOWinsta@tagWINDOWSTATION@@SAPEBU1@XZ @ 0x1401CD840 (-GetIOWinsta@tagWINDOWSTATION@@SAPEBU1@XZ.c)
 */

__int64 __fastcall tagPROCESSINFO::GetPsProcessWindowState(__int64 a1, int a2)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // r8d
  bool v7; // di
  bool v8; // si
  int v9; // ebx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  int v14; // ebx
  const struct tagWINDOWSTATION *IOWinsta; // rax

  if ( !(unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
    return dword_140277320[*(int *)(a1 + 1164)];
  if ( (unsigned int)IsCurrentSessionServiceSession(v4) )
  {
    v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *(_DWORD *)(a1 + 56);
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
      LOBYTE(v11) = v8;
      LOBYTE(v12) = v7;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        14,
        17,
        (__int64)&WPP_f64b18c5451f34bf0a4a7e3a4e877b23_Traceguids,
        v9);
    }
    return 0LL;
  }
  else
  {
    v14 = dword_140277320[*(int *)(a1 + 1164)];
    if ( !a2 )
    {
      IOWinsta = tagWINDOWSTATION::GetIOWinsta();
      if ( (!IOWinsta || (*((_DWORD *)IOWinsta + 56) & 2) == 0) && v14 >= 1 )
        return 1;
    }
    return (unsigned int)v14;
  }
}
