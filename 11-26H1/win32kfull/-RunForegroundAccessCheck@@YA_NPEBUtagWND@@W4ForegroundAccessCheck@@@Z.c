/*
 * XREFs of ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1401A21F0
 * Callers:
 *     NtUserCanCurrentThreadChangeForeground @ 0x1401A0EF0 (NtUserCanCurrentThreadChangeForeground.c)
 *     NtUserShellSetWindowPos @ 0x1402BF280 (NtUserShellSetWindowPos.c)
 *     ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402DB62C (-PositionWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__.c)
 * Callees:
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x140192D18 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1401A3834 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
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
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
  {
    v7 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v7 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v8 = 1;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v7, a2);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    v13 = *(_QWORD *)(UserSessionState + 69152);
    v14 = "Success";
    if ( !v6 )
      v14 = "Failed";
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      v13,
      4,
      2,
      70,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
      (__int64)v14);
  }
  if ( v6 )
  {
LABEL_12:
    if ( (v3 & 2) != 0 )
    {
      v6 = a1 && anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v2 = 0;
      }
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v2;
        if ( !v6 )
          v4 = "Failed";
        WPP_RECORDER_AND_TRACE_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(v17 + 69152),
          4,
          2,
          71,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
          (__int64)v4);
      }
    }
  }
  return v6;
}
