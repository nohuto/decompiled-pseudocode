/*
 * XREFs of PatchThreadWindows @ 0x1402B6750
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     DisassociateShellFrameAppThreads @ 0x14019652C (DisassociateShellFrameAppThreads.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LONG_PTR __fastcall PatchThreadWindows(struct tagTHREADINFO *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  LONG_PTR result; // rax
  unsigned __int64 v12; // rbx
  struct tagWND **v13; // rsi
  struct tagWND *v14; // r14
  __int64 v15; // rdi
  LONG_PTR v16; // rcx
  __int64 v17; // rdx

  DisassociateShellFrameAppThreads(a1);
  UserSessionState = W32GetUserSessionState(v3, v2);
  v5 = *(_QWORD *)(UserSessionState + 19888);
  v8 = v5 + 32LL * *(unsigned int *)(W32GetUserSessionState(v7, v6) + 19816);
  result = W32GetUserSessionState(v10, v9);
  v12 = *(_QWORD *)(UserSessionState + 19888);
  v13 = *(struct tagWND ***)(result + 19832);
  if ( v12 <= v8 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v12 + 24) == 1 && v13[1] == a1 )
      {
        v14 = *v13;
        v15 = (__int64)*v13 + 40;
        if ( (*(_BYTE *)(v12 + 25) & 1) == 0 )
          goto LABEL_8;
        result = *(_QWORD *)v15;
        if ( *(_QWORD *)(*(_QWORD *)v15 + 120LL) || (*(_BYTE *)(result + 18) & 4) == 0 )
          break;
      }
LABEL_13:
      v12 += 32LL;
      v13 += 5;
      if ( v12 > v8 )
        return result;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 5792);
LABEL_8:
    v16 = *(_QWORD *)v15;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 42LL);
    if ( (unsigned __int16)(v17 - 666) > 6u || (_WORD)v17 == 666 )
      *(_QWORD *)(v16 + 120) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)v15 + 120LL) = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v17) + 19872)
                                                      + 8LL * ((*(_WORD *)(*(_QWORD *)v15 + 42LL) & 0x2FFFu) - 666)
                                                      + 272);
    SetOrClrWF(1, v14, 0x204u, 1);
    result = SetOrClrWF(0, v14, 0x208u, 1);
    goto LABEL_13;
  }
  return result;
}
