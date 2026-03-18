/*
 * XREFs of ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C20D0
 * Callers:
 *     NtUserSetShellWindowEx @ 0x14024E320 (NtUserSetShellWindowEx.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DwmAsyncShellWindowChange @ 0x14017346C (DwmAsyncShellWindowChange.c)
 *     CleanupIAMAccess @ 0x140219550 (CleanupIAMAccess.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNELDESKTOPINFO@@PEAU_HEAD@@@Z @ 0x1402239DC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNE.c)
 *     ?xxxGenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z @ 0x140278B68 (-xxxGenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z.c)
 */

char __fastcall RegisterShell(struct tagWND *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  struct tagWND **v4; // r14
  __int64 v5; // rdx
  bool v6; // si
  bool v7; // di
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rbx
  void *v22; // rax
  __int64 v24; // rdx
  bool v25; // bp
  __int64 v26; // rbx
  __int64 v27; // rax
  __int16 v28; // [rsp+30h] [rbp-48h]
  char v29; // [rsp+40h] [rbp-38h]
  __int128 v30; // [rsp+50h] [rbp-28h] BYREF
  __int64 v31; // [rsp+60h] [rbp-18h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3 = *(_QWORD *)(v1 + 8);
  v4 = (struct tagWND **)(v3 + 168);
  if ( *(_QWORD *)(v3 + 168) )
  {
    UserSetLastError(5);
    v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x1000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = *(_QWORD *)*v4;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    v29 = v8;
    LOBYTE(v11) = v7;
    v12 = *(_QWORD *)(UserSessionState + 69160);
    v28 = 44;
LABEL_30:
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v11,
      v12,
      2,
      13,
      v28,
      (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
      v29);
    return 0;
  }
  if ( !IsTopLevelWindow((__int64)a1) || *((_QWORD *)a1 + 15) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) != 0 )
  {
    UserSetLastError(87);
    v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x1000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v26 = *(_QWORD *)a1;
    v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
    v29 = v26;
    LOBYTE(v11) = v25;
    v12 = *(_QWORD *)(v27 + 69160);
    v28 = 45;
    goto LABEL_30;
  }
  v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
  if ( v14 && (!*(_QWORD *)(v3 + 176) || (*(_BYTE *)(v14 + 808) & 0x30) == 0x20) )
  {
    *(_QWORD *)(v3 + 176) = v14;
    if ( *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19144) )
    {
      if ( v3 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 19144) + 8LL) )
        SynchronizeContext();
    }
  }
  v30 = *(_OWORD *)LockPointer(&v31, v3 + 168, (__int64)a1);
  HMAssignmentLock(&v30, 0LL);
  SetOrClrWF(1, *v4, 0x420u, 1);
  xxxSetWindowPos(*v4, 1LL, 0LL, 0LL, 0, 0, 402451);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v19 = *(__int64 **)v3;
    v20 = *(_QWORD *)a1;
    v21 = **(_QWORD **)v3;
    v22 = (void *)ReferenceDwmApiPort(v18, v19);
    DwmAsyncShellWindowChange(v22, v20, v21);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v1, v17);
  xxxGenerateIAMKey((struct tagDESKTOP *)v1);
  return 1;
}
