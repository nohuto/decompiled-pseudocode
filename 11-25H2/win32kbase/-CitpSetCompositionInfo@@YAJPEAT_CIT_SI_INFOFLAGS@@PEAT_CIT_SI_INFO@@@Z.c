/*
 * XREFs of ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007D4BC
 * Callers:
 *     CitSetInfo @ 0x14007D270 (CitSetInfo.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14004A560 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x14007D418 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x14007D830 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x140161A8C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401A17C0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z @ 0x1401A5FB0 (--0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401AA348 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401B6B20 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

__int64 __fastcall CitpSetCompositionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  const char *v7; // rdx
  __int64 v9; // r14
  __int64 v10; // r15
  unsigned __int16 i; // di
  struct tagPROCESSINFO *ProcessInfo; // rax
  struct tagPROCESSINFO *v13; // rbx
  struct _CIT_INTERACTION_SUMMARY *v14; // rax
  struct _CIT_INTERACTION_SUMMARY *v15; // r9
  int ProcessSessionId; // ebx
  __int64 ProcessWin32Process; // rax
  struct tagPROCESSINFO ***v18; // rbx
  struct _CIT_INTERACTION_SUMMARY *v19; // rax
  struct _CIT_INTERACTION_SUMMARY *v20; // r9
  __int128 v21; // [rsp+28h] [rbp-90h]
  __int64 v22; // [rsp+38h] [rbp-80h]
  _BYTE v23[8]; // [rsp+40h] [rbp-78h] BYREF
  int v24; // [rsp+48h] [rbp-70h]
  __int64 v25; // [rsp+58h] [rbp-60h]
  PEPROCESS Process; // [rsp+D0h] [rbp+18h] BYREF

  v4 = *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912) + 32LL);
  if ( !UserIsCurrentProcessDwm(v6, v5) )
    return 3221225506LL;
  v9 = *(_QWORD *)a2;
  v10 = *((unsigned __int16 *)a1 + 1);
  for ( i = 0; i < (unsigned __int16)v10; ++i )
  {
    if ( (unsigned __int64)(24 * v10 - 1) > 0xFFFE )
    {
      CitpLogFailureWorker(-1073741823, v7, 0x1206u);
      return 3221225473LL;
    }
    if ( (v9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = *(_OWORD *)(v9 + 24LL * i);
    v22 = *(_QWORD *)(v9 + 24LL * i + 16);
    if ( (_QWORD)v21 )
    {
      if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
      {
        CLockProcessByPid::CLockProcessByPid(v23, (int)v22, 3LL, *((_QWORD *)&v21 + 1));
        if ( v24 >= 0 )
        {
          PsUpdateComponentPower(v25, 7LL);
          ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v23);
          v13 = ProcessInfo;
          if ( ProcessInfo )
          {
            if ( CitpProcessEnsureContext(ProcessInfo) )
            {
              v14 = CitpInteractionSummaryEnsure(v4, *((struct tagPROCESSINFO ***)v13 + 114), 4);
              v15 = v14;
              if ( v14 )
              {
                if ( (_WORD)v21 )
                  CitpStatIncrement((unsigned __int16 *)v14 + 54, 1u);
                if ( WORD1(v21) )
                  CitpStatIncrement((unsigned __int16 *)v15 + 55, 1u);
                if ( WORD2(v21) )
                  CitpStatIncrement((unsigned __int16 *)v15 + 56, 1u);
              }
            }
          }
        }
        CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v23);
      }
      else
      {
        Process = 0LL;
        if ( PsLookupProcessByProcessId((HANDLE)(int)v22, &Process) >= 0 )
        {
          if ( PsGetProcessSequenceNumber(Process) == *((_QWORD *)&v21 + 1) )
          {
            ProcessSessionId = PsGetProcessSessionIdEx(Process);
            if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId() )
            {
              PsUpdateComponentPower(Process, 7LL);
              ProcessWin32Process = PsGetProcessWin32Process(Process);
              v18 = (struct tagPROCESSINFO ***)ProcessWin32Process;
              if ( ProcessWin32Process )
                v18 = (struct tagPROCESSINFO ***)(-(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process);
              if ( v18 )
              {
                if ( CitpProcessEnsureContext((struct tagPROCESSINFO *)v18) )
                {
                  v19 = CitpInteractionSummaryEnsure(v4, v18[114], 4);
                  v20 = v19;
                  if ( v19 )
                  {
                    if ( (_WORD)v21 )
                      CitpStatIncrement((unsigned __int16 *)v19 + 54, 1u);
                    if ( WORD1(v21) )
                      CitpStatIncrement((unsigned __int16 *)v20 + 55, 1u);
                    if ( WORD2(v21) )
                      CitpStatIncrement((unsigned __int16 *)v20 + 56, 1u);
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
  return 0LL;
}
