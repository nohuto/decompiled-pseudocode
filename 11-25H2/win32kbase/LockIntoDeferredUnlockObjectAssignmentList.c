/*
 * XREFs of LockIntoDeferredUnlockObjectAssignmentList @ 0x1401AAA50
 * Callers:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400BAD54 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140124D70 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int64 __fastcall LockIntoDeferredUnlockObjectAssignmentList(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // rcx

  if ( !PtiCurrent() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 603);
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 24));
  if ( (_DWORD)result == 1 )
  {
    v5 = *(unsigned __int64 **)(a1 + 8);
    result = a2 + 8;
    if ( *v5 != a1 )
      __fastfail(3u);
    *(_QWORD *)result = a1;
    *(_QWORD *)(a2 + 16) = v5;
    *v5 = result;
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
