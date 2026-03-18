/*
 * XREFs of NtUserEnableIAMAccess @ 0x1401C7600
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _EnableIAMThreadAccess @ 0x14015C51C (_EnableIAMThreadAccess.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(void *Src, int a2)
{
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  char v13; // di
  bool v14; // si
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rcx
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  v4 = 0;
  v20 = 0LL;
  RtlCopyFromUser(&v20, Src, 8uLL);
  v5 = v20;
  v8 = PtiCurrent(v7, v6);
  v9 = (_QWORD *)*((_QWORD *)v8 + 62);
  v10 = v9[1];
  v11 = *(_QWORD *)(v10 + 176);
  if ( *((_QWORD *)v8 + 58) == v11 && v11 && *(_QWORD *)(v10 + 168) )
  {
    v12 = 0;
    if ( v9[36] )
      LOBYTE(v12) = v5 == v9[35];
  }
  else
  {
    v12 = 0;
  }
  if ( v12 )
  {
    v4 = EnableIAMThreadAccess(v8, a2);
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v11);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        2,
        47,
        (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
    }
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v18);
  return v4;
}
