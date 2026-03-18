/*
 * XREFs of ?SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z @ 0x1402DE6F4
 * Callers:
 *     NtUserSuppressWindowDisplayChange @ 0x1402C01E0 (NtUserSuppressWindowDisplayChange.c)
 * Callees:
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402DECA0 (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqs @ 0x1402E11C8 (WPP_RECORDER_AND_TRACE_SF_sqs.c)
 */

void __fastcall DesktopRecalc::SuppressWindowDisplayChangeWorker(DesktopRecalc *this, struct tagWND *a2)
{
  char v2; // r15
  int v3; // esi
  bool v5; // bp
  bool v6; // r14
  __int64 UserSessionState; // rax
  const char *v8; // rdx
  int v9; // r8d
  int v10; // eax

  v2 = (char)a2;
  v3 = *((_DWORD *)this + 95) & 0x10;
  v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    v8 = "Enabling";
    LOBYTE(v9) = v6;
    LOBYTE(v8) = v5;
    WPP_RECORDER_AND_TRACE_SF_sqs(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v8,
      v9,
      *(_QWORD *)(UserSessionState + 69152));
  }
  v10 = *((_DWORD *)this + 95);
  if ( v2 )
  {
    *((_DWORD *)this + 95) = v10 | 0x10;
  }
  else
  {
    *((_DWORD *)this + 95) = v10 & 0xFFFFFFEF;
    if ( v3 )
      CRecalcProp::s_OnRecalcReenabled(this);
  }
}
