/*
 * XREFs of ?get@?$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAAPEAVStartWindowTelemetry@@P6AXXZ@Z @ 0x1801C9568
 * Callers:
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x1801C9528 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAA@XZ @ 0x180238A40 (--1Completer@-$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<StartWindowTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_18089DFC0 = 0LL;
    dword_18089DFCC = 0;
    v8 = &qword_18089DFB8;
    qword_18089DFB8 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`StartWindowTelemetry::Instance'::`2'::wrapper;
    byte_18089DFC8 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<StartWindowTelemetry>::Completer::~Completer(&v4);
  }
  return v8;
}
