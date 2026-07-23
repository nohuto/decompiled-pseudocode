/*
 * XREFs of DrvDbInitializeDatabaseNodeVersion @ 0x1408A62B4
 * Callers:
 *     DrvDbLoadDatabaseNode @ 0x1409788FC (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408A4D3C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 */

__int64 __fastcall DrvDbInitializeDatabaseNodeVersion(_QWORD *a1, __int64 a2)
{
  int v4; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  v4 = PnpCtxRegOpenKey(*a1, *(_QWORD *)(a2 + 96), 0, 0, 2, (__int64)&Handle);
  if ( v4 >= 0 )
  {
    v4 = DrvDbSetDriverDatabaseMappedProperty(
           (__int64)a1,
           *(const wchar_t **)(a2 + 24),
           Handle,
           (__int64)DEVPKEY_DriverDatabase_Version,
           7,
           (int *)(a2 + 68),
           4u);
    if ( v4 >= 0 )
      v4 = DrvDbSetDriverDatabaseMappedProperty(
             (__int64)a1,
             *(const wchar_t **)(a2 + 24),
             Handle,
             (__int64)DEVPKEY_DriverDatabase_SchemaVersion,
             7,
             (int *)(a2 + 72),
             4u);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v4;
}
