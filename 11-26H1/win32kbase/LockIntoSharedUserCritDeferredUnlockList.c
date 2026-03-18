/*
 * XREFs of LockIntoSharedUserCritDeferredUnlockList @ 0x1400935C0
 * Callers:
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1400D04F0 (HMUnlockObjectInternal.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140049888 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     _HMPkheFromObjectWorker @ 0x140094FC8 (_HMPkheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LockIntoSharedUserCritDeferredUnlockList(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rdi
  __int64 v7; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( !*(_DWORD *)(UserSessionState + 19792) && !IS_USERCRIT_OWNED_SHAREDONLY(v5, v4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4609LL);
  if ( !PtiCurrent(v5, v4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4610LL);
  v7 = HMPkheFromObjectWorker(a1);
  if ( *(_QWORD *)(v7 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4613LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  result = *(_QWORD *)(UserSessionState + 19744);
  if ( result )
    *(_QWORD *)(v7 + 16) = result;
  *(_QWORD *)(UserSessionState + 19744) = v7;
  return result;
}
