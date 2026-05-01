/*
 * XREFs of ?get@?$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAAPEAVTouchKeyboardTelemetry@@P6AXXZ@Z @ 0x180476114
 * Callers:
 *     ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_N_N_N_NPEBGPEBGPEBGPEBGPEBGPEBGPEBGPEBG_NAEA_NAEAU?$atomic@_N@std@@HAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N54444000000004AEA_NAEAU?$atomic@_N@std@@$$QEAH6@Z @ 0x180473460 (--$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUI.c)
 *     ?IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z @ 0x180474D78 (-IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     atexit @ 0x1802D2608 (atexit.c)
 *     ??1Completer@?$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAA@XZ @ 0x180473DD4 (--1Completer@-$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<TouchKeyboardTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`TouchKeyboardTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_18089E2E0 = 0LL;
    dword_18089E2EC = 0;
    v8 = &qword_18089E2D8;
    qword_18089E2D8 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`TouchKeyboardTelemetry::Instance'::`2'::wrapper;
    byte_18089E2E8 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TouchKeyboardTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
