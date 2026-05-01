/*
 * XREFs of ?get@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@P6AXXZ@Z @ 0x18009202C
 * Callers:
 *     ?OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800919B0 (-OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x180091DFC (-_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z @ 0x180091FFC (-IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ @ 0x1802C9E0C (--1Completer@-$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<NPSMDesktopShellTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`NPSMDesktopShellTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8)
    && v6 )
  {
    qword_18089D308 = 0LL;
    dword_18089D314 = 0;
    v8 = &qword_18089D300;
    qword_18089D300 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`NPSMDesktopShellTelemetry::Instance'::`2'::wrapper;
    byte_18089D310 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<NPSMDesktopShellTelemetry>::Completer::~Completer(&v4);
  }
  return v8;
}
