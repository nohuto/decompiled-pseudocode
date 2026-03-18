/*
 * XREFs of TtmCleanupCurrentSession @ 0x140AA7F5C
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     TtmpAcquireSessionLock @ 0x1406EBB64 (TtmpAcquireSessionLock.c)
 *     TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x14075AB24 (TtmpCleanupPowerRequestsTrackingFromCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x14075AC78 (TtmpDereferenceSessionMaybeLast.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A74AA0 (PoUnregisterPowerSettingCallback.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x140AA8054 (TtmiLogCleanupCurrentSessionStart.c)
 *     TtmiLogCleanupCurrentSessionStop @ 0x140AA80FC (TtmiLogCleanupCurrentSessionStop.c)
 */

__int64 TtmCleanupCurrentSession()
{
  int SessionId; // edi
  __int64 v1; // rbx
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  TtmiLogCleanupCurrentSessionStart();
  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  TtmpAcquireSessionLock();
  v1 = TtmpSession;
  if ( !TtmpSession || *(_DWORD *)TtmpSession == SessionId )
  {
    TtmpCleanupPowerRequestsTrackingFromCurrentSession(TtmpSession);
    ObfDereferenceObject(*(PVOID *)(v1 + 32));
    v2 = *(void **)(v1 + 24);
    *(_QWORD *)(v1 + 32) = 0LL;
    ObCloseHandle(v2, 0);
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_DWORD *)(v1 + 4) |= 4u;
    TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)v1);
    TtmpSession = 0LL;
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    v3 = *(void **)(v1 + 248);
    if ( v3 )
    {
      PoUnregisterPowerSettingCallback(v3);
      *(_QWORD *)(v1 + 248) = 0LL;
      TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)v1);
    }
    v4 = *(void **)(v1 + 256);
    if ( v4 )
    {
      PoUnregisterPowerSettingCallback(v4);
      *(_QWORD *)(v1 + 256) = 0LL;
      TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)v1);
    }
  }
  else
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return TtmiLogCleanupCurrentSessionStop();
}
