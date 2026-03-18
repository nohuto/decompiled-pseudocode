/*
 * XREFs of ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400D5A60
 * Callers:
 *     CitSetInfo @ 0x1400D5810 (CitSetInfo.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14005831C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1400D6678 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140198440 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14019C1D0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401C5030 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401C54E0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z @ 0x1401C9824 (--0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z.c)
 */

__int64 __fastcall CitpSetCompositionInfo(union _CIT_SI_INFOFLAGS *a1, volatile void **a2, int a3)
{
  __int64 v5; // r8
  struct _CIT_IMPACT_CONTEXT *v6; // r15
  int v7; // edx
  int v8; // ecx
  const char *v9; // rdx
  char *v10; // r12
  __int64 v11; // r14
  unsigned __int16 i; // di
  int ProcessSessionId; // ebx
  __int64 v14; // rcx
  __int64 ProcessWin32Process; // rax
  struct tagPROCESSINFO ***v16; // rbx
  struct _CIT_INTERACTION_SUMMARY *v17; // rax
  struct _CIT_INTERACTION_SUMMARY *v18; // r9
  struct tagPROCESSINFO *ProcessInfo; // rax
  struct tagPROCESSINFO *v21; // rbx
  struct _CIT_INTERACTION_SUMMARY *v22; // rax
  struct _CIT_INTERACTION_SUMMARY *v23; // r9
  __int128 v24; // [rsp+20h] [rbp-A8h]
  __int64 v25; // [rsp+30h] [rbp-98h]
  _BYTE v26[8]; // [rsp+50h] [rbp-78h] BYREF
  int v27; // [rsp+58h] [rbp-70h]
  __int64 v28; // [rsp+68h] [rbp-60h]
  PEPROCESS Process; // [rsp+E0h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 18952);
  v6 = *(struct _CIT_IMPACT_CONTEXT **)(v5 + 32);
  if ( !UserIsCurrentProcessDwm(v8, v7, v5) )
    return 3221225506LL;
  v10 = (char *)*a2;
  v11 = *((unsigned __int16 *)a1 + 1);
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int16)v11 )
      return 0LL;
    if ( (unsigned __int64)(24 * v11 - 1) > 0xFFFE )
      break;
    ProbeForRead(v10, 1uLL, 4u);
    v24 = *(_OWORD *)&v10[24 * i];
    v25 = *(_QWORD *)&v10[24 * i + 16];
    if ( (_QWORD)v24 )
    {
      if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
      {
        CLockProcessByPid::CLockProcessByPid(v26, (int)v25, 3LL, *((_QWORD *)&v24 + 1));
        if ( v27 >= 0 )
        {
          PsUpdateComponentPower(v28, 7LL);
          ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v26);
          v21 = ProcessInfo;
          if ( ProcessInfo )
          {
            if ( CitpProcessEnsureContext(ProcessInfo) )
            {
              v22 = CitpInteractionSummaryEnsure(v6, *((struct tagPROCESSINFO ***)v21 + 114), 4);
              v23 = v22;
              if ( v22 )
              {
                if ( (_WORD)v24 )
                  CitpStatIncrement((unsigned __int16 *)v22 + 54, 1u);
                if ( WORD1(v24) )
                  CitpStatIncrement((unsigned __int16 *)v23 + 55, 1u);
                if ( WORD2(v24) )
                  CitpStatIncrement((unsigned __int16 *)v23 + 56, 1u);
              }
            }
          }
        }
        CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v26);
      }
      else
      {
        Process = 0LL;
        if ( PsLookupProcessByProcessId((HANDLE)(int)v25, &Process) >= 0 )
        {
          if ( PsGetProcessSequenceNumber(Process) == *((_QWORD *)&v24 + 1) )
          {
            ProcessSessionId = PsGetProcessSessionIdEx(Process);
            if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId(v14) )
            {
              PsUpdateComponentPower(Process, 7LL);
              ProcessWin32Process = PsGetProcessWin32Process(Process);
              v16 = (struct tagPROCESSINFO ***)ProcessWin32Process;
              if ( ProcessWin32Process )
                v16 = (struct tagPROCESSINFO ***)(-(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process);
              if ( v16 )
              {
                if ( CitpProcessEnsureContext((struct tagPROCESSINFO *)v16) )
                {
                  v17 = CitpInteractionSummaryEnsure(v6, v16[114], 4);
                  v18 = v17;
                  if ( v17 )
                  {
                    if ( (_WORD)v24 )
                      CitpStatIncrement((unsigned __int16 *)v17 + 54, 1u);
                    if ( WORD1(v24) )
                      CitpStatIncrement((unsigned __int16 *)v18 + 55, 1u);
                    if ( WORD2(v24) )
                      CitpStatIncrement((unsigned __int16 *)v18 + 56, 1u);
                  }
                }
              }
            }
          }
          ObfDereferenceObject(Process);
        }
      }
    }
  }
  CitpLogFailureWorker(-1073741823, v9, 0x11F5u);
  return 3221225473LL;
}
