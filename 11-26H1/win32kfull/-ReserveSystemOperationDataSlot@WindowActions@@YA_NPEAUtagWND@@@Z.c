/*
 * XREFs of ?ReserveSystemOperationDataSlot@WindowActions@@YA_NPEAUtagWND@@@Z @ 0x1402E2E58
 * Callers:
 *     NtUserShellSetWindowPos @ 0x1402BF280 (NtUserShellSetWindowPos.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x140289258 (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 */

bool __fastcall WindowActions::ReserveSystemOperationDataSlot(WindowActions *this, struct tagWND *a2)
{
  struct CInterceptWindowProp *v3; // rax
  __int64 v4; // rdx
  char v5; // di
  struct CInterceptWindowProp *v6; // rsi
  char v7; // bp
  bool v8; // r14
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // edx

  v3 = CInterceptWindowProp::GetOrCreate(this);
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = *(_QWORD *)this;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
      LOBYTE(v11) = v8;
      LOBYTE(v12) = v7;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        4,
        23,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v9);
    }
    v13 = *((_DWORD *)v6 + 13);
    if ( (unsigned int)(v13 + *((_DWORD *)v6 + 12)) < 0xA )
    {
      v5 = 1;
      *((_DWORD *)v6 + 13) = v13 + 1;
    }
    LOBYTE(v3) = v5;
  }
  return (char)v3;
}
