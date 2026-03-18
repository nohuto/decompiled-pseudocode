/*
 * XREFs of LockIntoExclusiveUserCritDeferredUnlockList @ 0x140161960
 * Callers:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1400396C0 (HMUnlockObjectInternal.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     _HMPkheFromObjectWorker @ 0x1400E3FE8 (_HMPkheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LockIntoExclusiveUserCritDeferredUnlockList(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rbx
  __int64 result; // rax

  v3 = HMPkheFromObjectWorker((int *)a1, a2);
  UserSessionState = W32GetUserSessionState(v5, v4);
  if ( !*(_QWORD *)(UserSessionState + 19768) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4637LL);
  if ( !*(_DWORD *)(UserSessionState + 19760) && !IS_USERCRIT_OWNED_EXCLUSIVE() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4638LL);
  if ( *(_DWORD *)(a1 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4648LL);
  if ( *(_QWORD *)(v3 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4649LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(UserSessionState + 19720);
  result = (unsigned int)++*(_DWORD *)(UserSessionState + 19780);
  *(_QWORD *)(UserSessionState + 19720) = v3;
  if ( (unsigned int)result > *(_DWORD *)(UserSessionState + 19776) )
    return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4658LL);
  return result;
}
