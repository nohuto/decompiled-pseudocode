/*
 * XREFs of CtxDisplayIOCtl @ 0x1402B87FC
 * Callers:
 *     NtUserCtxDisplayIOCtl @ 0x1402952D0 (NtUserCtxDisplayIOCtl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetRemoteHDEV @ 0x14026BD68 (GetRemoteHDEV.c)
 *     RemoteRedrawRectangle @ 0x1402AF088 (RemoteRedrawRectangle.c)
 *     bDrvDisplayIOCtl @ 0x14033F9A0 (bDrvDisplayIOCtl.c)
 */

__int64 __fastcall CtxDisplayIOCtl(char a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 RemoteContext; // r15
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 RemoteHDEV; // rax
  __int64 v17; // rbx
  __int64 v18; // rax

  RemoteContext = GreGetRemoteContext();
  v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      27,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v7, v6) + 68764) )
  {
    RemoteHDEV = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 68808);
  }
  else
  {
    v17 = *(_QWORD *)(RemoteContext + 40);
    v18 = W32GetUserSessionState(v15, v14);
    RemoteHDEV = GetRemoteHDEV(*(unsigned __int16 *)(v18 + 68752), v17);
  }
  if ( !(unsigned int)bDrvDisplayIOCtl(RemoteHDEV, a2, a3) )
    return 3221880856LL;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0LL);
  return 0LL;
}
