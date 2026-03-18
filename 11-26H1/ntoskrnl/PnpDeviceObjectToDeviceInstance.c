/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x14090A260
 * Callers:
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A02EC (PiGetDeviceRegistryProperty.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x140908BF0 (PiUpdateDevicePanel.c)
 *     PiCreateDriverSwDevices @ 0x14090988C (PiCreateDriverSwDevices.c)
 *     PnpSaveDeviceCapabilities @ 0x140909F30 (PnpSaveDeviceCapabilities.c)
 *     PiQueryRemovableDeviceOverride @ 0x140AA7454 (PiQueryRemovableDeviceOverride.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x140B13360 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x140996B50 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 48)) != 0 )
    return CmOpenDeviceRegKey(PiPnpRtlCtx, v5, 16, 0, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
