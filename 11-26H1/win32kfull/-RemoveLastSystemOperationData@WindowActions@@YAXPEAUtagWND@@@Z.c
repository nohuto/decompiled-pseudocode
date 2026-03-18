/*
 * XREFs of ?RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402E2C88
 * Callers:
 *     NtUserApplyWindowAction @ 0x1402AF630 (NtUserApplyWindowAction.c)
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402E4AD0 (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14004E2F8 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z @ 0x140289418 (--$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z.c)
 *     ?RemoveEntry@CInterceptWindowProp@@AEAAXPEAUSystemOperationActionData@1@@Z @ 0x1402E2C40 (-RemoveEntry@CInterceptWindowProp@@AEAAXPEAUSystemOperationActionData@1@@Z.c)
 */

void __fastcall WindowActions::RemoveLastSystemOperationData(WindowActions *this, struct tagWND *a2)
{
  __int64 v3; // rdx
  CInterceptWindowProp *v4; // rdi
  char v5; // si
  char v6; // r14
  char v7; // bp
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  char v13; // bp
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  CInterceptWindowProp *v18; // [rsp+88h] [rbp+10h] BYREF

  v18 = 0LL;
  if ( CWindowProp::GetProp<CInterceptWindowProp>((__int64)this, (__int64 *)&v18) )
  {
    v4 = v18;
    if ( *((CInterceptWindowProp **)v18 + 4) != (CInterceptWindowProp *)((char *)v18 + 32) )
      CInterceptWindowProp::RemoveEntry(v18, *((struct CInterceptWindowProp::SystemOperationActionData ****)v18 + 5));
    v5 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v6 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v7 = 0;
    }
    if ( v6 || v7 )
    {
      v8 = *(_QWORD *)this;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
      LOBYTE(v10) = v7;
      LOBYTE(v11) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        28,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v8);
    }
    if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
      && !(*((_DWORD *)v4 + 12) + *((_DWORD *)v4 + 13)) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v13 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v5 = 0;
      }
      if ( v13 || v5 )
      {
        v14 = *(_QWORD *)this;
        v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
        LOBYTE(v16) = v5;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(v15 + 69152),
          5,
          4,
          29,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v14);
      }
      CWindowProp::RemoveAndDeleteProp(v4);
    }
  }
}
