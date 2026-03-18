/*
 * XREFs of ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x14011CF74
 * Callers:
 *     ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x14015F654 (-HasRestorableState@CRecalcProp@@AEAA_NXZ.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14011D0A0 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

struct CRecalcState *__fastcall CRecalcProp::FindRestorableRecalcState(const struct tagWND **this)
{
  __int64 v2; // rdx
  const struct tagWND *v3; // r8
  char v4; // cl
  CRecalcState *i; // rbx
  char v7; // bl
  char v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx

  if ( IsWindowCloaked(this[2]) )
    return 0LL;
  v4 = *(_BYTE *)(*((_QWORD *)v3 + 5) + 31LL);
  if ( (v4 & 0x10) == 0 )
  {
    v7 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v8 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v7 = 0;
    }
    if ( v8 || v7 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v2);
      LOBYTE(v10) = v7;
      LOBYTE(v11) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        7,
        65,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
    return 0LL;
  }
  if ( (v4 & 0x20) == 0 || !CRecalcState::ShouldRestoreWindowToState(this[4], v3) )
  {
    for ( i = this[5]; i; i = (CRecalcState *)*((_QWORD *)i + 1) )
    {
      if ( CRecalcState::ShouldRestoreWindowToState(i, this[2]) )
        return i;
    }
    return 0LL;
  }
  return this[4];
}
