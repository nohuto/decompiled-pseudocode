/*
 * XREFs of _CmOpenDeviceRegKey @ 0x1409575B0
 * Callers:
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140780B30 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1407A1ADC (IopIsReportedAlready.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1407A62F0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407A6AB8 (PipApplyFunctionToServiceInstances.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1407A8294 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1407AC988 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407AD0C0 (PiDevCfgProcessDeviceCallback.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1408A175C (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PiCMOpenDeviceKey @ 0x14091C550 (PiCMOpenDeviceKey.c)
 *     PnpCheckDeviceIdsChanged @ 0x140944830 (PnpCheckDeviceIdsChanged.c)
 *     _CmGetDeviceCompoundFilters @ 0x140953508 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409536FC (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409551B0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpDispatchDevice @ 0x140956100 (_PnpDispatchDevice.c)
 *     _CmGetDeviceRegPropWorker @ 0x140956E10 (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140957750 (_CmOpenDeviceRegKeyWorker.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1409AC818 (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x1409AC878 (_CmSetDeviceRegPropWorker.c)
 *     PiQueryResourceRequirements @ 0x1409B2FCC (PiQueryResourceRequirements.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409B50C0 (PpForEachDeviceInstanceDriver.c)
 *     _CmDeleteDeviceWorker @ 0x1409B70E4 (_CmDeleteDeviceWorker.c)
 *     IopReleaseDeviceResources @ 0x1409B7CB4 (IopReleaseDeviceResources.c)
 *     IoOpenDeviceRegistryKey @ 0x140A11740 (IoOpenDeviceRegistryKey.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A3D94C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140A42F04 (PiDevCfgEnumDeviceKeys.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA072C (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x140AA0860 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140AA0C1C (PnpGetDeviceResourcesFromRegistry.c)
 *     IopGetRootDevices @ 0x140AA1748 (IopGetRootDevices.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AADC30 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140AADD7C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgInitDeviceContext @ 0x140AE83CC (PiDevCfgInitDeviceContext.c)
 *     PipMakeGloballyUniqueId @ 0x140AF4A38 (PipMakeGloballyUniqueId.c)
 *     _CmCreateDeviceWorker @ 0x140AF558C (_CmCreateDeviceWorker.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF95E0 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140AF98F0 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B34F1C (PiDevCfgResetDeviceDriverSettings.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140B36034 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B42E9C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140957750 (_CmOpenDeviceRegKeyWorker.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
