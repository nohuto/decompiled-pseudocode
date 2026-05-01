/*
 * XREFs of ?WindowMigrationAnswer_@SnapMigrationHandlerTelemetry@@QEBAX_KAEBUtagRECT@@@Z @ 0x1805B729C
 * Callers:
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805B6E00 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SnapMigrationHandlerTelemetry::WindowMigrationAnswer_(
        SnapMigrationHandlerTelemetry *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  const struct tagRECT *v10; // [rsp+70h] [rbp-28h]
  __int64 v11; // [rsp+78h] [rbp-20h]

  v5 = WindowManagementLogging::Provider((__int64)this);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = a2;
    v8 = &v6;
    v10 = a3;
    v11 = 16LL;
    v9 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, byte_180824A9D, 0LL, 0LL, 4u, &v7);
  }
}
