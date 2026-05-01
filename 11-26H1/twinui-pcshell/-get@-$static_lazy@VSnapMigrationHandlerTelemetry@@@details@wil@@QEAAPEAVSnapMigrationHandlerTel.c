/*
 * XREFs of ?get@?$static_lazy@VSnapMigrationHandlerTelemetry@@@details@wil@@QEAAPEAVSnapMigrationHandlerTelemetry@@P6AXXZ@Z @ 0x1805B746C
 * Callers:
 *     ?IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z @ 0x1805B6DB4 (-IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z.c)
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805B6E00 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x18021BE80 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<SnapMigrationHandlerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`SnapMigrationHandlerTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8)
    && v6 )
  {
    v4 = &`SnapMigrationHandlerTelemetry::Instance'::`2'::wrapper;
    v8 = &qword_1808DEC48;
    qword_1808DEC50 = 0LL;
    qword_1808DEC48 = (__int64)&IamTraceLogging::`vftable';
    byte_1808DEC58 = 0;
    dword_1808DEC5C = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
