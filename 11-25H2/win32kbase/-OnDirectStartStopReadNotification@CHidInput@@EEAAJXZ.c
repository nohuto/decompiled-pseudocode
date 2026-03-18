/*
 * XREFs of ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x14012C2B0
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x14012C1F0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14003B058 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RIMApiSetIsRemoteConnection @ 0x14012C31C (RIMApiSetIsRemoteConnection.c)
 *     RIMDirectStartStopDeviceRead @ 0x14012C380 (RIMDirectStartStopDeviceRead.c)
 */

__int64 __fastcall CHidInput::OnDirectStartStopReadNotification(CHidInput *this)
{
  __int64 *v2; // rbx
  __int64 v4; // rdx
  __int64 *v5; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v5, "OnDirectStartStopReadNotification", 0LL);
  if ( !(unsigned int)RIMApiSetIsRemoteConnection() && *((_QWORD *)this + 1) != -1LL )
    RIMDirectStartStopDeviceRead();
  v2 = v5;
  if ( v5 )
  {
    *((_QWORD *)PtiCurrent() + 48) = v2[6];
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((char **)&v5, v4);
  }
  return 0LL;
}
