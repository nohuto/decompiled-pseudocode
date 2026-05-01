/*
 * XREFs of ?UnboostShellPriority@UwpWindowEventDispatcher@@UEAAXXZ @ 0x18006B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18006A6E8 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ??$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z @ 0x1801BEC54 (--$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z.c)
 */

void __fastcall UwpWindowEventDispatcher::UnboostShellPriority(UwpWindowEventDispatcher *this)
{
  RTL_SRWLOCK *v1; // rdi
  __int64 v3; // rax
  HANDLE CurrentProcess; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 472);
  AcquireSRWLockExclusive((PSRWLOCK)this + 59);
  v3 = *((_QWORD *)this + 61);
  if ( v3 )
  {
    *((_QWORD *)this + 61) = v3 - 1;
    ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>((int *)this + 122);
    if ( !*((_QWORD *)this + 61) )
    {
      CurrentProcess = GetCurrentProcess();
      ShellForegroundBoostProcess(CurrentProcess, 0LL);
      v5 = 0;
      ViewManagerInteropTraceLogging::ShellForegroundBoosted<bool>(&v5);
    }
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
