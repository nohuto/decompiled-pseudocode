/*
 * XREFs of ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x14018D9E0
 * Callers:
 *     NtUserCanCurrentThreadChangeForeground @ 0x140294B40 (NtUserCanCurrentThreadChangeForeground.c)
 *     NtUserShellSetWindowPos @ 0x1402A1990 (NtUserShellSetWindowPos.c)
 *     ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C1D24 (-PositionWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__.c)
 * Callees:
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x14018DBC4 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x140277714 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 */

char __fastcall RunForegroundAccessCheck(__int64 a1, __int64 a2)
{
  char v2; // di
  char v3; // r15
  const char *v4; // r12
  char v6; // bl
  __int64 v7; // rcx
  bool v8; // si
  bool v9; // bp
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // r9
  const char *v14; // rax
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx

  v2 = 1;
  v3 = a2;
  v4 = "Success";
  v6 = 1;
  if ( (a2 & 1) == 0 )
    goto LABEL_12;
  v6 = anonymous_namespace_::CheckCanonicalForegroundAccess(0LL);
  v8 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    v7 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
    if ( (v7 & 2) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      v8 = 1;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v7, a2);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    v13 = *(_QWORD *)(UserSessionState + 69160);
    v14 = "Success";
    if ( !v6 )
      v14 = "Failed";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      v13,
      4,
      2,
      70,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
      (__int64)v14);
  }
  if ( v6 )
  {
LABEL_12:
    if ( (v3 & 2) != 0 )
    {
      v6 = a1 && (unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2LL);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v2 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v2;
        if ( !v6 )
          v4 = "Failed";
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v19,
          v18,
          *(_QWORD *)(v17 + 69160),
          4,
          2,
          71,
          (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
          (__int64)v4);
      }
    }
  }
  return v6;
}
