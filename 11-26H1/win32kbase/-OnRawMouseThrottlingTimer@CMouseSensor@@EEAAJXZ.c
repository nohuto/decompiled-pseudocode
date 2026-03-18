/*
 * XREFs of ?OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ @ 0x140174560
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?RawMouseThrottlingTimerFired@Mouse@InputTraceLogging@@SAXXZ @ 0x1401745A8 (-RawMouseThrottlingTimerFired@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ApiSetEditionHandleRawInputThrottlingTimer @ 0x1401B4DF8 (ApiSetEditionHandleRawInputThrottlingTimer.c)
 */

__int64 __fastcall CMouseSensor::OnRawMouseThrottlingTimer(CMouseSensor *this)
{
  __int64 v2; // rdx
  void **v4; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v4, "OnRawMouseThrottlingTimer", 0LL);
  InputTraceLogging::Mouse::RawMouseThrottlingTimerFired();
  *((_BYTE *)this + 1336) = 0;
  ApiSetEditionHandleRawInputThrottlingTimer();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v4,
    v2);
  return 0LL;
}
