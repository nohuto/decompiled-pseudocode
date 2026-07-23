/*
 * XREFs of _CmGetDeviceRegProp @ 0x140956C70
 * Callers:
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140779EF0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     IopIsReportedAlready @ 0x1407A1ADC (IopIsReportedAlready.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407AA960 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1407AABA4 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1407AC820 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407AD0C0 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x1407AEE54 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AF25C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407AF9D4 (PpDevCfgProcessDeviceReset.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     _CmClassFilterCallback @ 0x14089EA10 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x14089FAC0 (_CmServiceFilterCallback.c)
 *     PnpCheckDeviceIdsChanged @ 0x140944830 (PnpCheckDeviceIdsChanged.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094DB54 (PiPnpRtlSetDeviceRegProperty.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140952480 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409551B0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     _CmGetDeviceStatus @ 0x140955C8C (_CmGetDeviceStatus.c)
 *     PiGetDeviceRegProperty @ 0x140955DCC (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140956880 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x140956E10 (_CmGetDeviceRegPropWorker.c)
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 *     PiCMValidateDeviceInstance @ 0x14095AA88 (PiCMValidateDeviceInstance.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x14096FD64 (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14096FE40 (PipGetRegistrySecurityWithFallback.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140970C4C (PnpCallDriverQueryServiceHelper.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1409ABF4C (PiDcUpdateDeviceContainerMembership.c)
 *     PiDeviceRegistration @ 0x1409B4E08 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409B50C0 (PpForEachDeviceInstanceDriver.c)
 *     _CmDeleteDeviceWorker @ 0x1409B70E4 (_CmDeleteDeviceWorker.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PiQueryRemovableDeviceOverride @ 0x1409DA988 (PiQueryRemovableDeviceOverride.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140A1AA20 (PiDcHandleCustomDeviceEvent.c)
 *     _CmIsLocalMachineContainer @ 0x140A3D768 (_CmIsLocalMachineContainer.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140A42F04 (PiDevCfgEnumDeviceKeys.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140A88DA0 (PiPnpRtlServiceFilterCallback.c)
 *     PiControlGetPropertyData @ 0x140A93360 (PiControlGetPropertyData.c)
 *     IopPnPDispatch @ 0x140AA13D0 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA1A08 (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AE8284 (PpDevCfgProcessDeviceOperations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF95E0 (PnpIsDeviceInstanceEnabled.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140B0FDF8 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140B10C0C (PipGenerateContainerID.c)
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B42E9C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 *     PipMigrateResetDeviceCallback @ 0x140CC8CE0 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140CC8F58 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmGetDeviceRegPropWorker @ 0x140956E10 (_CmGetDeviceRegPropWorker.c)
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
