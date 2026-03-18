/*
 * XREFs of _CmOpenDeviceInterfaceRegKey @ 0x14099EF5C
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140896A38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1409172EC (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14098B8E4 (PiDevCfgConfigureDeviceInterface.c)
 *     _PnpDispatchDeviceInterface @ 0x14099E8E0 (_PnpDispatchDeviceInterface.c)
 *     IopGetDeviceInterfaces @ 0x14099F270 (IopGetDeviceInterfaces.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14099FC70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     IoGetDeviceInterfaceAlias @ 0x1409DB140 (IoGetDeviceInterfaceAlias.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140ABE0C4 (PiCMOpenDeviceInterfaceKey.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140AF288C (_CmCreateDeviceInterfaceWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF342C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF37A4 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140B256D0 (IoOpenDeviceInterfaceRegistryKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14099FC70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
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
