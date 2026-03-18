/*
 * XREFs of IsThreadCrossSessionAttached @ 0x140017DB0
 * Callers:
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x1400193F0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ??$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140174C0C (--$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14023E998 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsThreadCrossSessionAttached()
{
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( !(unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  return ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess);
}
