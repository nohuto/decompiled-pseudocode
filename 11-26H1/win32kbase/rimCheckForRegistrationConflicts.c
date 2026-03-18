/*
 * XREFs of rimCheckForRegistrationConflicts @ 0x1400D7DD4
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMIsCurrentProcessTrusted @ 0x1400D7D30 (RIMIsCurrentProcessTrusted.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x140202C0C (WPP_RECORDER_AND_TRACE_SF_qqqd.c)
 */

__int64 __fastcall rimCheckForRegistrationConflicts(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  unsigned int v5; // r14d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  _QWORD *i; // rbx
  int v12; // r8d
  _QWORD *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  char v18; // r15
  bool v19; // r12
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 56);
  v5 = 0;
  for ( i = *(_QWORD **)(W32GetUserSessionState(v7, v6, v8) + 120);
        i != (_QWORD *)(W32GetUserSessionState(v10, v9, v12) + 120);
        i = (_QWORD *)*i )
  {
    v13 = i - 2;
    if ( !*((_BYTE *)i + 64) && !*((_BYTE *)v13 + 81) && (a1 & *((_DWORD *)v13 + 21)) != 0 && *((_DWORD *)v13 + 264) )
    {
      if ( !(unsigned int)RIMIsCurrentProcessTrusted() || (v15 = v13[4], v15 == PsGetCurrentProcess(v14)) )
      {
        v5 = 1;
        v10 = (int)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v18 = 0;
        }
        v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v12);
          LOBYTE(v21) = v19;
          LOBYTE(v22) = v18;
          WPP_RECORDER_AND_TRACE_SF_qqqd(*((_QWORD *)WPP_GLOBAL_Control + 3), v22, v21, *(_QWORD *)(v20 + 69136));
        }
      }
      else
      {
        v5 = 2;
      }
      break;
    }
  }
  v16 = W32GetUserSessionState(v10, v9, v12);
  RIMUnlockExclusive(v16 + 56);
  return v5;
}
