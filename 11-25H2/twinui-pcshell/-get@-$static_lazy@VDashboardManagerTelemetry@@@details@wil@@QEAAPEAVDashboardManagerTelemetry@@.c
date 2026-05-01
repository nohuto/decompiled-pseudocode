/*
 * XREFs of ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x180193F5C
 * Callers:
 *     ?Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180193E1C (-Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$DashboardExtensionVersion@PEBG@DashboardManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x180193E3C (--$DashboardExtensionVersion@PEBG@DashboardManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$WidgetsOSState@AEAKAEA_NAEAK_NAEA_NPEBGPEBGAEAPEBG_N_NI@DashboardManagerTelemetry@@SAXAEAKAEA_N0$$QEA_N1$$QEAPEBG3AEAPEBG22$$QEAI@Z @ 0x1805A03F4 (--$WidgetsOSState@AEAKAEA_NAEAK_NAEA_NPEBGPEBGAEAPEBG_N_NI@DashboardManagerTelemetry@@SAXAEAKAEA.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x1802244B8 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<DashboardManagerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`DashboardManagerTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8)
    && v6 )
  {
    qword_18089D0E0 = 0LL;
    dword_18089D0EC = 0;
    v8 = &qword_18089D0D8;
    qword_18089D0D8 = (__int64)&ShellScreenClippingLogging::`vftable';
    v4 = &`DashboardManagerTelemetry::Instance'::`2'::wrapper;
    byte_18089D0E8 = 0;
    qword_18089D0F0 = (__int64)&`DashboardManagerTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v4);
  }
  return v8;
}
