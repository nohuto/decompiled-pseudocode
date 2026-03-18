/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x14002E1C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x14002E240 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RimInputTypeToDeviceInputType @ 0x14002E578 (RimInputTypeToDeviceInputType.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14003B058 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v7,
    "OnRemoteCloseNotification",
    0LL);
  v2 = RimInputTypeToDeviceInputType(*((unsigned int *)this + 36));
  v3 = RIMDirectPnpRemoveDevicesOfType(*((_QWORD *)this + 1), v2);
  v4 = v7;
  v5 = v3;
  if ( v7 )
  {
    *((_QWORD *)PtiCurrent() + 48) = *(_QWORD *)(v4 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v7);
  }
  return v5;
}
