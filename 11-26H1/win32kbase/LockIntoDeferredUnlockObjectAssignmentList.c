/*
 * XREFs of LockIntoDeferredUnlockObjectAssignmentList @ 0x140159280
 * Callers:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400491B4 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x14015DE38 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 *__fastcall LockIntoDeferredUnlockObjectAssignmentList(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  _QWORD *v5; // rcx

  if ( !PtiCurrent(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 603LL);
  result = (__int64 *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 24));
  if ( (_DWORD)result == 1 )
  {
    v5 = *(_QWORD **)(a1 + 8);
    result = (__int64 *)(a2 + 8);
    if ( *v5 != a1 )
      __fastfail(3u);
    *result = a1;
    *(_QWORD *)(a2 + 16) = v5;
    *v5 = result;
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
