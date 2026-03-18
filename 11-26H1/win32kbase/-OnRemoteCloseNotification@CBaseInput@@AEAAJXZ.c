/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x14005F200
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x14005E4F0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RimInputTypeToDeviceInputType @ 0x14005F250 (RimInputTypeToDeviceInputType.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(char **this)
{
  int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v4,
    "OnRemoteCloseNotification",
    0LL);
  v2 = RimInputTypeToDeviceInputType(*((unsigned int *)this + 36));
  LODWORD(this) = RIMDirectPnpRemoveDevicesOfType(this[1], v2);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v4);
  return (unsigned int)this;
}
