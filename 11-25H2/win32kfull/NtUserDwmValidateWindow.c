/*
 * XREFs of NtUserDwmValidateWindow @ 0x140248A50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1400D8B9C (LockProcessByClientId.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     GetDesktopView @ 0x14019C310 (GetDesktopView.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019D61C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14023A1A0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027745C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x14027A188 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, int a2)
{
  void *v3; // rsi
  PVOID v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 ProcessInfo; // rax
  __int64 v9; // rdx
  _QWORD *DesktopView; // rbx
  __int64 v11; // rdx
  bool v12; // zf
  _QWORD *ProcessWin32Process; // rax
  _QWORD *v14; // rax
  _BYTE v16[8]; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+38h] [rbp-50h]
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF

  Object = 0LL;
  v3 = (void *)a2;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( !v5 )
    goto LABEL_18;
  if ( !(unsigned int)IsCurrentProcessDwm((__int64)v4) )
  {
LABEL_3:
    LODWORD(v5) = 0;
    UserSetLastError(5);
    goto LABEL_18;
  }
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v6) )
  {
    CLockProcessByPid::CLockProcessByPid(v16, v3, 0LL);
    if ( v17 < 0 )
    {
      LODWORD(v5) = 0;
      UserSetLastError(5);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v16, v7);
      goto LABEL_18;
    }
    ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v16);
    if ( !ProcessInfo )
    {
      LODWORD(v5) = 0;
      UserSetLastError(5);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v16, v9);
      goto LABEL_16;
    }
    DesktopView = GetDesktopView(ProcessInfo, *(_QWORD *)(v5 + 24));
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v16, v11);
    LODWORD(v5) = 0;
    v12 = DesktopView == 0LL;
    goto LABEL_10;
  }
  if ( (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) < 0 )
    goto LABEL_3;
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Object);
  if ( ProcessWin32Process && *ProcessWin32Process )
  {
    v14 = GetDesktopView((__int64)ProcessWin32Process, *(_QWORD *)(v5 + 24));
    LODWORD(v5) = 0;
    v12 = v14 == 0LL;
LABEL_10:
    LOBYTE(v5) = !v12;
    goto LABEL_16;
  }
  LODWORD(v5) = 0;
  UserSetLastError(5);
LABEL_16:
  v4 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_18:
  UserSessionSwitchLeaveCrit(v4);
  return (unsigned int)v5;
}
