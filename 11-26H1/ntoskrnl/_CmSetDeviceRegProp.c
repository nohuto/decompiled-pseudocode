/*
 * XREFs of _CmSetDeviceRegProp @ 0x1409AC6A0
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407A15F0 (IoReportRootDevice.c)
 *     PiDcResetChildDeviceContainers @ 0x1407AABA4 (PiDcResetChildDeviceContainers.c)
 *     IopCreateLegacyDeviceIds @ 0x1407B52F8 (IopCreateLegacyDeviceIds.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094DB54 (PiPnpRtlSetDeviceRegProperty.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140956880 (_CmGetDeviceSoftwareKeyPath.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1409ABF4C (PiDcUpdateDeviceContainerMembership.c)
 *     PnpSaveDeviceCapabilities @ 0x1409AC4E8 (PnpSaveDeviceCapabilities.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A3D94C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x140AADA38 (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     PipMigrateResetDeviceCallback @ 0x140CC8CE0 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140CC8F58 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmSetDeviceRegPropWorker @ 0x1409AC878 (_CmSetDeviceRegPropWorker.c)
 */

__int64 __fastcall CmSetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8)
{
  __int64 v12; // r14
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _DWORD v20[4]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v21; // [rsp+50h] [rbp-59h]
  unsigned int v22; // [rsp+58h] [rbp-51h]
  int v23; // [rsp+5Ch] [rbp-4Dh]
  __int64 v24; // [rsp+60h] [rbp-49h]
  int v25; // [rsp+68h] [rbp-41h]
  int v26; // [rsp+6Ch] [rbp-3Dh]

  memset_0(v20, 0, 0x58uLL);
  v12 = *(_QWORD *)(a1 + 504);
  v23 = a5;
  v25 = a7;
  v21 = a3;
  v22 = a4;
  v26 = a8;
  v24 = a6;
  if ( v12 )
  {
    v13 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return v20[0];
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v16 = CmSetDeviceRegPropWorker(a1, a2, v21, v22, v23, v24, v25, v26);
  v14 = v16;
  if ( v12 )
  {
    v20[0] = v16;
    v17 = guard_dispatch_icall_no_overrides(a1, a2);
    v18 = v17;
    if ( v17 != -1073741822 )
    {
      if ( v17 == -1073741536 )
        return v20[0];
      v19 = v14;
      if ( v18 )
        return (unsigned int)-1073741595;
      return v19;
    }
  }
  return v14;
}
