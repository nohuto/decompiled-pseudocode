/*
 * XREFs of _CmGetDeviceRegProp @ 0x1408C7D10
 * Callers:
 *     IopIsReportedAlready @ 0x1407116EC (IopIsReportedAlready.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14071A824 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14071BA00 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x14071BC50 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14071C9FC (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14071E240 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14071E9F0 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x140720574 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072097C (PpDevCfgProcessDeviceExtensions.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     _CmClassFilterCallback @ 0x14080AED0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x14080BF80 (_CmServiceFilterCallback.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PiQueryRemovableDeviceOverride @ 0x14082E4B8 (PiQueryRemovableDeviceOverride.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PiControlGetPropertyData @ 0x140834060 (PiControlGetPropertyData.c)
 *     IoGetDeviceProperty @ 0x140834450 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x140834998 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x14083D860 (_CmGetDeviceSoftwareKeyPath.c)
 *     PnpCheckDeviceIdsChanged @ 0x140868014 (PnpCheckDeviceIdsChanged.c)
 *     PpDevCfgProcessDeviceReset @ 0x14088ED30 (PpDevCfgProcessDeviceReset.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1408905EC (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C7ED0 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094EE88 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140950B3C (PiDcUpdateDeviceContainerMembership.c)
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 *     _CmIsLocalMachineContainer @ 0x14095CD8C (_CmIsLocalMachineContainer.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14095F65C (PiDevCfgEnumDeviceKeys.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14096D434 (PiDcHandleCustomDeviceEvent.c)
 *     _CmDeleteDeviceWorker @ 0x14099FA74 (_CmDeleteDeviceWorker.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1409A8AF8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceStatus @ 0x1409A9004 (_CmGetDeviceStatus.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409A913C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409AA514 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PipGetRegistryDwordWithFallback @ 0x1409AC2FC (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1409AC3D8 (PipGetRegistrySecurityWithFallback.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1409AD6E4 (PnpCallDriverQueryServiceHelper.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140A00B50 (PiPnpRtlServiceFilterCallback.c)
 *     PiDeviceRegistration @ 0x140A46BD8 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140A46EA4 (PpForEachDeviceInstanceDriver.c)
 *     IopPnPDispatch @ 0x140A5AF70 (IopPnPDispatch.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A5BF4C (PnpIsDeviceInstanceEnabled.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140A6C9F8 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140A6E420 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A968D4 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9DAA0 (PiCreateDriverSwDeviceCallback.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140AB73CC (PiCMQueryRemove.c)
 *     PipMigrateResetDeviceCallback @ 0x140C109C0 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140C10C10 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C7ED0 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 */

__int64 __fastcall CmGetDeviceRegProp(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 (__usercall *v12)@<rax>(int@<ecx>, PCWSTR@<rdx>, int@<r8d>, int, __int64); // r15
  int v13; // eax
  __int64 result; // rax
  unsigned int v15; // ebx
  int v16; // eax
  _DWORD v17[4]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-A8h]
  unsigned int v19; // [rsp+58h] [rbp-A0h]
  __int64 v20; // [rsp+60h] [rbp-98h]
  __int64 v21; // [rsp+68h] [rbp-90h]
  __int64 v22; // [rsp+70h] [rbp-88h]
  int v23; // [rsp+78h] [rbp-80h]

  memset_0(v17, 0, 0x58uLL);
  v12 = *(__int64 (__usercall **)@<rax>(int@<ecx>, PCWSTR@<rdx>, int@<r8d>, int, __int64))(a1 + 504);
  v21 = a6;
  v18 = a3;
  v19 = a4;
  v20 = a5;
  v22 = a7;
  v23 = a8;
  if ( !v12 )
    goto LABEL_7;
  if ( v12 == PiPnpRtlCmActionCallback )
    v13 = PiPnpRtlCmActionCallback(a1, a2, 1, 1, (__int64)v17);
  else
    v13 = guard_dispatch_icall_no_overrides(a1);
  switch ( v13 )
  {
    case -1073741822:
      v12 = 0LL;
      goto LABEL_7;
    case -1073741536:
      return v17[0];
    case 0:
LABEL_7:
      result = CmGetDeviceRegPropWorker(a1, a2, v18, v19, v20, v21, v22, v23);
      v15 = result;
      if ( !v12 )
        return result;
      v17[0] = result;
      if ( v12 == PiPnpRtlCmActionCallback )
        v16 = PiPnpRtlCmActionCallback(a1, a2, 1, 2, (__int64)v17);
      else
        v16 = guard_dispatch_icall_no_overrides(a1);
      if ( v16 == -1073741822 )
        return v15;
      if ( v16 != -1073741536 )
      {
        if ( v16 )
          return 3221225701LL;
        return v15;
      }
      return v17[0];
  }
  return 3221225701LL;
}
