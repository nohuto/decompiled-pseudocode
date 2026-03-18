/*
 * XREFs of ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140197E8C
 * Callers:
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x14019BEA0 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x140184650 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 */

char __fastcall DelayZonePalmRejection::RemoveEdgeZonesForDevice(PERESOURCE *this, void *a2)
{
  PERESOURCE *v2; // rdi
  int v5; // edx
  int v6; // r8d
  bool IsLockedShared; // r12
  struct CPalmRejectZoneInfo *v8; // rbx
  bool v9; // bp
  bool v10; // r15
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  struct CPalmRejectZoneInfo *v14; // rax
  struct CPalmRejectZoneInfo *v16; // [rsp+80h] [rbp+8h] BYREF

  v2 = this + 14;
  IsLockedShared = tagDomLock::IsLockedShared(this + 14);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceExclusive(*v2);
  v8 = (struct CPalmRejectZoneInfo *)this[9];
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      4,
      28,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
      (char)a2);
  }
  while ( v8 != (struct CPalmRejectZoneInfo *)(this + 9) )
  {
    v14 = v8;
    v16 = v8;
    v8 = *(struct CPalmRejectZoneInfo **)v8;
    if ( *((void **)v14 + 12) == a2 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v16);
  }
  if ( !IsLockedShared )
    ExReleaseResourceAndLeaveCriticalRegion(*v2);
  return 1;
}
