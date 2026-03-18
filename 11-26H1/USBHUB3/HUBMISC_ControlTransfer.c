/*
 * XREFs of HUBMISC_ControlTransfer @ 0x14002EE1C
 * Callers:
 *     HUBHTX_AckPortChangeUsingControlTransfer @ 0x140002954 (HUBHTX_AckPortChangeUsingControlTransfer.c)
 *     HUBHTX_ClearTTBuffer @ 0x140002E70 (HUBHTX_ClearTTBuffer.c)
 *     HUBHTX_DisablePortUsingControlTransfer @ 0x1400035EC (HUBHTX_DisablePortUsingControlTransfer.c)
 *     HUBHTX_GetDescriptor @ 0x1400046E4 (HUBHTX_GetDescriptor.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1400049CC (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_GetPortStatusForBootDevice @ 0x140004DF4 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBHTX_GetPortStatusUsingControlTransfer @ 0x140005018 (HUBHTX_GetPortStatusUsingControlTransfer.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x140005170 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBHTX_ResetPortUsingControlTransfer @ 0x140005A90 (HUBHTX_ResetPortUsingControlTransfer.c)
 *     HUBHTX_SetLinkStateToRxDetectUsingControlTransfer @ 0x14000602C (HUBHTX_SetLinkStateToRxDetectUsingControlTransfer.c)
 *     HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer @ 0x140006164 (HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer.c)
 *     HUBHTX_SettingPortPowerUsingControlTransfer @ 0x140006298 (HUBHTX_SettingPortPowerUsingControlTransfer.c)
 *     HUBHTX_Suspend30PortUsingControlTransfer @ 0x1400063D0 (HUBHTX_Suspend30PortUsingControlTransfer.c)
 *     HUBHSM_GettingHubStatus @ 0x1400091D0 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SendingAckForHubChange @ 0x140009D90 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_SettingHubDepth @ 0x140009F60 (HUBHSM_SettingHubDepth.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x14000E2A4 (HUBFDO_GetPortStatusForDebugging.c)
 *     HUBPSM20_InitiatingResume @ 0x140012B80 (HUBPSM20_InitiatingResume.c)
 *     HUBPSM20_Suspending @ 0x140013660 (HUBPSM20_Suspending.c)
 *     HUBPSM30_DisablingRemoteWakeOnPort @ 0x140013A80 (HUBPSM30_DisablingRemoteWakeOnPort.c)
 *     HUBPSM30_EnablingRemoteWakeOnPort @ 0x140013C70 (HUBPSM30_EnablingRemoteWakeOnPort.c)
 *     HUBPSM30_InitiatingResume @ 0x140013DE0 (HUBPSM30_InitiatingResume.c)
 *     HUBPSM30_InitiatingWarmResetPort @ 0x140013F20 (HUBPSM30_InitiatingWarmResetPort.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x140014570 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1400146D0 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x14001FDF0 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_ConfiguringDevice @ 0x140021610 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_DisablingU1 @ 0x140021ED0 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x140021FF0 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingLTM @ 0x1400221A0 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_EnablingU1 @ 0x140022270 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x140022340 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x140022F30 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBDSM_SendingDisallowFirmwareUpdateCommand @ 0x140023F90 (HUBDSM_SendingDisallowFirmwareUpdateCommand.c)
 *     HUBDSM_SendingFirmwareImageHashQuery @ 0x140024060 (HUBDSM_SendingFirmwareImageHashQuery.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1400241E0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_SetttingIsochDelay @ 0x140024AD0 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x14002A394 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x14002B120 (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_GetDescriptor @ 0x14002B5F0 (HUBDTX_GetDescriptor.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x14002BA20 (HUBDTX_GetMsOsFeatureDescriptor.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x14002BF10 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x14002BFF4 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x14002C108 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x14002C1D0 (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x14002C2B0 (HUBDTX_SetSelUsingControlTransfer.c)
 *     FWUPDATE_GetMMIO @ 0x1400424C4 (FWUPDATE_GetMMIO.c)
 *     FWUPDATE_SetMMIO @ 0x14004293C (FWUPDATE_SetMMIO.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBMISC_ControlTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        char a9)
{
  _QWORD *v9; // rbx
  int v10; // esi
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // rdx
  int v18; // ebx
  __int64 v19; // rax
  int v21; // [rsp+28h] [rbp-71h]
  __int64 v22; // [rsp+30h] [rbp-69h] BYREF
  int v23; // [rsp+38h] [rbp-61h]
  __int64 v24; // [rsp+3Ch] [rbp-5Dh]
  int v25; // [rsp+44h] [rbp-55h]
  _QWORD v26[9]; // [rsp+48h] [rbp-51h] BYREF

  v9 = a4 + 3;
  v10 = 0;
  a4[4] = a2;
  *((_DWORD *)a4 + 6) = 3276936;
  v14 = 8;
  *((_DWORD *)a4 + 14) = 8;
  if ( a8 )
  {
    v14 = 10;
    *((_DWORD *)a4 + 14) = 10;
  }
  if ( *((char *)a4 + 152) < 0 )
  {
    v14 |= 1u;
    *((_DWORD *)a4 + 14) = v14;
  }
  if ( a9 )
    *((_DWORD *)a4 + 14) = v14 | 0x10;
  *((_DWORD *)a4 + 15) = a7;
  a4[8] = a6;
  a4[9] = 0LL;
  *((_DWORD *)a4 + 20) = 5000;
  *((_DWORD *)a4 + 10) = *((_DWORD *)a4 + 40);
  memset(v26, 0, sizeof(v26));
  v15 = *a4;
  LOBYTE(v26[0]) = 15;
  LODWORD(v26[3]) = 2228227;
  v26[1] = v9;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v15,
    v26);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    *a4,
    a5,
    a3);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          *a4,
          *(_QWORD *)(a1 + 32),
          0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v16, 3, 58, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
    }
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, *a4);
    if ( v10 < 0 )
    {
      v17 = *a4;
      v24 = 0LL;
      v25 = 0;
      v22 = 24LL;
      v23 = 0;
      v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
              WdfDriverGlobals,
              v17,
              &v22);
      if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_14006D2C0);
        v21 = v18;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v19 + 64),
          2u,
          2u,
          0x3Bu,
          (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
          v21);
      }
    }
  }
  return (unsigned int)v10;
}
