/*
 * XREFs of ?get@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppSwitchTelemetry@PerfTrack@@P6AXXZ@Z @ 0x1804B3834
 * Callers:
 *     ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x1804B37AC (-SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4Swi.c)
 * Callees:
 *     atexit @ 0x1802D2608 (atexit.c)
 *     ??1Completer@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ @ 0x180398740 (--1Completer@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8)
    && v6 )
  {
    qword_18089E320 = 0LL;
    dword_18089E32C = 0;
    v8 = &qword_18089E318;
    qword_18089E318 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper;
    byte_18089E328 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
