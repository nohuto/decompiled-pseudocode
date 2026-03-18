/*
 * XREFs of ?SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402CCD34
 * Callers:
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402D042C (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x1402CB58C (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
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
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v4 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v4 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v3 = 0;
    }
    if ( v4 || v3 )
    {
      v5 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(0LL, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v7) = v3;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        4,
        18,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
        v5);
    }
  }
}
