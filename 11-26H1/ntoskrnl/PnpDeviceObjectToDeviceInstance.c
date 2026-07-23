/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x1409AC818
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A2E2C (PiGetDeviceRegistryProperty.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x14096ED2C (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1409ABC40 (PiUpdateDevicePanel.c)
 *     PiCreateDriverSwDevices @ 0x1409ABE44 (PiCreateDriverSwDevices.c)
 *     PnpSaveDeviceCapabilities @ 0x1409AC4E8 (PnpSaveDeviceCapabilities.c)
 *     PiQueryRemovableDeviceOverride @ 0x1409DA988 (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 48)) != 0 )
    return CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v5, 16, 0, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
