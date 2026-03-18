/*
 * XREFs of UsbDevice_UcxEvtDeviceAdd @ 0x140082490
 * Callers:
 *     <none>
 * Callees:
 *     Etw_DeviceCreate @ 0x1400022D8 (Etw_DeviceCreate.c)
 *     XilUsbDevice_Create @ 0x140003D5C (XilUsbDevice_Create.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     Controller_AddDeviceToControllerDeviceList @ 0x140033BE0 (Controller_AddDeviceToControllerDeviceList.c)
 *     WPP_RECORDER_SF_dqd @ 0x140034850 (WPP_RECORDER_SF_dqd.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDeviceAdd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  int v6; // eax
  int v7; // edx
  int v8; // r15d
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int64 v12; // rcx
  __int64 v14; // [rsp+28h] [rbp-D8h]
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh]
  __int64 (__fastcall *v19)(__int64); // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-A0h]
  int v21; // [rsp+68h] [rbp-98h]
  int v22; // [rsp+6Ch] [rbp-94h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  void *v24; // [rsp+80h] [rbp-80h]
  _QWORD v25[10]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v26; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v27)(__int64, __int64, _DWORD *); // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v28)(__int64, __int64, __int64, __int64, unsigned __int8 *, __int64, __int64); // [rsp+F8h] [rbp-8h]
  int v29; // [rsp+100h] [rbp+0h] BYREF
  __int128 v30; // [rsp+104h] [rbp+4h]
  __int64 v31; // [rsp+114h] [rbp+14h]

  v16 = a3;
  HIDWORD(v25[0]) = 0;
  v18 = 0;
  v20 = 0LL;
  v15 = 0LL;
  v31 = 0LL;
  v23 = 0LL;
  v30 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  v25[0] = 112LL;
  v25[1] = UsbDevice_UcxEvtEndpointsConfigure;
  v25[2] = UsbDevice_UcxEvtEnable;
  v25[3] = UsbDevice_UcxEvtDisable;
  v25[4] = UsbDevice_UcxEvtReset;
  v25[5] = UsbDevice_UcxEvtAddress;
  v25[6] = UsbDevice_UcxEvtUpdate;
  v25[7] = UsbDevice_UcxEvtHubInfo;
  v25[8] = Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd;
  v25[9] = Endpoint_UcxEvtUsbDeviceEndpointAdd;
  v26 = 0LL;
  if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline() )
    v28 = Endpoint_UcxEvtUsbDeviceEndpointAdd_V2;
  else
    v28 = 0LL;
  v27 = UsbDevice_UcxEvtUsbDeviceGetCharacteristic;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_14006BC40)(UcxDriverGlobals, v16, v25);
  v23 = 0LL;
  v18 = 0;
  v20 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v17 = -1;
    else
      v17 = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v17 = 56;
  }
  v21 = 1;
  v22 = 1;
  v24 = off_14006B128;
  v19 = UsbDevice_EvtUsbDeviceCleanupCallback;
  v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, int *, __int64 *))qword_14006BC38)(
         UcxDriverGlobals,
         a1,
         &v16,
         &v17,
         &v15);
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v5 + 72),
        v7,
        12,
        11,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        v15);
    }
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
           WdfDriverGlobals,
           v15,
           off_14006B128);
    *(_QWORD *)v9 = v15;
    *(_QWORD *)(v9 + 8) = v5;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)a2;
    *(_OWORD *)(v9 + 32) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v9 + 64) = *(_OWORD *)(a2 + 48);
    v10 = *(_OWORD *)(a2 + 28);
    v29 = *(_DWORD *)(a2 + 20);
    v11 = *(_QWORD *)(a2 + 44);
    v30 = v10;
    v31 = v11;
    v8 = XilUsbDevice_Create(v9, (__int64)&v29);
    if ( v8 >= 0 )
    {
      KeInitializeSpinLock((PKSPIN_LOCK)(v9 + 96));
      *(_DWORD *)(v9 + 120) = 0;
      *(_QWORD *)(v9 + 112) = v9 + 104;
      *(_QWORD *)(v9 + 104) = v9 + 104;
      Controller_AddDeviceToControllerDeviceList(v5, v15, (_QWORD *)(v9 + 80));
      Etw_DeviceCreate(v12, v9);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = *(_DWORD *)(v9 + 20);
        WPP_RECORDER_SF_dqd(
          *(_QWORD *)(v5 + 72),
          4u,
          0xCu,
          0xCu,
          (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
          v14,
          *(_QWORD *)(v9 + 24),
          *(_DWORD *)(v9 + 44));
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), v7, 12, 10, (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids, v6);
  }
  return (unsigned int)v8;
}
