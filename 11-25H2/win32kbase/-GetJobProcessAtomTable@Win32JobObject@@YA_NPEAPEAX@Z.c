/*
 * XREFs of ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401AD054
 * Callers:
 *     UserGlobalAtomTableCallout @ 0x14009CF40 (UserGlobalAtomTableCallout.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     Win32JobObject::_anonymous_namespace_::Create @ 0x1401ACDAC (Win32JobObject--_anonymous_namespace_--Create.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401AD018 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 */

char __fastcall Win32JobObject::GetJobProcessAtomTable(Win32JobObject *this, void **a2)
{
  __int64 CurrentProcess; // rsi
  __int64 ProcessJob; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct W32_PUSH_LOCK *v8; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 W32Job; // rax

  *(_QWORD *)this = 0LL;
  CurrentProcess = PsGetCurrentProcess(this, a2);
  ProcessJob = PsGetProcessJob(CurrentProcess);
  v5 = ProcessJob;
  if ( ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
  {
    v8 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(v7, v6) + 69104);
    W32AcquirePushLockExclusiveEx(v8, 0);
    ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
    if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process && *(_BYTE *)(ProcessWin32Process + 1176) == 1 )
      W32Job = *(_QWORD *)(ProcessWin32Process + 752);
    else
      W32Job = (__int64)Win32JobObject::_anonymous_namespace_::FindW32Job(v5, v10);
    if ( !W32Job )
    {
      W32Job = Win32JobObject::_anonymous_namespace_::Create(v5);
      if ( !W32Job )
      {
        W32ReleasePushLockExclusiveEx(v8, 0LL);
        return 0;
      }
    }
    *(_QWORD *)this = *(_QWORD *)(W32Job + 16);
    W32ReleasePushLockExclusiveEx(v8, 0LL);
  }
  return 1;
}
