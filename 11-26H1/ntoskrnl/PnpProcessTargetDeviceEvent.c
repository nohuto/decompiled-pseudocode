/*
 * XREFs of PnpProcessTargetDeviceEvent @ 0x1409B3AC4
 * Callers:
 *     PnpDeviceEventWorker @ 0x140A1A040 (PnpDeviceEventWorker.c)
 * Callees:
 *     McTemplateK0z_EtwWriteTransfer @ 0x140499B90 (McTemplateK0z_EtwWriteTransfer.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 */

__int64 __fastcall PnpProcessTargetDeviceEvent(_QWORD *a1)
{
  _QWORD *v1; // rsi
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  const wchar_t **v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  const wchar_t *v15; // r9
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  v1 = (_QWORD *)*a1;
  v2 = 0;
  P = 0LL;
  v4 = v1[20];
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  PiPnpRtlBeginOperation(&P);
  v7 = v1 + 15;
  v8 = v1[15] - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
  if ( !v8 )
    v8 = v1[16] - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
  if ( v8 )
  {
    v9 = *v7 - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
    if ( *v7 == *(_QWORD *)&GUID_DEVICE_EJECT.Data1 )
      v9 = v1[16] - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
    if ( v9 )
    {
      v10 = *v7 - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
      if ( *v7 == *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1 )
        v10 = v1[16] - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
      if ( v10 )
      {
        memcmp(v7, &GUID_DEVICE_NOOP, 0x10uLL);
        v2 = 0;
      }
      else
      {
        PiUEventNotifyUserMode(v1);
      }
      goto LABEL_13;
    }
    if ( (byte_140EF412B & 0x10) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        (__int64)v7,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Start,
        v6,
        *(const wchar_t **)(v5 + 48));
    v2 = PnpProcessQueryRemoveAndEject(a1);
    if ( (byte_140EF412B & 0x10) != 0 )
    {
      v15 = *(const wchar_t **)(v5 + 48);
      goto LABEL_26;
    }
  }
  else
  {
    v12 = (const wchar_t **)(v5 + 48);
    if ( (byte_140EF412B & 0x10) != 0 )
      McTemplateK0z_EtwWriteTransfer((__int64)v7, (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Start, v6, *v12);
    v2 = PnpProcessQueryRemoveAndEject(a1);
    if ( (byte_140EF412B & 0x10) != 0 )
    {
      v15 = *v12;
LABEL_26:
      McTemplateK0z_EtwWriteTransfer(v13, (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Stop, v14, v15);
    }
  }
LABEL_13:
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return v2;
}
