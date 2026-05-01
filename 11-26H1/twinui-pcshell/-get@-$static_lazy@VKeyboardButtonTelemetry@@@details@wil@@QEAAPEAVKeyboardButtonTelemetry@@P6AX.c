/*
 * XREFs of ?get@?$static_lazy@VKeyboardButtonTelemetry@@@details@wil@@QEAAPEAVKeyboardButtonTelemetry@@P6AXXZ@Z @ 0x1804812E4
 * Callers:
 *     ?ToggleTabTip@KeyboardHosting@@YAJXZ @ 0x180481140 (-ToggleTabTip@KeyboardHosting@@YAJXZ.c)
 * Callees:
 *     atexit @ 0x1802C9288 (atexit.c)
 *     ??1Completer@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x180480E68 (--1Completer@-$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<KeyboardButtonTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`KeyboardButtonTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    v4 = &`KeyboardButtonTelemetry::Instance'::`2'::wrapper;
    v8 = &qword_1808DE8E0;
    qword_1808DE8E8 = 0LL;
    qword_1808DE8E0 = (__int64)&IamTraceLogging::`vftable';
    byte_1808DE8F0 = 0;
    dword_1808DE8F4 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TaskbarPinningTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
