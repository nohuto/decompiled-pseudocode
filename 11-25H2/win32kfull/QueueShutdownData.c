/*
 * XREFs of QueueShutdownData @ 0x1401E4924
 * Callers:
 *     xxxSetInformationThread @ 0x140114240 (xxxSetInformationThread.c)
 *     NtUserShutdownBlockReasonCreate @ 0x140130090 (NtUserShutdownBlockReasonCreate.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x140257214 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

unsigned int *__fastcall QueueShutdownData(__int64 a1, LARGE_INTEGER a2)
{
  unsigned int *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // si
  char v11; // di
  bool v12; // bl
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 UserSessionState; // rax

  result = (unsigned int *)((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(
                             a1,
                             (LARGE_INTEGER)a2.QuadPart);
  if ( *((_QWORD *)result + 7934) )
  {
    if ( a1 == *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19120)
      || a1 == 0xFFFF
      || (v9 = ValidateHwndEx(a1, 0LL, 0LL), v10 = v9, v11 = 1, v9)
      && (v8 = *(_QWORD *)(v9 + 40), *(_DWORD *)(v8 + 236) == 1)
      && (*(_BYTE *)(v8 + 232) & 0x40) == 0 )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      return (unsigned int *)PostEventMessageEx(
                               *(struct tagTHREADINFO **)(*(_QWORD *)(UserSessionState + 63472) + 16LL),
                               *(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 63472) + 16LL) + 472LL),
                               0x13u,
                               *(LARGE_INTEGER **)(UserSessionState + 63472),
                               0x4Au,
                               a2,
                               a1,
                               0LL);
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x400) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      result = &WPP_RECORDER_INITIALIZED;
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        return (unsigned int *)WPP_RECORDER_AND_TRACE_SF_q(
                                 *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                                 v15,
                                 v14,
                                 *(_QWORD *)(v13 + 69160),
                                 4,
                                 11,
                                 33,
                                 (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
                                 v10);
      }
    }
  }
  return result;
}
