/*
 * XREFs of HUBPDO_BillboardCleanup @ 0x140080EF8
 * Callers:
 *     HUBPDO_EvtDeviceCleanup @ 0x1400155A0 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x140083C50 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x14000CC0C (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

void __fastcall HUBPDO_BillboardCleanup(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  int updated; // eax
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 2656) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v11[1] = &DEVPKEY_Device_UsbBillboardInfo;
    v11[0] = 24LL;
    v11[2] = 0LL;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, _DWORD, _QWORD))(WdfFunctions_01015 + 3480))(
           WdfDriverGlobals,
           v3,
           v11,
           4099LL,
           0,
           0LL);
    if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x5Eu,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v9);
    }
    v5 = HUBFDO_CleanupDeviceInterfaceForBillboard(
           *(_QWORD *)a1,
           *(_WORD *)(*(_QWORD *)(a1 + 16) + 48LL),
           *(_QWORD *)(a1 + 2664),
           *(_BYTE *)(a1 + 2672));
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x5Fu,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v9);
    }
    updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL, 0, 0);
    if ( updated < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = updated;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x60u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v10);
    }
    v7 = **(void ***)(a1 + 2656);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x68334855u);
    **(_QWORD **)(a1 + 2656) = 0LL;
    v8 = *(void **)(a1 + 2656);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x68334855u);
    *(_QWORD *)(a1 + 2656) = 0LL;
  }
}
