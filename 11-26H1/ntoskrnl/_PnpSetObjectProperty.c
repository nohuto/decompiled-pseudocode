/*
 * XREFs of _PnpSetObjectProperty @ 0x1409DBEB0
 * Callers:
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14077CB10 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PiIommuSaveDeviceAtsSettings @ 0x14077EF50 (PiIommuSaveDeviceAtsSettings.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14079EAB0 (IoReportRootDevice.c)
 *     IoGetDeviceDirectory @ 0x1407A05B0 (IoGetDeviceDirectory.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407A4B70 (PnpUpdateRebootRequiredReason.c)
 *     PipSetGuestAssignedProperty @ 0x1407B4BBC (PipSetGuestAssignedProperty.c)
 *     PiDrvDbRegisterNode @ 0x1407B6B90 (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodeHive @ 0x1407B7DA0 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbSetupNodes @ 0x1407B8228 (PiDrvDbSetupNodes.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     PnpStartDeviceNode @ 0x140910A7C (PnpStartDeviceNode.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14091129C (PnpUnlinkDeviceRemovalRelations.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x140914594 (PipDmgSaveDeviceDmarPolicy.c)
 *     PipDmgSaveDeviceDmarAvailability @ 0x140914778 (PipDmgSaveDeviceDmarAvailability.c)
 *     PipClearDevNodeProblem @ 0x140914C5C (PipClearDevNodeProblem.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     _CmUpdateDevicePanel @ 0x1409D97C8 (_CmUpdateDevicePanel.c)
 *     PiPnpRtlSetObjectProperty @ 0x1409DBA24 (PiPnpRtlSetObjectProperty.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A89F58 (PnpDeleteLockedDeviceNodes.c)
 *     _CmDeleteDeviceWorker @ 0x140A8A2C4 (_CmDeleteDeviceWorker.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     _CmUpdateDevicePanelInterface @ 0x140AF175C (_CmUpdateDevicePanelInterface.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140B038D0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcContainerRequiresConfiguration @ 0x140B04F50 (PiDcContainerRequiresConfiguration.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140B07DD0 (PnpInitializeInheritedRestrictedSd.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x140B13360 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PnpInitializeSessionId @ 0x140B18FB0 (PnpInitializeSessionId.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140B19254 (PnpClearDeviceTemporaryProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B1EEB0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140B227E8 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140B3E404 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PipMigrateResetDeviceCallback @ 0x140CC2C10 (PipMigrateResetDeviceCallback.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     _PnpSetObjectPropertyWorker @ 0x1409DC180 (_PnpSetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpSetObjectProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        ULONG a9,
        int a10)
{
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _DWORD v22[4]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v23; // [rsp+68h] [rbp-29h]
  __int64 v24; // [rsp+70h] [rbp-21h]
  __int64 v25; // [rsp+78h] [rbp-19h]
  int v26; // [rsp+80h] [rbp-11h]
  __int64 v27; // [rsp+88h] [rbp-9h]
  ULONG v28; // [rsp+90h] [rbp-1h]
  int v29; // [rsp+94h] [rbp+3h]

  memset_0(v22, 0, 0x50uLL);
  v14 = *(_QWORD *)(a1 + 488);
  v24 = a5;
  v25 = a6;
  v26 = a7;
  v27 = a8;
  v28 = a9;
  v29 = a10;
  v23 = a4;
  if ( v14 )
  {
    v15 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return v22[0];
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  v18 = PnpSetObjectPropertyWorker(a1, a2, a3, v23, v24, v25, v26, v27, v28, v29);
  v16 = v18;
  if ( v14 )
  {
    v22[0] = v18;
    v19 = guard_dispatch_icall_no_overrides(a1, a2);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return v22[0];
      v21 = v16;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v16;
}
