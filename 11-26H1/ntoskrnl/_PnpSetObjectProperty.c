/*
 * XREFs of _PnpSetObjectProperty @ 0x140A19100
 * Callers:
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14077F604 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PiIommuSaveDeviceAtsSettings @ 0x140781A50 (PiIommuSaveDeviceAtsSettings.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407A15F0 (IoReportRootDevice.c)
 *     IoGetDeviceDirectory @ 0x1407A30F0 (IoGetDeviceDirectory.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407A76B0 (PnpUpdateRebootRequiredReason.c)
 *     PipSetGuestAssignedProperty @ 0x1407B7C1C (PipSetGuestAssignedProperty.c)
 *     PiDrvDbRegisterNode @ 0x1407B9BF0 (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodeHive @ 0x1407BAE00 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbSetupNodes @ 0x1407BB288 (PiDrvDbSetupNodes.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x14096ED2C (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x14096F000 (PipDmgSaveDeviceDmarPolicy.c)
 *     PipDmgSaveDeviceDmarAvailability @ 0x14096F1E4 (PipDmgSaveDeviceDmarAvailability.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PnpStartDeviceNode @ 0x1409B2B5C (PnpStartDeviceNode.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409B337C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1409B6D78 (PnpDeleteLockedDeviceNodes.c)
 *     _CmDeleteDeviceWorker @ 0x1409B70E4 (_CmDeleteDeviceWorker.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     _CmUpdateDevicePanelInterface @ 0x140A151A0 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x140A16A1C (_CmUpdateDevicePanel.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140B054E0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcContainerRequiresConfiguration @ 0x140B06B60 (PiDcContainerRequiresConfiguration.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140B09F00 (PnpInitializeInheritedRestrictedSd.c)
 *     PnpInitializeSessionId @ 0x140B1B3F8 (PnpInitializeSessionId.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140B1B6A4 (PnpClearDeviceTemporaryProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B20F30 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140B24BE8 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140B4043C (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PipMigrateResetDeviceCallback @ 0x140CC8CE0 (PipMigrateResetDeviceCallback.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpSetObjectPropertyWorker @ 0x140A193D0 (_PnpSetObjectPropertyWorker.c)
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
  int v23[2]; // [rsp+68h] [rbp-29h]
  __int64 v24; // [rsp+70h] [rbp-21h]
  __int64 v25; // [rsp+78h] [rbp-19h]
  int v26; // [rsp+80h] [rbp-11h]
  __int64 v27; // [rsp+88h] [rbp-9h]
  ULONG SecurityDescriptorLength; // [rsp+90h] [rbp-1h]
  int v29; // [rsp+94h] [rbp+3h]

  memset_0(v22, 0, 0x50uLL);
  v14 = *(_QWORD *)(a1 + 488);
  v24 = a5;
  v25 = a6;
  v26 = a7;
  v27 = a8;
  SecurityDescriptorLength = a9;
  v29 = a10;
  *(_QWORD *)v23 = a4;
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
  v18 = PnpSetObjectPropertyWorker(a1, a2, a3, v23[0], v24, v25, v26, v27, SecurityDescriptorLength, v29);
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
