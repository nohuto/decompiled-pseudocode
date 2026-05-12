/*
 * XREFs of RaCallMiniportAdapterControl @ 0x14000EF30
 * Callers:
 *     RaidAdapterStopAdapter @ 0x14000EE90 (RaidAdapterStopAdapter.c)
 *     StorEnableAdapterHealthEvents @ 0x14000F3D8 (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x14000F8DC (StorEnableAdapterDiagnosticEvents.c)
 *     RaCallMiniportAdapterControlSafe @ 0x14000FACC (RaCallMiniportAdapterControlSafe.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000FDD0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterSendPowerToMiniport @ 0x14000FFA4 (RaidAdapterSendPowerToMiniport.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRestartAdapter @ 0x1400113C8 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x14002AE80 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     StorPortAdapterIdleState @ 0x1400308C0 (StorPortAdapterIdleState.c)
 *     RaidAdapterRescanBus @ 0x140036EE4 (RaidAdapterRescanBus.c)
 *     StorEnableAdapterOperationalEvents @ 0x14005BE70 (StorEnableAdapterOperationalEvents.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     RaidPowerSettingCallback @ 0x14006D720 (RaidPowerSettingCallback.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x140071250 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterPerfStateCallback @ 0x14007F500 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x14007F5FC (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x14007F758 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x140081C40 (StorPortAdapterPowerControl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x140184FF8 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1401864B4 (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x140186900 (RaidGetStorageAdapterFruIdProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1401B5A80 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401B8714 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaCallMiniportAdapterControl(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rax
  __int64 result; // rax
  int v3; // ecx

  v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( !v1 )
    return 3221225659LL;
  result = v1(*(_QWORD *)(a1 + 240) + 16LL);
  v3 = result;
  if ( (_DWORD)result )
  {
    result = 3221225473LL;
    if ( v3 == 2 )
      return 2147483665LL;
  }
  return result;
}
