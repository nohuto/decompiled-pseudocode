/*
 * XREFs of PiIommuSaveDeviceAtsSettings @ 0x14077EF50
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x140915648 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PiIommuSaveDeviceAtsSettings(__int64 a1, int a2)
{
  __int64 v3; // rdx
  char v5; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v5 = (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 16LL) >> 2) | *(_BYTE *)(*(_QWORD *)(a1 + 720) + 16LL) & 0x40) >> 5;
  return PnpSetObjectProperty(
           PiPnpRtlCtx,
           v3,
           1,
           a2,
           0LL,
           (__int64)DEVPKEY_Device_AtsSettings,
           4099,
           (__int64)&v5,
           1,
           0);
}
