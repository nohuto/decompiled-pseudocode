/*
 * XREFs of ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401B6974
 * Callers:
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1401B6FE8 (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     NtMITSetInputDelegationMode @ 0x1401B9F60 (NtMITSetInputDelegationMode.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z @ 0x1401C9824 (--0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401CF664 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     _RegisterLogonProcess @ 0x1401D98D0 (_RegisterLogonProcess.c)
 *     NtUserCheckProcessSession @ 0x1401E2390 (NtUserCheckProcessSession.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401E8E40 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     HasPrivilege @ 0x1401D4E00 (HasPrivilege.c)
 */

__int64 __fastcall CLockProcessByPid::CLockProcessByPid(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  _QWORD *v6; // rdi
  int ProcessSessionId; // esi
  void *v9; // rcx
  __int64 v10; // rdx
  NTSTATUS v11; // r14d
  __int64 v12; // rcx
  __int64 ProcessSequenceNumber; // rax
  char v14; // al
  ULONG v15; // edx
  NTSTATUS v16; // eax
  int v17; // eax
  struct tagTHREADINFO *v18; // rax
  PEPROCESS Process; // [rsp+60h] [rbp+20h] BYREF
  void *Handle; // [rsp+68h] [rbp+28h] BYREF

  v6 = (_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 20) = a5;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = 512;
  *(_QWORD *)(a1 + 24) = 0LL;
  ProcessSessionId = -1;
  *(_DWORD *)(a1 + 40) = -1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v9 = *(void **)a1;
  Process = 0LL;
  Handle = 0LL;
  v11 = PsLookupProcessByProcessId(v9, &Process);
  if ( v11 >= 0 )
    ProcessSessionId = PsGetProcessSessionIdEx(Process);
  else
    Process = 0LL;
  *(_DWORD *)(a1 + 8) = v11;
  if ( v11 >= 0 )
  {
    v12 = *(unsigned int *)(a1 + 20);
    if ( (v12 & 1) != 0 && (unsigned int)W32GetCurrentWin32kSessionId(v12) != ProcessSessionId )
      *(_DWORD *)(a1 + 8) = -1073740715;
    if ( (*(_DWORD *)(a1 + 20) & 2) != 0 )
    {
      ProcessSequenceNumber = PsGetProcessSequenceNumber(Process);
      if ( a6 != ProcessSequenceNumber )
        *(_DWORD *)(a1 + 8) = -1073741811;
    }
    if ( (*(_DWORD *)(a1 + 20) & 4) != 0 && (unsigned __int8)PsGetProcessExitProcessCalled(Process) )
      *(_DWORD *)(a1 + 8) = -1073741558;
    if ( *(int *)(a1 + 8) < 0 )
      goto LABEL_21;
    if ( !*(_DWORD *)(a1 + 12) )
      goto LABEL_19;
    v14 = HasPrivilege(20LL);
    v15 = *(_DWORD *)(a1 + 16) & 0xFFFFFBFF;
    if ( !v14 )
      v15 = *(_DWORD *)(a1 + 16);
    v16 = ObOpenObjectByPointer(Process, v15, 0LL, *(_DWORD *)(a1 + 12), (POBJECT_TYPE)PsProcessType, v14 ^ 1, &Handle);
    *(_DWORD *)(a1 + 8) = v16;
    if ( v16 < 0 )
    {
LABEL_21:
      ObfDereferenceObject(Process);
    }
    else
    {
LABEL_19:
      *(_QWORD *)(a1 + 24) = Process;
      *(_QWORD *)(a1 + 32) = Handle;
      v17 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 40) = ProcessSessionId;
      if ( (v17 & 8) != 0 )
      {
        v18 = PtiCurrent(v12, v10);
        *v6 = *((_QWORD *)v18 + 47);
        *((_QWORD *)v18 + 47) = v6;
        v6[2] = _lambda_02739f59c5c72c5f20f913f1c43e5320_::_lambda_invoker_cdecl_;
        v6[1] = a1;
      }
    }
  }
  return a1;
}
