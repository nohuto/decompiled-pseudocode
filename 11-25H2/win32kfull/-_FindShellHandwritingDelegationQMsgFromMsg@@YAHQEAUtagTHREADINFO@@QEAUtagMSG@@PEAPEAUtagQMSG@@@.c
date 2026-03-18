/*
 * XREFs of ?_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x140136DE4
 * Callers:
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1401371DC (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x140136554 (WPP_RECORDER_AND_TRACE_SF_qDqq.c)
 */

__int64 __fastcall _FindShellHandwritingDelegationQMsgFromMsg(
        struct tagTHREADINFO *const a1,
        struct tagMSG *const a2,
        struct tagQMSG **a3)
{
  __int64 *i; // r9
  bool v5; // r14
  bool v6; // r15
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  for ( i = *(__int64 **)(*((_QWORD *)a1 + 59) + 24LL); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
LABEL_15:
      v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v8) = v6;
        LOBYTE(v9) = v5;
        WPP_RECORDER_AND_TRACE_SF_qDqq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v9,
          v8,
          *(_QWORD *)(UserSessionState + 69160));
      }
      return 0LL;
    }
    if ( *(_DWORD *)a2 == *((_DWORD *)i + 4)
      && *((_DWORD *)i + 6) == *((_DWORD *)a2 + 2)
      && i[4] == *((_QWORD *)a2 + 2)
      && i[8] == *((_QWORD *)a2 + 3)
      && *((_DWORD *)i + 12) == *((_DWORD *)a2 + 8)
      && *((_DWORD *)i + 13) == *((_DWORD *)a2 + 9)
      && *((_DWORD *)i + 14) == *((_DWORD *)a2 + 10) )
    {
      break;
    }
    if ( _bittest((const signed __int32 *)i + 25, 8u) )
      goto LABEL_15;
  }
  if ( !_bittest((const signed __int32 *)i + 25, 8u) )
    i = (__int64 *)*i;
  *a3 = (struct tagQMSG *)i;
  return 1LL;
}
