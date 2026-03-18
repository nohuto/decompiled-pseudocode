/*
 * XREFs of ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140129430
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1400B3038 (RIMDeliverConfigRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x14012E2EC (RIMSetDeviceIdleTimeout.c)
 *     RIMDeviceIoControl @ 0x14017EA70 (RIMDeviceIoControl.c)
 *     RIMGetMaxCountFeatureDetails @ 0x14017FBE8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1401D54D4 (RIMLoadDeviceLegacyInfo.c)
 *     RIMConfigureDeviceFeedback @ 0x1401DEB80 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1401DEFE0 (RIMConfigureTouchpadClickForceSensitivity.c)
 *     RIMHidGetPreparsedData @ 0x1401E0E5C (RIMHidGetPreparsedData.c)
 * Callees:
 *     <none>
 */

RimTelemetryScopedIoctlObserver *__fastcall RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
        RimTelemetryScopedIoctlObserver *this,
        const char *a2,
        struct RIMDEV *const a3,
        int *a4,
        unsigned int a5)
{
  *(_QWORD *)this = -1LL;
  *((_DWORD *)this + 6) = a5;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 4) = a4;
  *(LARGE_INTEGER *)this = KeQueryPerformanceCounter(0LL);
  return this;
}
