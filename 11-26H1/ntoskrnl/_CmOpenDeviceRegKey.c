/*
 * XREFs of _CmOpenDeviceRegKey @ 0x140996B50
 * Callers:
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14077DEE4 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x14079EF9C (IopIsReportedAlready.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1407A37B0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407A3F78 (PipApplyFunctionToServiceInstances.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1407A5754 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1407A9D18 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407AA380 (PiDevCfgProcessDeviceCallback.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14089B35C (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14090A260 (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x14090A2C0 (_CmSetDeviceRegPropWorker.c)
 *     PiQueryResourceRequirements @ 0x140910EEC (PiQueryResourceRequirements.c)
 *     PpForEachDeviceInstanceDriver @ 0x140912FE0 (PpForEachDeviceInstanceDriver.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PnpCheckDeviceIdsChanged @ 0x140982820 (PnpCheckDeviceIdsChanged.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1409887D8 (PiDevCfgEnumDeviceKeys.c)
 *     _CmGetDeviceCompoundFilters @ 0x140992AA8 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140992C9C (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140992EEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140994750 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpDispatchDevice @ 0x1409956A0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceRegPropWorker @ 0x1409963B0 (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140996CF0 (_CmOpenDeviceRegKeyWorker.c)
 *     PiCMOpenDeviceKey @ 0x1409FF7B4 (PiCMOpenDeviceKey.c)
 *     IoOpenDeviceRegistryKey @ 0x140A12550 (IoOpenDeviceRegistryKey.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A2A8BC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140A8A2C4 (_CmDeleteDeviceWorker.c)
 *     IopReleaseDeviceResources @ 0x140A8AE94 (IopReleaseDeviceResources.c)
 *     IopGetRootDevices @ 0x140A9FDB8 (IopGetRootDevices.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA5534 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x140AA5668 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140AA5A24 (PnpGetDeviceResourcesFromRegistry.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AAFFE0 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AB012C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgInitDeviceContext @ 0x140AD1214 (PiDevCfgInitDeviceContext.c)
 *     PipMakeGloballyUniqueId @ 0x140AF2168 (PipMakeGloballyUniqueId.c)
 *     _CmCreateDeviceWorker @ 0x140AF2DA0 (_CmCreateDeviceWorker.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF6F40 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140AF7250 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B32ACC (PiDevCfgResetDeviceDriverSettings.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140B33BE4 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B40E8C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140996CF0 (_CmOpenDeviceRegKeyWorker.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6, __int64 a7, _DWORD *a8)
{
  __int64 v8; // rsi
  __int64 Pool2; // rax
  int *v14; // rbx
  int v15; // eax
  _DWORD *v16; // r15
  int v17; // eax
  int v18; // edi
  int v20; // eax
  __int64 v21; // [rsp+28h] [rbp-30h]

  v8 = *(_QWORD *)(a1 + 504);
  Pool2 = ExAllocatePool2(0x100uLL);
  v14 = (int *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = a3;
    *(_DWORD *)(Pool2 + 20) = a4;
    *(_DWORD *)(Pool2 + 24) = a5;
    *(_BYTE *)(Pool2 + 28) = a6;
    *(_QWORD *)(Pool2 + 32) = a7;
    if ( v8 )
    {
      v21 = Pool2;
      v15 = guard_dispatch_icall_no_overrides(a1, a2);
      if ( v15 == -1073741822 )
      {
        v8 = 0LL;
      }
      else
      {
        if ( v15 == -1073741536 )
        {
          v18 = *v14;
          v16 = v14 + 10;
          goto LABEL_6;
        }
        if ( v15 )
          goto LABEL_17;
      }
    }
    v16 = v14 + 10;
    LOBYTE(v21) = *((_BYTE *)v14 + 28);
    v17 = CmOpenDeviceRegKeyWorker(
            a1,
            a2,
            (unsigned int)v14[4],
            (unsigned int)v14[5],
            v14[6],
            v21,
            *((_QWORD *)v14 + 4),
            v14 + 10);
    v18 = v17;
    if ( !v8 )
      goto LABEL_6;
    *v14 = v17;
    v20 = guard_dispatch_icall_no_overrides(a1, a2);
    switch ( v20 )
    {
      case -1073741822:
        goto LABEL_6;
      case -1073741536:
        v18 = *v14;
        goto LABEL_6;
      case 0:
LABEL_6:
        if ( v18 >= 0 )
        {
          if ( a8 )
            *a8 = *v16;
        }
        goto LABEL_9;
    }
LABEL_17:
    v18 = -1073741595;
LABEL_9:
    ExFreePoolWithTag(v14, 0);
    return (unsigned int)v18;
  }
  return 3221225495LL;
}
