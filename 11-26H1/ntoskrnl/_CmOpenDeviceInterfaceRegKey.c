/*
 * XREFs of _CmOpenDeviceInterfaceRegKey @ 0x14095F9BC
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14089CE38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14091B4B8 (PiCMOpenDeviceInterfaceKey.c)
 *     _PnpDispatchDeviceInterface @ 0x14095F340 (_PnpDispatchDeviceInterface.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1409606D0 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140971D58 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IoGetDeviceInterfaceAlias @ 0x140A18390 (IoGetDeviceInterfaceAlias.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x140A46004 (PiDevCfgConfigureDeviceInterface.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140AF5078 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF5C1C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF5F94 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140B27930 (IoOpenDeviceInterfaceRegistryKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1409606D0 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKey(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v11; // rsi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  int v17[4]; // [rsp+40h] [rbp-69h] BYREF
  int v18; // [rsp+50h] [rbp-59h]
  int v19; // [rsp+54h] [rbp-55h]
  int v20; // [rsp+58h] [rbp-51h]
  char v21; // [rsp+5Ch] [rbp-4Dh]
  __int64 v22; // [rsp+60h] [rbp-49h]
  _DWORD v23[14]; // [rsp+68h] [rbp-41h] BYREF

  memset_0(v17, 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 504);
  v20 = a5;
  v18 = a3;
  v21 = a6;
  v19 = 0;
  v22 = a7;
  if ( v11 )
  {
    v12 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        goto LABEL_10;
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = CmOpenDeviceInterfaceRegKeyWorker(a1, a2, v18, v19, v20, v21, v22, (__int64)v23);
  v14 = v13;
  if ( !v11 )
    goto LABEL_5;
  v17[0] = v13;
  v16 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v16 == -1073741822 )
    goto LABEL_5;
  if ( v16 == -1073741536 )
  {
LABEL_10:
    v14 = v17[0];
    goto LABEL_5;
  }
  if ( v16 )
    return (unsigned int)-1073741595;
LABEL_5:
  if ( v14 >= 0 && a8 )
    *a8 = v23[0];
  return (unsigned int)v14;
}
