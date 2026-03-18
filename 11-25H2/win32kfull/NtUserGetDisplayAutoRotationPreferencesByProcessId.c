/*
 * XREFs of NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x140297650
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1400D8B9C (LockProcessByClientId.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14023A1A0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027745C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x14027A188 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferencesByProcessId(int a1, _DWORD *a2, _DWORD *a3)
{
  void *v5; // rbx
  int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  PVOID v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 ProcessInfo; // rbx
  __int64 v12; // rdx
  __int64 ProcessWin32Process; // rax
  __int64 v15; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v16[24]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+68h] [rbp-40h]
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

  v5 = (void *)a1;
  Object = 0LL;
  v6 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    CLockProcessByPid::CLockProcessByPid((__int64)v16, (unsigned int)v5, 4096, v7, 1);
    if ( !v17 )
    {
      v6 = 0;
      UserSetLastError(87);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v16, v8);
      goto LABEL_20;
    }
    ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v16);
    if ( !ProcessInfo )
    {
      v6 = 0;
      UserSetLastError(5);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v16, v12);
      goto LABEL_18;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v16, v10);
LABEL_7:
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = *(_DWORD *)(ProcessInfo + 904);
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = 0;
    goto LABEL_18;
  }
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) < 0 )
  {
    v6 = 0;
    UserSetLastError(87);
    goto LABEL_20;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  ProcessInfo = ProcessWin32Process;
  if ( ProcessWin32Process )
    ProcessInfo = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  if ( ProcessInfo )
    goto LABEL_7;
  v6 = 0;
  UserSetLastError(5);
LABEL_18:
  v9 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_20:
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
