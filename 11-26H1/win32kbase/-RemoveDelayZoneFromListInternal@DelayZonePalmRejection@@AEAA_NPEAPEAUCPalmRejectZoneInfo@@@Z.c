/*
 * XREFs of ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x140184650
 * Callers:
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140197E8C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1401A34FC (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x1401B8334 (-CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromListInternal(
        PERESOURCE *this,
        struct CPalmRejectZoneInfo **a2)
{
  PERESOURCE *v2; // rdi
  bool IsLockedShared; // si
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  void *v9; // rcx
  char *v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rax
  int v13; // edx
  int v14; // r8d
  int v15; // r14d
  bool v16; // bl
  bool v17; // bp
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx

  v2 = this + 14;
  IsLockedShared = tagDomLock::IsLockedShared(this + 14);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceExclusive(*v2);
  if ( a2 && *a2 )
  {
    v8 = (void *)*((_QWORD *)*a2 + 9);
    if ( v8 )
      ObfDereferenceObject(v8);
    v9 = (void *)*((_QWORD *)*a2 + 10);
    if ( v9 )
      ObfDereferenceObject(v9);
    v10 = (char *)*a2;
    v11 = *(_QWORD *)*a2;
    if ( *(struct CPalmRejectZoneInfo **)(v11 + 8) != *a2
      || (v12 = (__int64 *)*((_QWORD *)v10 + 1), (char *)*v12 != v10) )
    {
      __fastfail(3u);
    }
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    GreDeleteFastMutex(v10, v11, v6, v7);
    v15 = *((_DWORD *)this + 23) - 1;
    *((_DWORD *)this + 23) = v15;
    v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v14);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        4,
        26,
        (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
        v15);
    }
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v2);
    return 1;
  }
  else
  {
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v2);
    return 0;
  }
}
