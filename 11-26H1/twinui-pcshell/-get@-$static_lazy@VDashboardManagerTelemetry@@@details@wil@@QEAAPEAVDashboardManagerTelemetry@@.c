/*
 * XREFs of ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x18018CD24
 * Callers:
 *     ?Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x18018CBE4 (-Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$DashboardExtensionVersion@PEBG@DashboardManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x18018CC04 (--$DashboardExtensionVersion@PEBG@DashboardManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$WidgetsOSState@AEAKAEA_NAEAK_NAEA_NPEBGPEBGAEAPEBG_N_NI@DashboardManagerTelemetry@@SAXAEAKAEA_N0$$QEA_N1$$QEAPEBG3AEAPEBG22$$QEAI@Z @ 0x1805C47BC (--$WidgetsOSState@AEAKAEA_NAEAK_NAEA_NPEBGPEBGAEAPEBG_N_NI@DashboardManagerTelemetry@@SAXAEAKAEA.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x1802151A0 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802C9288 (atexit.c)
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
    v4 = &`DashboardManagerTelemetry::Instance'::`2'::wrapper;
    v8 = &qword_1808DD718;
    qword_1808DD718 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1808DD720 = 0LL;
    byte_1808DD728 = 0;
    dword_1808DD72C = 0;
    qword_1808DD730 = (__int64)&`DashboardManagerTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v4);
  }
  return v8;
}
