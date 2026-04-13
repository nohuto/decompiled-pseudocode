/*
 * XREFs of ?get@?$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@details@wil@@QEAAPEAVContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@P6AXXZ@Z @ 0x1800457A4
 * Callers:
 *     ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180043930 (-FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA.c)
 * Callees:
 *     atexit @ 0x180021B40 (atexit.c)
 *     ??1Completer@?$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@details@wil@@QEAA@XZ @ 0x180042D34 (--1Completer@-$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@.c)
 */

__int64 *__fastcall wil::details::static_lazy<ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry>::get(
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
  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v8)
    && v6 )
  {
    v4 = &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper;
    v8 = &qword_180180100;
    qword_180180108 = 0LL;
    qword_180180100 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    byte_180180110 = 0;
    dword_180180114 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
