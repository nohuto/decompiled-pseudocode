/*
 * XREFs of ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006280
 * Callers:
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140006020 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009122C (-ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisShouldEngageNicAutoPowerSaver(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_POWER_STATE DeviceWake; // ecx
  int v3; // edx

  if ( !a1->AoAc )
    return 0;
  if ( (a1->PnPFlags & 0x60) != 0x60 )
    return 0;
  DeviceWake = a1->DeviceCaps.DeviceWake;
  if ( DeviceWake != PowerDeviceD1 && (unsigned int)(DeviceWake - 3) > 1 )
    return 0;
  if ( (a1->PMHardwareCapabilities.Flags & 4) == 0 || ndisAoAcIsControlPathAoAcNicReferencePresent(a1) )
    return 0;
  if ( ndisIsScreenOnNapsEnabled == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        15,
        42,
        (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
        (char)a1);
    }
    return 1;
  }
  if ( !ndisLowPowerEpoch && !ndisConnectedStandby )
    return 0;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 1;
  WPP_RECORDER_SF_qDL(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v3,
    15,
    43,
    (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
    (char)a1,
    ndisLowPowerEpoch,
    ndisConnectedStandby);
  return 1;
}
