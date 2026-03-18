/*
 * XREFs of NtUserShellForegroundBoostProcess @ 0x1401A7DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     IsShellProcess @ 0x1401A7FD8 (IsShellProcess.c)
 *     ?Apply@ShellForegroundBoost@@YAXPEAUtagPROCESSINFO@@_N@Z @ 0x1401A82C0 (-Apply@ShellForegroundBoost@@YAXPEAUtagPROCESSINFO@@_N@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserShellForegroundBoostProcess(HANDLE Handle, int a2)
{
  unsigned int v4; // edi
  int v5; // eax
  PVOID v6; // rsi
  ShellForegroundBoost *ProcessWin32Process; // rax
  ShellForegroundBoost *v8; // rbx
  __int64 v9; // rcx
  __int64 v11; // rcx
  ShellForegroundBoost *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v13; // rdx
  bool v14; // r8
  ULONG v15; // eax
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v4 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&Object, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v6 = Object;
  if ( v5 < 0 )
  {
    v4 = 0;
    v15 = RtlNtStatusToDosError(v5);
    UserSetLastError(v15);
  }
  else
  {
    ProcessWin32Process = (ShellForegroundBoost *)PsGetProcessWin32Process(Object);
    v8 = ProcessWin32Process;
    if ( ProcessWin32Process
      && *(_QWORD *)ProcessWin32Process
      && (unsigned int)IsShellProcess(ProcessWin32Process)
      && ((CurrentProcessWin32Process = (ShellForegroundBoost *)PsGetCurrentProcessWin32Process(v11)) == 0LL
       || *(_QWORD *)CurrentProcessWin32Process)
      && v8 == CurrentProcessWin32Process )
    {
      LOBYTE(v13) = a2 != 0;
      ShellForegroundBoost::Apply(v8, v13, v14);
    }
    else
    {
      v4 = 0;
      UserSetLastError(87);
    }
    if ( v6 )
      ObfDereferenceObject(v6);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
  UserSessionSwitchLeaveCrit(v9);
  return v4;
}
