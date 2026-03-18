/*
 * XREFs of ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140162F3C
 * Callers:
 *     RIMLoadDeviceLegacyInfo @ 0x1400EDEFC (RIMLoadDeviceLegacyInfo.c)
 *     RIMConfigureDeviceFeedback @ 0x140203F80 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1402043F0 (RIMConfigureTouchpadClickForceSensitivity.c)
 *     RIMGetMaxCountFeatureDetails @ 0x140205008 (RIMGetMaxCountFeatureDetails.c)
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
  *((_DWORD *)this + 6) = a5;
  *(_QWORD *)this = -1LL;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 4) = a4;
  *(LARGE_INTEGER *)this = KeQueryPerformanceCounter(0LL);
  return this;
}
