/*
 * XREFs of ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x14014CEB0
 * Callers:
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x14014BB94 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x14014C920 (-SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x140253DE8 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

struct tagWND *__fastcall MOVESIZEDATA::SHData_GetCustomDockTargetWindow(MOVESIZEDATA *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbp
  bool v7; // di
  bool v8; // si
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  v3 = *((_QWORD *)this + 40);
  if ( !v3 )
    return 0LL;
  LOBYTE(a2) = 1;
  v6 = HMValidateHandleNoSecure(v3, a2);
  v7 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    v5 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
    if ( (v5 & 1) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      v7 = 1;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = *((_QWORD *)this + 40);
    UserSessionState = W32GetUserSessionState(v5, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v7;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      1,
      15,
      (__int64)&WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids,
      v9,
      v6);
  }
  return (struct tagWND *)v6;
}
