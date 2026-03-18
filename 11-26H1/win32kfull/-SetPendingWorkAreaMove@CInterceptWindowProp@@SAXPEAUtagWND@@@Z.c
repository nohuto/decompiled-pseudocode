/*
 * XREFs of ?SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402E392C
 * Callers:
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402627D4 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x140289258 (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 */

void __fastcall CInterceptWindowProp::SetPendingWorkAreaMove(struct tagWND *a1)
{
  struct CInterceptWindowProp *v2; // rax
  char v3; // di
  char v4; // si
  __int64 v5; // rbx
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v2 = CInterceptWindowProp::GetOrCreate(a1);
  if ( v2 )
  {
    v3 = 1;
    *((_BYTE *)v2 + 56) = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v4 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v3 = 0;
    }
    if ( v4 || v3 )
    {
      v5 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(0LL, WPP_GLOBAL_Control);
      LOBYTE(v7) = v3;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        18,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v5);
    }
  }
}
