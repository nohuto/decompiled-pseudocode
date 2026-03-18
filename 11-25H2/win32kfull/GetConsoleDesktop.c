/*
 * XREFs of GetConsoleDesktop @ 0x14019C77C
 * Callers:
 *     _GetThreadDesktop @ 0x14019C600 (_GetThreadDesktop.c)
 *     _OpenThreadDesktop @ 0x14020B984 (_OpenThreadDesktop.c)
 *     NtUserCheckWindowThreadDesktop @ 0x140294BF0 (NtUserCheckWindowThreadDesktop.c)
 * Callees:
 *     LockProcessByClientId @ 0x1400D8B9C (LockProcessByClientId.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?GetConsoleHostProcess@@YAJKPEAPEAX@Z @ 0x1401E5258 (-GetConsoleHostProcess@@YAJKPEAPEAX@Z.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14023A1A0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027745C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x14027A188 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GetConsoleDesktop(unsigned int a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v7; // rcx
  PVOID v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 ProcessWin32Process; // rax
  PVOID v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  PVOID Object[2]; // [rsp+38h] [rbp-9h] BYREF
  char v18[8]; // [rsp+48h] [rbp+7h] BYREF
  int v19; // [rsp+50h] [rbp+Fh]

  Object[0] = 0LL;
  if ( (int)GetConsoleHostProcess(a1, Object) < 0 )
    return 3221225485LL;
  v8 = Object[0];
  if ( !Object[0] )
    return 3221225485LL;
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v7) )
  {
    CLockProcessByPid::CLockProcessByPid(v18, v8, 4096LL);
    v10 = v19;
    if ( v19 < 0 )
    {
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v18, v9);
      return v10;
    }
    *a4 = (__int64)CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v18);
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v18, v12);
  }
  else
  {
    Object[0] = 0LL;
    result = LockProcessByClientId(v8, (PEPROCESS *)Object);
    if ( (int)result < 0 )
      return result;
    ProcessWin32Process = PsGetProcessWin32Process(Object[0]);
    if ( ProcessWin32Process )
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v14 = Object[0];
    *a4 = ProcessWin32Process;
    ObfDereferenceObject(v14);
  }
  v15 = *a4;
  if ( !*a4 )
    return 3221225480LL;
  v16 = *(_QWORD *)(v15 + 328);
  if ( !v16 )
    return 3221225480LL;
  *a2 = *(_QWORD *)(v16 + 632);
  if ( a3 )
    *a3 = *(_QWORD *)(*(_QWORD *)(v15 + 328) + 496LL);
  return 0LL;
}
