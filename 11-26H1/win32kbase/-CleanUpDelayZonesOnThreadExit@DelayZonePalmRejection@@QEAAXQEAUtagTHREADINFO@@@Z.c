/*
 * XREFs of ?CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x1401B8334
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x140184650 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 */

void __fastcall DelayZonePalmRejection::CleanUpDelayZonesOnThreadExit(PERESOURCE *this, struct tagTHREADINFO *const a2)
{
  PERESOURCE *v2; // rsi
  bool IsLockedShared; // r14
  struct CPalmRejectZoneInfo *v6; // rbx
  __int64 v7; // rax
  struct CPalmRejectZoneInfo *v8; // rcx
  struct CPalmRejectZoneInfo *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 14;
  IsLockedShared = tagDomLock::IsLockedShared(this + 14);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceExclusive(*v2);
  v6 = (struct CPalmRejectZoneInfo *)this[9];
  while ( v6 != (struct CPalmRejectZoneInfo *)(this + 9) )
  {
    v7 = *(_QWORD *)a2;
    v8 = v6;
    v9 = v6;
    v6 = *(struct CPalmRejectZoneInfo **)v6;
    if ( *((_QWORD *)v8 + 2) == v7 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v9);
  }
  if ( !IsLockedShared )
    ExReleaseResourceAndLeaveCriticalRegion(*v2);
}
