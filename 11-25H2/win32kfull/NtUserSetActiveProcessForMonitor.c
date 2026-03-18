/*
 * XREFs of NtUserSetActiveProcessForMonitor @ 0x14024D090
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     LockProcessByClientId @ 0x1400D8B9C (LockProcessByClientId.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14023A1A0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     xxxSetActivePpiForMonitor @ 0x14026B544 (xxxSetActivePpiForMonitor.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027745C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x14027A188 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSetActiveProcessForMonitor(int a1, __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 ProcessInfo; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *ProcessWin32Process; // rax
  _BYTE v20[8]; // [rsp+38h] [rbp-9h] BYREF
  __int64 v21; // [rsp+40h] [rbp-1h]
  _BYTE v22[24]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v23; // [rsp+60h] [rbp+1Fh]
  PVOID Object; // [rsp+B8h] [rbp+77h] BYREF

  Object = 0LL;
  v3 = (void *)a1;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  v7 = PtiCurrent(v6, v5);
  LOBYTE(v8) = IAMThreadAccessGranted(v7);
  if ( !v8 )
  {
    v10 = *((_QWORD *)PtiCurrent(v10, v9) + 62);
    if ( *(_QWORD *)(*(_QWORD *)(v10 + 8) + 168LL) )
    {
      v11 = 5;
LABEL_4:
      v12 = 0;
      UserSetLastError(v11);
      goto LABEL_23;
    }
  }
  if ( a2 )
  {
    v4 = ValidateHmonitor(a2);
    if ( !v4 )
    {
LABEL_7:
      v11 = 87;
      goto LABEL_4;
    }
  }
  v12 = 1;
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v10) )
  {
    CLockProcessByPid::CLockProcessByPid(v22, (unsigned int)v3, 0x2000LL);
    if ( !v23 )
    {
      v12 = 0;
      UserSetLastError(87);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v22, v13);
      goto LABEL_23;
    }
    ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v22);
    if ( !ProcessInfo )
    {
      v12 = 0;
      UserSetLastError(87);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v22, v16);
      goto LABEL_21;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v22, v14);
  }
  else
  {
    if ( (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) < 0 )
      goto LABEL_7;
    ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Object);
    ProcessInfo = (unsigned __int64)ProcessWin32Process;
    if ( !ProcessWin32Process || !*ProcessWin32Process )
    {
      v12 = 0;
      UserSetLastError(87);
      goto LABEL_21;
    }
  }
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v17) )
  {
    v21 = 0LL;
    v20[0] = 0;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v20);
    xxxSetActivePpiForMonitor(ProcessInfo, v4);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20);
  }
  else
  {
    xxxSetActivePpiForMonitor(ProcessInfo, v4);
  }
LABEL_21:
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_23:
  LeaveCrit(0LL);
  return v12;
}
