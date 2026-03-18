/*
 * XREFs of LockIntoSharedUserCritDeferredUnlockList @ 0x1401A5878
 * Callers:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1400396C0 (HMUnlockObjectInternal.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140040DDC (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _HMPkheFromObjectWorker @ 0x1400E3FE8 (_HMPkheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LockIntoSharedUserCritDeferredUnlockList(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(UserSessionState + 19760) && !IS_USERCRIT_OWNED_SHAREDONLY() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4588);
  if ( !PtiCurrent() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4589);
  v5 = HMPkheFromObjectWorker((int *)a1, v4);
  if ( *(_QWORD *)(v5 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4592);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  result = *(_QWORD *)(UserSessionState + 19712);
  if ( result )
    *(_QWORD *)(v5 + 16) = result;
  *(_QWORD *)(UserSessionState + 19712) = v5;
  return result;
}
