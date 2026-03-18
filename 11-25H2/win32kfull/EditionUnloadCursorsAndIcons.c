/*
 * XREFs of EditionUnloadCursorsAndIcons @ 0x1402001B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CleanupGlobalCursorSizes@@YAXXZ @ 0x140200374 (-CleanupGlobalCursorSizes@@YAXXZ.c)
 */

void __fastcall EditionUnloadCursorsAndIcons(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  v3 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      10,
      (__int64)&WPP_9a7f3f11077d363d0be305331f82773c_Traceguids);
  }
  v8 = 0LL;
  v9 = 0LL;
  v10 = 7LL;
  do
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(v2, a2) + v8 + 32368);
    if ( v11 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
      if ( CurrentProcessWin32Process )
      {
        v22 = -*(_QWORD *)CurrentProcessWin32Process;
        v21 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        CurrentProcessWin32Process &= v21;
      }
      *(_QWORD *)(v11 + 24) = CurrentProcessWin32Process;
      v23 = W32GetUserSessionState(v22, v21);
      HMAssignmentUnlock(v9 + v23 + 32368);
    }
    v9 += 552LL;
    v8 += 552LL;
    --v10;
  }
  while ( v10 );
  v12 = 0LL;
  v13 = 0LL;
  v14 = 19LL;
  do
  {
    v15 = *(_QWORD *)(W32GetUserSessionState(v2, a2) + v12 + 21880);
    if ( v15 )
    {
      v16 = PsGetCurrentProcessWin32Process(v2);
      if ( v16 )
      {
        v18 = -*(_QWORD *)v16;
        v17 = -(__int64)(*(_QWORD *)v16 != 0LL);
        v16 &= v17;
      }
      *(_QWORD *)(v15 + 24) = v16;
      v19 = W32GetUserSessionState(v18, v17);
      HMAssignmentUnlock(v13 + v19 + 21880);
    }
    v13 += 552LL;
    v12 += 552LL;
    --v14;
  }
  while ( v14 );
  CleanupGlobalCursorSizes();
}
