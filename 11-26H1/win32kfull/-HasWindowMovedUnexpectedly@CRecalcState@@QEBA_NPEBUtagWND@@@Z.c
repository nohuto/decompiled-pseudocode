/*
 * XREFs of ?HasWindowMovedUnexpectedly@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14015F218
 * Callers:
 *     ?ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x14015EE84 (-ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddddddddddd @ 0x140247DD8 (WPP_RECORDER_AND_TRACE_SF_dddddddddddd.c)
 */

char __fastcall CRecalcState::HasWindowMovedUnexpectedly(CRecalcState *this, const struct tagWND *a2)
{
  __int64 v2; // rdx
  bool v4; // r12
  bool v5; // r13
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // r8d
  __int128 v9; // [rsp+A0h] [rbp-38h]

  v9 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
  if ( *((_BYTE *)this + 60) )
    return 0;
  v2 = v9 - *(_QWORD *)((char *)this + 28);
  if ( !v2 )
    v2 = *((_QWORD *)&v9 + 1) - *(_QWORD *)((char *)this + 36);
  if ( !v2 )
    return 0;
  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(this, WPP_GLOBAL_Control);
    v7 = DWORD2(v9);
    v8 = v9;
    LOBYTE(v7) = v4;
    LOBYTE(v8) = v5;
    WPP_RECORDER_AND_TRACE_SF_dddddddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v8,
      *(_QWORD *)(UserSessionState + 69152));
  }
  return 1;
}
