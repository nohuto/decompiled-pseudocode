/*
 * XREFs of ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401CF10C
 * Callers:
 *     UserGlobalAtomTableCallout @ 0x1401AAD60 (UserGlobalAtomTableCallout.c)
 *     GetCurrentProcessAtomTable @ 0x1401D8A80 (GetCurrentProcessAtomTable.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     CreateGlobalAtomTable @ 0x140148EE0 (CreateGlobalAtomTable.c)
 *     Win32JobObject::_anonymous_namespace_::GetW32Job @ 0x1401CF1BC (Win32JobObject--_anonymous_namespace_--GetW32Job.c)
 */

char __fastcall Win32JobObject::GetJobProcessAtomTable(Win32JobObject *this, void **a2)
{
  __int64 CurrentProcess; // rax
  int v4; // edx
  int v5; // ecx
  unsigned int JobProvidingUILimit; // edi
  int v7; // r8d
  struct W32_PUSH_LOCK *v8; // rbx
  __int64 W32Job; // rax
  _QWORD *v11; // rdi

  *(_QWORD *)this = 0LL;
  CurrentProcess = PsGetCurrentProcess(this);
  JobProvidingUILimit = KfGetJobProvidingUILimit(CurrentProcess, 32LL);
  if ( JobProvidingUILimit )
  {
    v8 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(v5, v4, v7) + 69096);
    W32AcquirePushLockExclusiveEx(v8);
    W32Job = Win32JobObject::_anonymous_namespace_::GetW32Job(JobProvidingUILimit);
    if ( !W32Job
      || (v11 = (_QWORD *)(W32Job + 24), !*(_QWORD *)(W32Job + 24))
      && CreateGlobalAtomTable((PRTL_ATOM_TABLE *)(W32Job + 24)) < 0 )
    {
      W32ReleasePushLockExclusiveEx(v8);
      return 0;
    }
    W32ReleasePushLockExclusiveEx(v8);
    *(_QWORD *)this = *v11;
  }
  return 1;
}
