/*
 * XREFs of HUBUCX_SubmitUcxIoctl @ 0x140028CF4
 * Callers:
 *     HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure @ 0x14001F890 (HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x140020040 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x140023B00 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x140023CA0 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SettingNonZeroAddress @ 0x140024860 (HUBDSM_SettingNonZeroAddress.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x140024E40 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x14002623C (HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x140026F30 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x140027078 (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x140027134 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1400286F4 (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x140028A04 (HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x140028AB8 (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x140028B68 (HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl.c)
 *     HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x140028C44 (HUBUCX_StartDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x140029800 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x140029944 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x140018FF4 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_SubmitUcxIoctl(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v6; // rbp
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+60h] [rbp-28h] BYREF
  int v17; // [rsp+68h] [rbp-20h]
  __int64 v18; // [rsp+6Ch] [rbp-1Ch]
  int v19; // [rsp+74h] [rbp-14h]

  v2 = *a1;
  v18 = 0LL;
  v4 = a1[53];
  v6 = *(_QWORD *)(v2 + 32);
  v19 = 0;
  v16 = 24LL;
  v17 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v4,
         &v16);
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006D2C0);
    v15 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v15);
  }
  v9 = a1[55];
  v10 = a1[53];
  *((_DWORD *)a1 + 112) = a2;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
          WdfDriverGlobals,
          v6,
          v10,
          a2,
          v9,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    *((_DWORD *)a1 + 392) = v11;
    *((_DWORD *)a1 + 393) = HUBPDO_GetUSBDErrorFromNTStatus(v11);
LABEL_8:
    HUBSM_AddEvent((__int64)(a1 + 64), 4020);
    return (unsigned int)v12;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64 *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    a1[53],
    HUBUCX_UCXIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          a1[53],
          v6,
          0LL) )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
            WdfDriverGlobals,
            a1[53]);
    *((_DWORD *)a1 + 392) = v13;
    v12 = v13;
    *((_DWORD *)a1 + 393) = HUBPDO_GetUSBDErrorFromNTStatus(v13);
    if ( v12 < 0 )
      goto LABEL_8;
  }
  return (unsigned int)v12;
}
