/*
 * XREFs of ??1CEResourceLockExclusiveIfNeeded@@QEAA@XZ @ 0x14021491C
 * Callers:
 *     ?CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x140039B24 (-CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x14009EAA8 (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x140149F58 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140158A58 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x140214944 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1402153A0 (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEResourceLockExclusiveIfNeeded::~CEResourceLockExclusiveIfNeeded(PERESOURCE **this)
{
  if ( !*((_BYTE *)this + 8) )
    ExReleaseResourceAndLeaveCriticalRegion(**this);
}
