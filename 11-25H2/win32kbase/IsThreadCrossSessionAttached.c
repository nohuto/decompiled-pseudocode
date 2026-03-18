/*
 * XREFs of IsThreadCrossSessionAttached @ 0x1400AE580
 * Callers:
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1401166DC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     NtUserGetKeyState @ 0x140170360 (NtUserGetKeyState.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
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
