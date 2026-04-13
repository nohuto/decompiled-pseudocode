/*
 * XREFs of ?get@?$static_lazy@VMobilityExperienceLogging@Telemetry@MobilityExperience@@@details@wil@@QEAAPEAVMobilityExperienceLogging@Telemetry@MobilityExperience@@P6AXXZ@Z @ 0x18003E964
 * Callers:
 *     ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x180027E98 (--$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTeleme.c)
 * Callees:
 *     atexit @ 0x180021B40 (atexit.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180029F0C (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<MobilityExperience::Telemetry::MobilityExperienceLogging>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  WINBOOL v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 *v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = HIDWORD(a1);
  v10 = 0LL;
  v8 = 0;
  if ( InitOnceBeginInitialize(
         &`MobilityExperience::Telemetry::MobilityExperienceLogging::Instance'::`2'::wrapper,
         0,
         &v8,
         (LPVOID *)&v10)
    && v8 )
  {
    v6 = &`MobilityExperience::Telemetry::MobilityExperienceLogging::Instance'::`2'::wrapper;
    v10 = &qword_1801800B0;
    qword_1801800B0 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    qword_1801800B8 = 0LL;
    byte_1801800C0 = 0;
    dword_1801800C4 = 0;
    qword_1801800C8 = (__int64)&`MobilityExperience::Telemetry::MobilityExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v10;
}
