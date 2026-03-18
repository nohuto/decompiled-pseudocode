/*
 * XREFs of PnpProcessTargetDeviceEvent @ 0x1409119E4
 * Callers:
 *     PnpDeviceEventWorker @ 0x1409DCD90 (PnpDeviceEventWorker.c)
 * Callees:
 *     McTemplateK0z_EtwWriteTransfer @ 0x1404A0040 (McTemplateK0z_EtwWriteTransfer.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     PiUEventNotifyUserMode @ 0x1409DD808 (PiUEventNotifyUserMode.c)
 */

__int64 __fastcall PnpProcessTargetDeviceEvent(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  const wchar_t **v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  const wchar_t *v16; // r9
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  v2 = (_QWORD *)*a1;
  v3 = 0;
  P = 0LL;
  v5 = v2[20];
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  PiPnpRtlBeginOperation(&P, a2);
  v8 = v2 + 15;
  v9 = v2[15] - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
  if ( !v9 )
    v9 = v2[16] - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
  if ( v9 )
  {
    v10 = *v8 - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
    if ( *v8 == *(_QWORD *)&GUID_DEVICE_EJECT.Data1 )
      v10 = v2[16] - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
    if ( v10 )
    {
      v11 = *v8 - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
      if ( *v8 == *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1 )
        v11 = v2[16] - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
      if ( v11 )
      {
        memcmp(v8, &GUID_DEVICE_NOOP, 0x10uLL);
        v3 = 0;
      }
      else
      {
        PiUEventNotifyUserMode(v2);
      }
      goto LABEL_13;
    }
    if ( (byte_140EF3DCB & 0x10) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        (__int64)v8,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Start,
        v7,
        *(const wchar_t **)(v6 + 48));
    v3 = PnpProcessQueryRemoveAndEject(a1);
    if ( (byte_140EF3DCB & 0x10) != 0 )
    {
      v16 = *(const wchar_t **)(v6 + 48);
      goto LABEL_26;
    }
  }
  else
  {
    v13 = (const wchar_t **)(v6 + 48);
    if ( (byte_140EF3DCB & 0x10) != 0 )
      McTemplateK0z_EtwWriteTransfer((__int64)v8, (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Start, v7, *v13);
    v3 = PnpProcessQueryRemoveAndEject(a1);
    if ( (byte_140EF3DCB & 0x10) != 0 )
    {
      v16 = *v13;
LABEL_26:
      McTemplateK0z_EtwWriteTransfer(v14, (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Stop, v15, v16);
    }
  }
LABEL_13:
  if ( P )
    PiPnpRtlEndOperation(P);
  return v3;
}
