/*
 * XREFs of ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140158A58
 * Callers:
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x14015BD00 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x140149F58 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x1402148DC (--0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??1CEResourceLockExclusiveIfNeeded@@QEAA@XZ @ 0x14021491C (--1CEResourceLockExclusiveIfNeeded@@QEAA@XZ.c)
 */

char __fastcall DelayZonePalmRejection::RemoveEdgeZonesForDevice(DelayZonePalmRejection *this, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct CPalmRejectZoneInfo *v6; // rbx
  bool v7; // di
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  struct CPalmRejectZoneInfo *v12; // rax
  _BYTE v14[16]; // [rsp+50h] [rbp-28h] BYREF
  struct CPalmRejectZoneInfo *v15; // [rsp+80h] [rbp+8h] BYREF

  CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded(
    (CEResourceLockExclusiveIfNeeded *)v14,
    (DelayZonePalmRejection *)((char *)this + 112));
  v6 = (struct CPalmRejectZoneInfo *)*((_QWORD *)this + 9);
  v7 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      4,
      28,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
      (char)a2);
  }
  while ( v6 != (DelayZonePalmRejection *)((char *)this + 72) )
  {
    v12 = v6;
    v15 = v6;
    v6 = *(struct CPalmRejectZoneInfo **)v6;
    if ( *((void **)v12 + 12) == a2 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v15);
  }
  CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v14);
  return 1;
}
