/*
 * XREFs of ?W32GetCurrentThreadCrossSessionCheck@@YAPEAU_W32THREAD@@XZ @ 0x1401321D0
 * Callers:
 *     ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140132150 (--$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 * Callees:
 *     <none>
 */

struct _W32THREAD *W32GetCurrentThreadCrossSessionCheck(void)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(v1),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0 )
  {
    return *(struct _W32THREAD **)ThreadWin32Thread;
  }
  else
  {
    return 0LL;
  }
}
