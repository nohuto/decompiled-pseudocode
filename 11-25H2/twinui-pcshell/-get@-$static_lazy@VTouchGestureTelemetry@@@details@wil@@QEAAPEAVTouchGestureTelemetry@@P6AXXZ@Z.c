/*
 * XREFs of ?get@?$static_lazy@VTouchGestureTelemetry@@@details@wil@@QEAAPEAVTouchGestureTelemetry@@P6AXXZ@Z @ 0x180570164
 * Callers:
 *     ??$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU?$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureTelemetry@@SAX$$QEAIAEAIAEBM2$$QEA_N$$QEAU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x18056B114 (--$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU-$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureT.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTouchGestureTelemetry@@@details@wil@@QEAA@XZ @ 0x1800FAFF0 (--1Completer@-$static_lazy@VTouchGestureTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<TouchGestureTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`TouchGestureTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_18089E488 = 0LL;
    dword_18089E494 = 0;
    v8 = &qword_18089E480;
    qword_18089E480 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`TouchGestureTelemetry::Instance'::`2'::wrapper;
    byte_18089E490 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TouchGestureTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
