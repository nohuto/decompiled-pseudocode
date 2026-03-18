/*
 * XREFs of ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401D80E8
 * Callers:
 *     UserGlobalAtomTableCallout @ 0x1401AAD60 (UserGlobalAtomTableCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ReferenceWindowStation @ 0x140108B6C (ReferenceWindowStation.c)
 *     W32GetThreadWin32Thread @ 0x14011A324 (W32GetThreadWin32Thread.c)
 */

__int64 UserGlobalAtomTableCallout_Old(void)
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 ThreadWin32Thread; // rax
  int v3; // edx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // rdi
  char v7; // si
  char v8; // bp
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  _QWORD *i; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessJob; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  __int64 ProcessWin32WindowStation; // rax
  __int64 v21; // r8
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0LL;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
  v6 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(ThreadWin32Thread + 520), 0, 0) & 0x20000000) != 0 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 456) + 752LL);
      if ( (*(_DWORD *)(v4 + 32) & 0x20) != 0 )
      {
        v7 = 1;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
          || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v8 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
          v7 = 0;
        if ( v8 || v7 )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v3, v5);
          LOBYTE(v10) = v7;
          LOBYTE(v11) = v8;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v11,
            v10,
            *(_QWORD *)(UserSessionState + 69136),
            5,
            3,
            37,
            (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids,
            v6);
        }
        i = *(_QWORD **)(*(_QWORD *)(v6 + 456) + 752LL);
        return i[3];
      }
    }
  }
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessJob = PsGetProcessJob(CurrentProcess);
  v16 = ProcessJob;
  if ( !v6 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
  {
    for ( i = *(_QWORD **)(W32GetUserSessionState(v15, v17, v18) + 69088); i && i[1] != v16; i = (_QWORD *)*i )
      ;
    return i[3];
  }
  v19 = PsGetCurrentProcess(v15);
  ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v19);
  if ( (int)ReferenceWindowStation((__int64)CurrentThread, ProcessWin32WindowStation, v21, (__int64)&v23) >= 0 )
    return *(_QWORD *)(v23 + 136);
  return v0;
}
