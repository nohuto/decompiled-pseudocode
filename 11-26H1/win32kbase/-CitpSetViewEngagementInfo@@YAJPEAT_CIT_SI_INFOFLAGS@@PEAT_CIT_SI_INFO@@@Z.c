/*
 * XREFs of ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1401B6FE8
 * Callers:
 *     CitSetInfo @ 0x1400D5810 (CitSetInfo.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14005831C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140198440 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14019C1D0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401B6974 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401C5030 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401C54E0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpSetViewEngagementInfo(union _CIT_SI_INFOFLAGS *a1, __int128 **a2, int a3)
{
  struct _CIT_IMPACT_CONTEXT *v4; // rdi
  __int128 *v5; // rbx
  __int64 v6; // r9
  struct tagPROCESSINFO *ProcessInfo; // rax
  struct tagPROCESSINFO *v8; // rbx
  struct _CIT_INTERACTION_SUMMARY *v9; // rax
  int ProcessSessionId; // ebx
  __int64 v11; // rcx
  __int64 ProcessWin32Process; // rax
  struct tagPROCESSINFO ***v13; // rbx
  struct _CIT_INTERACTION_SUMMARY *v14; // rax
  __int128 v16; // [rsp+40h] [rbp-68h]
  _BYTE v17[8]; // [rsp+50h] [rbp-58h] BYREF
  int v18; // [rsp+58h] [rbp-50h]
  PEPROCESS Process; // [rsp+B0h] [rbp+8h] BYREF

  Process = a1;
  v4 = *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 18952) + 32LL);
  v5 = *a2;
  ProbeForRead(v5, 1uLL, 4u);
  v16 = *v5;
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    CLockProcessByPid::CLockProcessByPid((__int64)v17, SDWORD2(v16), 0x2000, v6, 1, 0LL);
    if ( v18 >= 0 )
    {
      ProcessInfo = (struct tagPROCESSINFO *)CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v17);
      v8 = ProcessInfo;
      if ( ProcessInfo )
      {
        if ( CitpProcessEnsureContext(ProcessInfo) )
        {
          v9 = CitpInteractionSummaryEnsure(v4, *((struct tagPROCESSINFO ***)v8 + 114), 1);
          if ( v9 )
            *((_QWORD *)v9 + 2) |= v16;
          **((_QWORD **)v8 + 114) = v16;
        }
      }
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v17);
  }
  else
  {
    Process = 0LL;
    if ( PsLookupProcessByProcessId((HANDLE)SDWORD2(v16), &Process) >= 0 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(Process);
      if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId(v11) )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Process);
        v13 = (struct tagPROCESSINFO ***)ProcessWin32Process;
        if ( ProcessWin32Process )
          v13 = (struct tagPROCESSINFO ***)(-(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process);
        if ( v13 && CitpProcessEnsureContext((struct tagPROCESSINFO *)v13) )
        {
          v14 = CitpInteractionSummaryEnsure(v4, v13[114], 1);
          if ( v14 )
            *((_QWORD *)v14 + 2) |= v16;
          *v13[114] = (struct tagPROCESSINFO *)v16;
        }
      }
      ObfDereferenceObject(Process);
    }
  }
  return 0LL;
}
