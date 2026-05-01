/*
 * XREFs of ?WindowMigrationAnswer_@SnapMigrationHandlerTelemetry@@QEBAX_KAEBUtagRECT@@@Z @ 0x180593314
 * Callers:
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x180592E30 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
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
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  const struct tagRECT *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  v5 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
  {
    v13 = 0;
    v10 = 0;
    v8 = &v6;
    v6 = a2;
    v11 = a3;
    v12 = 16;
    v9 = 8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, byte_1807E8D45, 0LL, 0LL, 4u, &v7);
  }
}
