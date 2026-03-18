/*
 * XREFs of ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007EE6C
 * Callers:
 *     CitSetInfo @ 0x14007D270 (CitSetInfo.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14004A560 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x14007D418 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x140161A8C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401A17C0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A5DE4 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401AA348 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401B6B20 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

__int64 __fastcall CitpSetViewEngagementInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v3; // rdi
  struct tagPROCESSINFO *ProcessInfo; // rax
  struct tagPROCESSINFO *v5; // rbx
  struct _CIT_INTERACTION_SUMMARY *v6; // rax
  int ProcessSessionId; // ebx
  __int64 ProcessWin32Process; // rax
  struct tagPROCESSINFO ***v9; // rbx
  struct _CIT_INTERACTION_SUMMARY *v10; // rax
  __int128 v12; // [rsp+38h] [rbp-70h]
  _BYTE v13[8]; // [rsp+50h] [rbp-58h] BYREF
  int v14; // [rsp+58h] [rbp-50h]
  PEPROCESS Process; // [rsp+B0h] [rbp+8h] BYREF

  Process = a1;
  v3 = *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912) + 32LL);
  if ( (*(_QWORD *)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = *(_OWORD *)*(_QWORD *)a2;
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    CLockProcessByPid::CLockProcessByPid(v13, SDWORD2(v12), 0x2000LL);
    if ( v14 >= 0 )
    {
      ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v13);
      v5 = ProcessInfo;
      if ( ProcessInfo )
      {
        if ( CitpProcessEnsureContext(ProcessInfo) )
        {
          v6 = CitpInteractionSummaryEnsure(v3, *((struct tagPROCESSINFO ***)v5 + 114), 1);
          if ( v6 )
            *((_QWORD *)v6 + 2) |= v12;
          **((_QWORD **)v5 + 114) = v12;
        }
      }
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v13);
  }
  else
  {
    Process = 0LL;
    if ( PsLookupProcessByProcessId((HANDLE)SDWORD2(v12), &Process) >= 0 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(Process);
      if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId() )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Process);
        v9 = (struct tagPROCESSINFO ***)ProcessWin32Process;
        if ( ProcessWin32Process )
          v9 = (struct tagPROCESSINFO ***)(-(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process);
        if ( v9 && CitpProcessEnsureContext((struct tagPROCESSINFO *)v9) )
        {
          v10 = CitpInteractionSummaryEnsure(v3, v9[114], 1);
          if ( v10 )
            *((_QWORD *)v10 + 2) |= v12;
          *v9[114] = (struct tagPROCESSINFO *)v12;
        }
      }
      ObfDereferenceObject(Process);
    }
  }
  return 0LL;
}
