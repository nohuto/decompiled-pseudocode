/*
 * XREFs of HUBPDO_PublishDualRoleFeaturesProperty @ 0x140084C8C
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1400167A0 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_PublishDualRoleFeaturesProperty(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-40h]
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+70h] [rbp+8h] BYREF

  HIDWORD(v6[0]) = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *(_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(v3 + 2677);
  v6[0] = 24LL;
  v6[2] = 0LL;
  v6[1] = &DEVPKEY_Device_UsbDualRoleFeatures;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, int, int *))(WdfFunctions_01015
                                                                                                  + 3480))(
             WdfDriverGlobals,
             v2,
             v6,
             7LL,
             4,
             &v7);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v5) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
             2u,
             2u,
             0x65u,
             (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
             v5);
  }
  return result;
}
