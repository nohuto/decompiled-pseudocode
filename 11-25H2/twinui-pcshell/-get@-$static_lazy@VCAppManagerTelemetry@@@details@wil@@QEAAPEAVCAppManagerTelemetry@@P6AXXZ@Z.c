/*
 * XREFs of ?get@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z @ 0x1801E6B4C
 * Callers:
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x18001B494 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180085C90 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     atexit @ 0x1802D2608 (atexit.c)
 *     ??1Completer@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ @ 0x1802E427C (--1Completer@-$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<CAppManagerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_1808999B0 = 0LL;
    dword_1808999BC = 0;
    v8 = &qword_1808999A8;
    qword_1808999A8 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`CAppManagerTelemetry::Instance'::`2'::wrapper;
    byte_1808999B8 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<IamTraceLogging>::Completer::~Completer(&v4);
  }
  return v8;
}
