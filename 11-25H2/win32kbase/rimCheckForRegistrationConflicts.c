/*
 * XREFs of rimCheckForRegistrationConflicts @ 0x1400CD204
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     RIMIsCurrentProcessTrusted @ 0x1400CD380 (RIMIsCurrentProcessTrusted.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x1401DC8C0 (WPP_RECORDER_AND_TRACE_SF_qqqd.c)
 */

__int64 __fastcall rimCheckForRegistrationConflicts(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 UserSessionState; // rax
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  void *v8; // rcx
  _QWORD *i; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // rax
  char v13; // r15
  bool v14; // r12
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 56);
  v4 = 0;
  for ( i = *(_QWORD **)(W32GetUserSessionState(v6, v5) + 120);
        i != (_QWORD *)(W32GetUserSessionState(v8, v7) + 120);
        i = (_QWORD *)*i )
  {
    v10 = i - 2;
    if ( !*((_BYTE *)i + 64) && !*((_BYTE *)v10 + 81) && (v2 & *((_DWORD *)v10 + 21)) != 0 && *((_DWORD *)v10 + 264) )
    {
      if ( !(unsigned int)RIMIsCurrentProcessTrusted() || v10[4] == PsGetCurrentProcess() )
      {
        v4 = 1;
        v8 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v13 = 0;
        }
        v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
          LOBYTE(v16) = v14;
          LOBYTE(v17) = v13;
          WPP_RECORDER_AND_TRACE_SF_qqqd(*((_QWORD *)WPP_GLOBAL_Control + 3), v17, v16, *(_QWORD *)(v15 + 69144));
        }
      }
      else
      {
        v4 = 2;
      }
      break;
    }
  }
  v11 = W32GetUserSessionState(v8, v7);
  RIMUnlockExclusive(v11 + 56);
  return v4;
}
