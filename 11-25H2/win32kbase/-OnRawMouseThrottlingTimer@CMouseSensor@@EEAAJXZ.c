/*
 * XREFs of ?OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ @ 0x140139B80
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14003B058 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RawMouseThrottlingTimerFired@Mouse@InputTraceLogging@@SAXXZ @ 0x140139BE4 (-RawMouseThrottlingTimerFired@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ApiSetEditionHandleRawInputThrottlingTimer @ 0x140139C28 (ApiSetEditionHandleRawInputThrottlingTimer.c)
 */

__int64 __fastcall CMouseSensor::OnRawMouseThrottlingTimer(CMouseSensor *this)
{
  __int64 *v2; // rbx
  __int64 v4; // rdx
  __int64 *v5; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v5, "OnRawMouseThrottlingTimer", 0LL);
  InputTraceLogging::Mouse::RawMouseThrottlingTimerFired();
  *((_BYTE *)this + 1344) = 0;
  ApiSetEditionHandleRawInputThrottlingTimer();
  v2 = v5;
  if ( v5 )
  {
    *((_QWORD *)PtiCurrent() + 48) = v2[6];
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((char **)&v5, v4);
  }
  return 0LL;
}
