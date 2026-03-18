/*
 * XREFs of ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1402153A0
 * Callers:
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1401BD1E0 (NtUserDestroyPalmRejectionDelayZone.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x140149F58 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ??0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z @ 0x1402148DC (--0CEResourceLockExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??1CEResourceLockExclusiveIfNeeded@@QEAA@XZ @ 0x14021491C (--1CEResourceLockExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1402230C8 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromList(PERESOURCE *this, int a2)
{
  __int64 v4; // rdx
  PERESOURCE i; // rbx
  char v6; // bl
  bool v8; // si
  bool v9; // bp
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int128 v13; // xmm6
  __int64 v14; // r8
  PERESOURCE v15; // rcx
  __int64 v16; // rdx
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  PERESOURCE *v18[2]; // [rsp+50h] [rbp-28h] BYREF
  struct CPalmRejectZoneInfo *v19; // [rsp+80h] [rbp+8h] BYREF

  CEResourceLockExclusiveIfNeeded::CEResourceLockExclusiveIfNeeded((CEResourceLockExclusiveIfNeeded *)v18, this + 14);
  for ( i = this[9]; ; i = (PERESOURCE)i->SystemResourcesList.Flink )
  {
    if ( i == (PERESOURCE)(this + 9) )
      goto LABEL_5;
    if ( i->OwnerEntry.TableSize == a2 )
      break;
  }
  v19 = (struct CPalmRejectZoneInfo *)i;
  if ( !i || (struct _KTHREAD *)i->OwnerTable != KeGetCurrentThread() )
  {
LABEL_5:
    v6 = 0;
    goto LABEL_6;
  }
  v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      4,
      27,
      (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids);
  }
  v13 = *(_OWORD *)&i->ActiveCount;
  v6 = DelayZonePalmRejection::RemoveDelayZoneFromListInternal((DelayZonePalmRejection *)this, &v19);
  if ( v6 )
  {
    v15 = this[15];
    if ( v15 )
    {
      v16 = *((unsigned int *)this + 1);
      v17 = v13;
      DelayZoneTelemetry::UpdateDelayZoneStateInfo(v15, v16, v14, 4LL, &v17);
    }
  }
LABEL_6:
  CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded(v18);
  return v6;
}
