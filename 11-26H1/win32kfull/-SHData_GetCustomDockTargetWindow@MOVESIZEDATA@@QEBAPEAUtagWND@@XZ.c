/*
 * XREFs of ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x14019D930
 * Callers:
 *     ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x14019D39C (-SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14019EC58 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x140295B74 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

struct tagWND *__fastcall MOVESIZEDATA::SHData_GetCustomDockTargetWindow(MOVESIZEDATA *this)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbp
  bool v6; // di
  bool v7; // si
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx

  v2 = *((_QWORD *)this + 48);
  if ( !v2 )
    return 0LL;
  v5 = HMValidateHandleNoSecure(v2, 1);
  v6 = 0;
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
  {
    v4 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v4 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v6 = 1;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = *((_QWORD *)this + 48);
    UserSessionState = W32GetUserSessionState(v4, WPP_GLOBAL_Control);
    LOBYTE(v10) = v7;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      1,
      15,
      (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids,
      v8,
      v5);
  }
  return (struct tagWND *)v5;
}
