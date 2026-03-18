/*
 * XREFs of ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B5AC4
 * Callers:
 *     UserGlobalAtomTableCallout @ 0x14009CF40 (UserGlobalAtomTableCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ReferenceWindowStation @ 0x1400CCA44 (ReferenceWindowStation.c)
 *     IsProcessWin32kLockedOut @ 0x14015D930 (IsProcessWin32kLockedOut.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x1401973A0 (ApiSetIsCurrentProcessWinstaLocked.c)
 *     IsModerncoreAtomTableSupported @ 0x14023EF58 (IsModerncoreAtomTableSupported.c)
 *     ModerncoreAtomTable @ 0x14023F134 (ModerncoreAtomTable.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 UserGlobalAtomTableCallout_Old(void)
{
  __int64 v0; // rbx
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  char v7; // si
  char v8; // bp
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  _QWORD *i; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessJob; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  int (*v18)(void); // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int (*v21)(void); // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 ProcessWin32WindowStation; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0LL;
  v32 = 0LL;
  v1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    v6 = *ThreadWin32Thread;
    v1 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 528), 0, 0) & 0x20000000) != 0 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(v6 + 464) + 752LL);
        if ( (*(_DWORD *)(v5 + 24) & 0x20) != 0 )
        {
          v7 = 1;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
            || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v8 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
            v7 = 0;
          if ( v8 || v7 )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
            LOBYTE(v10) = v7;
            LOBYTE(v11) = v8;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v11,
              v10,
              *(_QWORD *)(UserSessionState + 69144),
              5,
              3,
              37,
              (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids,
              v6);
          }
          i = *(_QWORD **)(*(_QWORD *)(v6 + 464) + 752LL);
          return i[2];
        }
      }
    }
  }
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessJob = PsGetProcessJob(CurrentProcess);
  v17 = ProcessJob;
  if ( !v1 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
  {
    v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 48) + 632LL);
    if ( v18 && v18() >= 0 )
    {
      for ( i = *(_QWORD **)(W32GetUserSessionState(v20, v19) + 69096); i && i[1] != v17; i = (_QWORD *)*i )
        ;
      return i[2];
    }
    if ( IsProcessWin32kLockedOut((void *)0xFFFFFFFFFFFFFFFFLL) )
    {
      UserSetLastError(5);
      return v0;
    }
  }
  v21 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 48) + 3520LL);
  if ( v21 )
  {
    if ( v21() >= 0 )
    {
      v24 = PsGetCurrentProcess(v23, v22);
      ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v24);
      if ( (int)ReferenceWindowStation((__int64)CurrentThread, ProcessWin32WindowStation, v26, (__int64)&v32) >= 0 )
        return *(_QWORD *)(v32 + 168);
    }
  }
  if ( (IsProcessWin32kLockedOut((void *)0xFFFFFFFFFFFFFFFFLL)
     || (CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v27)) == 0LL
     || !*CurrentProcessWin32Process
     || !(unsigned int)ApiSetIsCurrentProcessWinstaLocked(v30, v29))
    && (int)IsModerncoreAtomTableSupported() >= 0 )
  {
    return ModerncoreAtomTable();
  }
  return v0;
}
