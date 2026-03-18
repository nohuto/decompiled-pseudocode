/*
 * XREFs of ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A5DE4
 * Callers:
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007EE6C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 *     NtMITSetInputDelegationMode @ 0x14016E740 (NtMITSetInputDelegationMode.c)
 *     NtUserCheckProcessSession @ 0x14016ECA0 (NtUserCheckProcessSession.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z @ 0x1401A5FB0 (--0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401C0060 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HasPrivilege @ 0x1401AF490 (HasPrivilege.c)
 */

__int64 __fastcall CLockProcessByPid::CLockProcessByPid(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  _QWORD *v6; // rdi
  int ProcessSessionId; // esi
  NTSTATUS v9; // r14d
  __int64 ProcessSequenceNumber; // rax
  char v11; // al
  ULONG v12; // edx
  NTSTATUS v13; // eax
  int v14; // eax
  struct tagTHREADINFO *v15; // rax
  PEPROCESS Process; // [rsp+60h] [rbp+20h] BYREF
  void *Handle; // [rsp+68h] [rbp+28h] BYREF

  *(_QWORD *)(a1 + 24) = 0LL;
  v6 = (_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 20) = a5;
  ProcessSessionId = -1;
  *(_QWORD *)a1 = a2;
  Process = 0LL;
  Handle = 0LL;
  *(_DWORD *)(a1 + 40) = -1;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = 512;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v9 = PsLookupProcessByProcessId(*(HANDLE *)a1, &Process);
  if ( v9 >= 0 )
    ProcessSessionId = PsGetProcessSessionIdEx(Process);
  else
    Process = 0LL;
  *(_DWORD *)(a1 + 8) = v9;
  if ( v9 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 && (unsigned int)W32GetCurrentWin32kSessionId() != ProcessSessionId )
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
    v11 = HasPrivilege(20LL);
    v12 = *(_DWORD *)(a1 + 16) & 0xFFFFFBFF;
    if ( !v11 )
      v12 = *(_DWORD *)(a1 + 16);
    v13 = ObOpenObjectByPointer(Process, v12, 0LL, *(_DWORD *)(a1 + 12), (POBJECT_TYPE)PsProcessType, v11 ^ 1, &Handle);
    *(_DWORD *)(a1 + 8) = v13;
    if ( v13 < 0 )
    {
LABEL_21:
      ObfDereferenceObject(Process);
    }
    else
    {
LABEL_19:
      *(_QWORD *)(a1 + 24) = Process;
      *(_QWORD *)(a1 + 32) = Handle;
      v14 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 40) = ProcessSessionId;
      if ( (v14 & 8) != 0 )
      {
        v15 = PtiCurrent();
        *v6 = *((_QWORD *)v15 + 48);
        *((_QWORD *)v15 + 48) = v6;
        v6[2] = _lambda_02739f59c5c72c5f20f913f1c43e5320_::_lambda_invoker_cdecl_;
        v6[1] = a1;
      }
    }
  }
  return a1;
}
