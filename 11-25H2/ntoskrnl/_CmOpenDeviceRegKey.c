/*
 * XREFs of _CmOpenDeviceRegKey @ 0x1408C89F0
 * Callers:
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1407116EC (IopIsReportedAlready.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407169C0 (PipApplyFunctionToServiceInstances.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140718808 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14071E398 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14071E9F0 (PiDevCfgProcessDeviceCallback.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14080E124 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14080E248 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14080F71C (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1408317BC (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x140831F94 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x140832B48 (IopQueryDeviceResources.c)
 *     PnpCheckDeviceIdsChanged @ 0x140868014 (PnpCheckDeviceIdsChanged.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14088E9E0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgInitDeviceContext @ 0x140890EB0 (PiDevCfgInitDeviceContext.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C7ED0 (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C8BA0 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpDispatchDevice @ 0x1408CB4B0 (_PnpDispatchDevice.c)
 *     _CmCreateDeviceWorker @ 0x14094E998 (_CmCreateDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14094F0B4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140950AE0 (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x140951084 (_CmSetDeviceRegPropWorker.c)
 *     PiCMOpenDeviceKey @ 0x14095B740 (PiCMOpenDeviceKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14095F65C (PiDevCfgEnumDeviceKeys.c)
 *     _CmDeleteDeviceWorker @ 0x14099FA74 (_CmDeleteDeviceWorker.c)
 *     IopReleaseDeviceResources @ 0x1409A0C90 (IopReleaseDeviceResources.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409A913C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409AA514 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409AAA04 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceCompoundFilters @ 0x1409AAC80 (_CmGetDeviceCompoundFilters.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     IoOpenDeviceRegistryKey @ 0x1409B2B40 (IoOpenDeviceRegistryKey.c)
 *     PpForEachDeviceInstanceDriver @ 0x140A46EA4 (PpForEachDeviceInstanceDriver.c)
 *     PipMakeGloballyUniqueId @ 0x140A5491C (PipMakeGloballyUniqueId.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A5BF4C (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A5C26C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopGetRootDevices @ 0x140A608F8 (IopGetRootDevices.c)
 *     PiQueryResourceRequirements @ 0x140A64274 (PiQueryResourceRequirements.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A7798C (_CmDeleteDeviceRegKeyWorker.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A886D8 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A968D4 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140AB8700 (PnpGetDeviceInstanceRegistryValue.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C8BA0 (_CmOpenDeviceRegKeyWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__usercall *v8)@<rax>(int@<ecx>, PCWSTR@<rdx>, int@<r8d>, int, __int64); // rsi
  __int64 Pool2; // rax
  char *v14; // rbx
  int v15; // eax
  int v16; // edi
  _DWORD *v17; // rax
  int v19; // ecx

  v8 = *(__int64 (__usercall **)@<rax>(int@<ecx>, PCWSTR@<rdx>, int@<r8d>, int, __int64))(a1 + 504);
  Pool2 = ExAllocatePool2(0x100uLL);
  v14 = (char *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = a3;
    *(_DWORD *)(Pool2 + 20) = a4;
    *(_DWORD *)(Pool2 + 24) = a5;
    *(_BYTE *)(Pool2 + 28) = a6;
    *(_QWORD *)(Pool2 + 32) = a7;
    if ( v8 )
    {
      if ( v8 == PiPnpRtlCmActionCallback )
        v15 = PiPnpRtlCmActionCallback(a1, a2, 1, 1, Pool2);
      else
        v15 = guard_dispatch_icall_no_overrides(a1);
      if ( v15 == -1073741822 )
      {
        v8 = 0LL;
      }
      else
      {
        if ( v15 == -1073741536 )
        {
          v16 = *(_DWORD *)v14;
          v17 = v14 + 40;
          goto LABEL_8;
        }
        if ( v15 )
          goto LABEL_20;
      }
    }
    v16 = CmOpenDeviceRegKeyWorker(a1, *((_DWORD *)v14 + 6), v14[28], *((_QWORD *)v14 + 4), (__int64)(v14 + 40));
    v17 = v14 + 40;
    if ( !v8 )
      goto LABEL_8;
    *(_DWORD *)v14 = v16;
    v19 = guard_dispatch_icall_no_overrides(a1);
    v17 = v14 + 40;
    switch ( v19 )
    {
      case -1073741822:
        goto LABEL_8;
      case -1073741536:
        v16 = *(_DWORD *)v14;
        goto LABEL_8;
      case 0:
LABEL_8:
        if ( v16 >= 0 )
        {
          if ( a8 )
            *a8 = *v17;
        }
        goto LABEL_11;
    }
LABEL_20:
    v16 = -1073741595;
LABEL_11:
    ExFreePoolWithTag(v14, 0);
    return (unsigned int)v16;
  }
  return 3221225495LL;
}
