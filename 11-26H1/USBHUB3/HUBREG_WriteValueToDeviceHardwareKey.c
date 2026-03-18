/*
 * XREFs of HUBREG_WriteValueToDeviceHardwareKey @ 0x14008D3D0
 * Callers:
 *     HUBMISC_InstallMsOs20RegistryProperties @ 0x140030834 (HUBMISC_InstallMsOs20RegistryProperties.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x140086E00 (HUBMISC_ParseAndWriteCustomPropertiesInRegistry.c)
 *     HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x140087334 (HUBMISC_SetExtPropDescSemaphoreInRegistry.c)
 *     HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended @ 0x1400880B0 (HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended.c)
 *     HUBREG_UpdateSqmEnumerationFailureCode @ 0x14008C8A4 (HUBREG_UpdateSqmEnumerationFailureCode.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBREG_WriteValueToDeviceHardwareKey(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int16 v13; // r9
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  v16 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v6);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
          WdfDriverGlobals,
          v10,
          1LL,
          131078LL,
          0LL,
          &v16);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    v13 = 96;
    goto LABEL_7;
  }
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, __int64))(WdfFunctions_01015
                                                                                               + 1928))(
          WdfDriverGlobals,
          v16,
          a2,
          a3,
          a4,
          a5);
  v12 = v11;
  if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 97;
LABEL_7:
    LODWORD(v15) = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v13,
      (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
      v15);
  }
LABEL_8:
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v12;
}
