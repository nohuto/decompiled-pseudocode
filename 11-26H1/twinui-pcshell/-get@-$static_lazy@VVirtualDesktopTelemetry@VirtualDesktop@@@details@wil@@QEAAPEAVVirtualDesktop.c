/*
 * XREFs of ?get@?$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAAPEAVVirtualDesktopTelemetry@VirtualDesktop@@P6AXXZ@Z @ 0x180563AC8
 * Callers:
 *     ??$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDesktop@@SAXAEAJAEAK$$QEAJ2@Z @ 0x18055BDE0 (--$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDeskt.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x18021BE80 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802C9288 (atexit.c)
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
    v4 = &`VirtualDesktop::VirtualDesktopTelemetry::Instance'::`2'::wrapper;
    v8 = &qword_1808DEB38;
    qword_1808DEB40 = 0LL;
    qword_1808DEB38 = (__int64)&IamTraceLogging::`vftable';
    byte_1808DEB48 = 0;
    dword_1808DEB4C = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
