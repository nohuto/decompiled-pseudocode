/*
 * XREFs of _PnpSetObjectProperty @ 0x1409558B8
 * Callers:
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140711200 (IoReportRootDevice.c)
 *     IoGetDeviceDirectory @ 0x140712DF0 (IoGetDeviceDirectory.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407178C8 (PnpUpdateRebootRequiredReason.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x1407260F0 (PipDmgSaveDeviceDmarPolicy.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x1407261D8 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PiIommuSaveDeviceAtsSettings @ 0x140729DB0 (PiIommuSaveDeviceAtsSettings.c)
 *     PipSetGuestAssignedProperty @ 0x14072A078 (PipSetGuestAssignedProperty.c)
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodeHive @ 0x14072D3A4 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbSetupNodes @ 0x14072D82C (PiDrvDbSetupNodes.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14080E910 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408313BC (PnpUnlinkDeviceRemovalRelations.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     _CmDeleteDeviceWorker @ 0x14099FA74 (_CmDeleteDeviceWorker.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     PipClearDevNodeProblem @ 0x1409AD2C0 (PipClearDevNodeProblem.c)
 *     _CmUpdateDevicePanelInterface @ 0x140A44F60 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x140A45108 (_CmUpdateDevicePanel.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140A65E38 (PnpInitializeInheritedRestrictedSd.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A68A14 (PnpDeleteLockedDeviceNodes.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140A68DF8 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140A75198 (PnpClearDeviceTemporaryProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A776C0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpInitializeSessionId @ 0x140A7A298 (PnpInitializeSessionId.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A7D238 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140A94308 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A9989C (PiDcContainerRequiresConfiguration.c)
 *     PipMigrateResetDeviceCallback @ 0x140C109C0 (PipMigrateResetDeviceCallback.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     _PnpSetObjectPropertyWorker @ 0x140954B4C (_PnpSetObjectPropertyWorker.c)
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
    v15 = guard_dispatch_icall_no_overrides(a1);
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
  v18 = PnpSetObjectPropertyWorker(
          a1,
          a2,
          a3,
          *(void **)v23,
          (_WORD *)v24,
          v25,
          v26,
          v27,
          SecurityDescriptorLength,
          v29);
  v16 = v18;
  if ( v14 )
  {
    v22[0] = v18;
    v19 = guard_dispatch_icall_no_overrides(a1);
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
