/*
 * XREFs of ?BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x180417E60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18006A6E8 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ??$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z @ 0x1801BEC54 (--$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z.c)
 */

void __fastcall WindowEventDispatcher::BoostShellPriority(__int64 a1, int a2)
{
  HANDLE CurrentProcess; // rax
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  wil::AcquireSRWLockExclusive(&v5, (RTL_SRWLOCK *)(a1 + 456));
  if ( !a2 && ++*(_QWORD *)(a1 + 472) == 1LL )
  {
    CurrentProcess = GetCurrentProcess();
    ShellForegroundBoostProcess(CurrentProcess, 1LL);
    v6 = 1;
    ViewManagerInteropTraceLogging::ShellForegroundBoosted<bool>(&v6);
  }
  ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>((int *)(a1 + 472));
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
