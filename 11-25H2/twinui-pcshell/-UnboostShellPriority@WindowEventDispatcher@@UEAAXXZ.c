/*
 * XREFs of ?UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ @ 0x180414200
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18006FD08 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z @ 0x1801C7AA8 (--$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z.c)
 */

void __fastcall WindowEventDispatcher::UnboostShellPriority(WindowEventDispatcher *this)
{
  __int64 v2; // rax
  HANDLE CurrentProcess; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  wil::AcquireSRWLockExclusive(&v5, (RTL_SRWLOCK *)this + 57);
  v2 = *((_QWORD *)this + 59);
  if ( v2 )
  {
    *((_QWORD *)this + 59) = v2 - 1;
    ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>((int *)this + 118);
    if ( !*((_QWORD *)this + 59) )
    {
      CurrentProcess = GetCurrentProcess();
      ShellForegroundBoostProcess(CurrentProcess, 0LL);
      v4 = 0;
      ViewManagerInteropTraceLogging::ShellForegroundBoosted<bool>(&v4);
    }
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
