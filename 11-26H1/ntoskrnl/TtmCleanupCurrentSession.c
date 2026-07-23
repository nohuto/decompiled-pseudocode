/*
 * XREFs of TtmCleanupCurrentSession @ 0x1409F5AB8
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x1407EC8C8 (TtmpCleanupPowerRequestsTrackingFromCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1407ECA28 (TtmpDereferenceSessionMaybeLast.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x1409F5BAC (TtmiLogCleanupCurrentSessionStart.c)
 *     TtmiLogCleanupCurrentSessionStop @ 0x1409F5C40 (TtmiLogCleanupCurrentSessionStop.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 *     TtmpAcquireSessionLock @ 0x1409F68CC (TtmpAcquireSessionLock.c)
 *     PoUnregisterPowerSettingCallback @ 0x140B1B9C0 (PoUnregisterPowerSettingCallback.c)
 */

__int64 TtmCleanupCurrentSession()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  int SessionId; // edi
  PVOID *InitialStack; // rbx
  PVOID v5; // rcx
  PVOID v6; // rcx
  PVOID v7; // rcx

  TtmiLogCleanupCurrentSessionStart();
  SessionId = TtmiGetSessionId(v1, v0, v2);
  TtmpAcquireSessionLock();
  InitialStack = (PVOID *)PspSiloMonitorLock.InitialStack;
  if ( !PspSiloMonitorLock.InitialStack || *(_DWORD *)PspSiloMonitorLock.InitialStack == SessionId )
  {
    TtmpCleanupPowerRequestsTrackingFromCurrentSession((__int64)PspSiloMonitorLock.InitialStack);
    ObfDereferenceObject(InitialStack[4]);
    v5 = InitialStack[3];
    InitialStack[4] = 0LL;
    ObCloseHandle(v5, 0);
    *((_DWORD *)InitialStack + 1) |= 4u;
    InitialStack[3] = 0LL;
    TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)InitialStack);
    PspSiloMonitorLock.InitialStack = 0LL;
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
    v6 = InitialStack[31];
    if ( v6 )
    {
      PoUnregisterPowerSettingCallback(v6);
      InitialStack[31] = 0LL;
      TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)InitialStack);
    }
    v7 = InitialStack[32];
    if ( v7 )
    {
      PoUnregisterPowerSettingCallback(v7);
      InitialStack[32] = 0LL;
      TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)InitialStack);
    }
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  return TtmiLogCleanupCurrentSessionStop();
}
