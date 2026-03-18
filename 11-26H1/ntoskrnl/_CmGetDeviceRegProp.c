/*
 * XREFs of _CmGetDeviceRegProp @ 0x140996210
 * Callers:
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140777048 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     IopIsReportedAlready @ 0x14079EF9C (IopIsReportedAlready.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407A7DB0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1407A7FF4 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407A8DA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1407A9BB0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407AA380 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x1407ABE10 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AC218 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407AC990 (PpDevCfgProcessDeviceReset.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     _CmClassFilterCallback @ 0x140898610 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1408996C0 (_CmServiceFilterCallback.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140909994 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDeviceRegistration @ 0x140912D28 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140912FE0 (PpForEachDeviceInstanceDriver.c)
 *     PipGetRegistryDwordWithFallback @ 0x1409152F8 (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1409153D4 (PipGetRegistrySecurityWithFallback.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1409161E0 (PnpCallDriverQueryServiceHelper.c)
 *     PnpCheckDeviceIdsChanged @ 0x140982820 (PnpCheckDeviceIdsChanged.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1409887D8 (PiDevCfgEnumDeviceKeys.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14098D0F4 (PiPnpRtlSetDeviceRegProperty.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140991A20 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140992EEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140994750 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     IoGetDeviceProperty @ 0x140994C70 (IoGetDeviceProperty.c)
 *     _CmGetDeviceStatus @ 0x14099522C (_CmGetDeviceStatus.c)
 *     PiGetDeviceRegProperty @ 0x14099536C (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140995E20 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x1409963B0 (_CmGetDeviceRegPropWorker.c)
 *     PiCMHandleIoctl @ 0x140997F20 (PiCMHandleIoctl.c)
 *     PiCMValidateDeviceInstance @ 0x14099A028 (PiCMValidateDeviceInstance.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlSetObjectProperty @ 0x1409DBA24 (PiPnpRtlSetObjectProperty.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409DD768 (PiDcHandleCustomDeviceEvent.c)
 *     _CmIsLocalMachineContainer @ 0x140A2A6D8 (_CmIsLocalMachineContainer.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140A82F30 (PiPnpRtlServiceFilterCallback.c)
 *     _CmDeleteDeviceWorker @ 0x140A8A2C4 (_CmDeleteDeviceWorker.c)
 *     PiControlGetPropertyData @ 0x140A8E690 (PiControlGetPropertyData.c)
 *     IopPnPDispatch @ 0x140A9FA40 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     PiQueryRemovableDeviceOverride @ 0x140AA7454 (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AD10DC (PpDevCfgProcessDeviceOperations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF6F40 (PnpIsDeviceInstanceEnabled.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140B0E5C0 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140B0F3DC (PipGenerateContainerID.c)
 *     PiCMQueryRemove @ 0x140B2D27C (PiCMQueryRemove.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B40E8C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B48EE0 (PiCreateDriverSwDeviceCallback.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 *     PipMigrateResetDeviceCallback @ 0x140CC2C10 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140CC2E88 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     _CmGetDeviceRegPropWorker @ 0x1409963B0 (_CmGetDeviceRegPropWorker.c)
 */

__int64 __fastcall CmGetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v12; // r15
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
  v12 = *(_QWORD *)(a1 + 504);
  v18 = a3;
  v19 = a4;
  v20 = a5;
  v21 = a6;
  v22 = a7;
  v23 = a8;
  if ( !v12 )
    goto LABEL_5;
  v13 = guard_dispatch_icall_no_overrides(a1, a2);
  switch ( v13 )
  {
    case -1073741822:
      v12 = 0LL;
      goto LABEL_5;
    case -1073741536:
      return v17[0];
    case 0:
LABEL_5:
      result = CmGetDeviceRegPropWorker(a1, a2, v18, v19, v20, v21, v22, v23);
      v15 = result;
      if ( !v12 )
        return result;
      v17[0] = result;
      v16 = guard_dispatch_icall_no_overrides(a1, a2);
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
