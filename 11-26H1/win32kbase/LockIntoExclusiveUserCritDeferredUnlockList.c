/*
 * XREFs of LockIntoExclusiveUserCritDeferredUnlockList @ 0x140093494
 * Callers:
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1400D04F0 (HMUnlockObjectInternal.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400489B0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     _HMPkheFromObjectWorker @ 0x140094FC8 (_HMPkheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LockIntoExclusiveUserCritDeferredUnlockList(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rbx
  __int64 result; // rax

  v2 = HMPkheFromObjectWorker();
  UserSessionState = W32GetUserSessionState(v4, v3, v5);
  if ( !*(_QWORD *)(UserSessionState + 19800) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4658LL);
  if ( !*(_DWORD *)(UserSessionState + 19792) && !IS_USERCRIT_OWNED_EXCLUSIVE() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4659LL);
  if ( *(_DWORD *)(a1 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4669LL);
  if ( *(_QWORD *)(v2 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4670LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(UserSessionState + 19752);
  result = (unsigned int)++*(_DWORD *)(UserSessionState + 19812);
  *(_QWORD *)(UserSessionState + 19752) = v2;
  if ( (unsigned int)result > *(_DWORD *)(UserSessionState + 19808) )
    return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4679LL);
  return result;
}
