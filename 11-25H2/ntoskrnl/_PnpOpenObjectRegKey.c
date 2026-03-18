/*
 * XREFs of _PnpOpenObjectRegKey @ 0x1408CAD38
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14071C9FC (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14071E240 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14071ECF8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PpDevCfgProcessDeviceClass @ 0x140720574 (PpDevCfgProcessDeviceClass.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140809E68 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14083D1D8 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqOpenObjectRegKey @ 0x14083E018 (PiDqOpenObjectRegKey.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14088E9E0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceReset @ 0x14088ED30 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgQueryDriverNode @ 0x140892318 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x140892A04 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140892AE0 (PiDevCfgQueryObjectProperties.c)
 *     PnpGetObjectProperty @ 0x1408CA860 (PnpGetObjectProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CAF60 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408D0B70 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     PiDevCfgCopyObjectProperties @ 0x14094E3B0 (PiDevCfgCopyObjectProperties.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140951AF0 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpSetObjectPropertyWorker @ 0x140954B4C (_PnpSetObjectPropertyWorker.c)
 *     PiSwPropertySet @ 0x1409550B8 (PiSwPropertySet.c)
 *     PiCMOpenObjectKey @ 0x14095B948 (PiCMOpenObjectKey.c)
 *     PiDqIrpPropertySet @ 0x14095E610 (PiDqIrpPropertySet.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x140A49EF8 (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA500 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchDevice @ 0x1408CB4B0 (_PnpDispatchDevice.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     DrvDbDispatchDriverPackage @ 0x1409303A0 (DrvDbDispatchDriverPackage.c)
 */

__int64 __fastcall PnpOpenObjectRegKey(__int64 a1, __int64 a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // r14
  int v11; // ebx
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, __int64, __int64, int, __int64 *); // r10
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v18; // eax
  unsigned int v19; // ecx
  _DWORD v20[4]; // [rsp+48h] [rbp-69h] BYREF
  int v21; // [rsp+58h] [rbp-59h]
  char v22; // [rsp+5Ch] [rbp-55h]
  __int64 v23; // [rsp+60h] [rbp-51h]
  int v24; // [rsp+68h] [rbp-49h]
  int v25; // [rsp+6Ch] [rbp-45h]
  __int64 v26[2]; // [rsp+98h] [rbp-19h] BYREF
  int v27; // [rsp+A8h] [rbp-9h]
  int v28; // [rsp+ACh] [rbp-5h]

  v7 = a3;
  memset_0(v20, 0, 0x50uLL);
  v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(a1 + 488);
  v21 = a4;
  v11 = 0;
  v22 = a5;
  v23 = a6;
  v25 = 0;
  if ( v10 )
  {
    if ( v10 == PiPnpRtlObjectActionCallback )
      v12 = PiPnpRtlObjectActionCallback(a1, a2, (unsigned int)v7, 2LL, 1, v20);
    else
      v12 = guard_dispatch_icall_no_overrides(a1);
    if ( v12 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return (unsigned int)v20[0];
      if ( v12 )
        return (unsigned int)-1073741595;
    }
    v11 = v25;
  }
  memset_0(v26, 0, 0x40uLL);
  if ( (_WORD)v11 || (unsigned int)(v7 - 1) > 0xA )
  {
    v15 = -1073741811;
  }
  else
  {
    v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int, __int64 *))(a1 + 8 * v7 + 296);
    if ( v13 )
    {
      LODWORD(v26[0]) = v21;
      BYTE4(v26[0]) = v22;
      v26[1] = v23;
      v28 = v11;
      if ( (char *)v13 == (char *)PnpDispatchDevice )
      {
        v14 = PnpDispatchDevice(a1, a2, v7, 2, (__int64)v26);
      }
      else if ( v13 == PnpDispatchDeviceInterface )
      {
        v14 = PnpDispatchDeviceInterface(a1, a2, (unsigned int)v7, 2, v26);
      }
      else if ( (char *)v13 == (char *)DrvDbDispatchDriverPackage )
      {
        v14 = DrvDbDispatchDriverPackage(a1, a2, v7, 2, (__int64)v26);
      }
      else
      {
        v14 = guard_dispatch_icall_no_overrides(a1);
      }
      v15 = v14;
      v16 = v24;
      if ( v15 >= 0 )
        v16 = v27;
      v24 = v16;
    }
    else
    {
      v15 = -1073741822;
    }
  }
  if ( v10 )
  {
    v20[0] = v15;
    v18 = guard_dispatch_icall_no_overrides(a1);
    if ( v18 != -1073741822 )
    {
      if ( v18 != -1073741536 )
      {
        v19 = v15;
        if ( v18 )
          return (unsigned int)-1073741595;
        return v19;
      }
      return (unsigned int)v20[0];
    }
  }
  return (unsigned int)v15;
}
