/*
 * XREFs of ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1401A34FC
 * Callers:
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1401E3860 (NtUserDestroyPalmRejectionDelayZone.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x14014553C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x140184650 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x140225234 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromList(PERESOURCE *this, int a2)
{
  PERESOURCE *v2; // rdi
  int v5; // edx
  int v6; // r8d
  PERESOURCE i; // rbx
  bool v9; // di
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int128 v14; // xmm6
  char v15; // bl
  __int64 v16; // r8
  PERESOURCE v17; // rcx
  __int64 v18; // rdx
  PERESOURCE *v19; // [rsp+40h] [rbp-48h] BYREF
  bool IsLockedShared; // [rsp+48h] [rbp-40h]
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF
  struct CPalmRejectZoneInfo *v22; // [rsp+90h] [rbp+8h] BYREF

  v2 = this + 14;
  v19 = this + 14;
  IsLockedShared = tagDomLock::IsLockedShared(this + 14);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceExclusive(*v2);
  for ( i = this[9]; ; i = (PERESOURCE)i->SystemResourcesList.Flink )
  {
    if ( i == (PERESOURCE)(this + 9) )
      goto LABEL_7;
    if ( i->OwnerEntry.TableSize == a2 )
      break;
  }
  v22 = (struct CPalmRejectZoneInfo *)i;
  if ( !i || (struct _KTHREAD *)i->OwnerTable != KeGetCurrentThread() )
  {
LABEL_7:
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v2);
    return 0;
  }
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      4,
      27,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
  }
  v14 = *(_OWORD *)&i->ActiveCount;
  v15 = DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v22);
  if ( v15 )
  {
    v17 = this[15];
    if ( v17 )
    {
      v18 = *((unsigned int *)this + 1);
      v21 = v14;
      DelayZoneTelemetry::UpdateDelayZoneStateInfo(v17, v18, v16, 4LL, &v21);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared(&v19);
  return v15;
}
