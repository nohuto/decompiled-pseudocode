/*
 * XREFs of ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x14018D958
 * Callers:
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x14018D7E0 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x14018EC0C (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqD @ 0x140238CDC (WPP_RECORDER_AND_TRACE_SF_qqD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140295B28 (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall SetProcessFlags(struct tagW32JOB *a1, struct tagW32JOB **a2)
{
  __int64 v4; // rdx
  bool v5; // r15
  bool v6; // r12
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  unsigned int v10; // edx
  struct tagW32JOB *v11; // rcx
  _BYTE v12[8]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v13; // [rsp+A0h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-60h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_qqD(*((_QWORD *)WPP_GLOBAL_Control + 3), v9, v8, *(_QWORD *)(UserSessionState + 69152));
  }
  if ( a2[94] != a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 369LL);
  v10 = *((_DWORD *)a2 + 3) & 0xFDFFFFFF;
  if ( *((_DWORD *)a1 + 8) )
    v10 = *((_DWORD *)a2 + 3) | 0x2000000;
  *((_DWORD *)a2 + 3) = v10;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*a2, &ApcState);
  v11 = a2[41];
  if ( *((_DWORD *)a1 + 8) )
  {
    while ( v11 )
    {
      *(_DWORD *)(*((_QWORD *)v11 + 64) + 28LL) |= 0x20000000u;
      _InterlockedOr((volatile signed __int32 *)v11 + 130, 0x20000000u);
      v11 = (struct tagW32JOB *)*((_QWORD *)v11 + 87);
    }
    if ( (*((_DWORD *)a1 + 8) & 0x100) != 0 )
      UserDisableImeForProcess((struct tagPROCESSINFO *)a2);
  }
  else
  {
    while ( v11 )
    {
      *(_DWORD *)(*((_QWORD *)v11 + 64) + 28LL) &= ~0x20000000u;
      _InterlockedAnd((volatile signed __int32 *)v11 + 130, 0xDFFFFFFF);
      v11 = (struct tagW32JOB *)*((_QWORD *)v11 + 87);
    }
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v12[0] )
    --*(_DWORD *)(v13 + 28);
}
