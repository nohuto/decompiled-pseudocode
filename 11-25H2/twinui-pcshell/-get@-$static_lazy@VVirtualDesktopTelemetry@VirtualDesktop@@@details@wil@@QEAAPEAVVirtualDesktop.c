/*
 * XREFs of ?get@?$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAAPEAVVirtualDesktopTelemetry@VirtualDesktop@@P6AXXZ@Z @ 0x18053FCC8
 * Callers:
 *     ??$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDesktop@@SAXAEAJAEAK$$QEAJ2@Z @ 0x180538018 (--$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDeskt.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x18022B034 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<VirtualDesktop::VirtualDesktopTelemetry>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(
         &`VirtualDesktop::VirtualDesktopTelemetry::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v8)
    && v6 )
  {
    qword_18089E3F0 = 0LL;
    dword_18089E3FC = 0;
    v8 = &qword_18089E3E8;
    qword_18089E3E8 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`VirtualDesktop::VirtualDesktopTelemetry::Instance'::`2'::wrapper;
    byte_18089E3F8 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
