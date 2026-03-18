/*
 * XREFs of _CmOpenDeviceInterfaceRegKey @ 0x14095A430
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408085FC (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA500 (_PnpDispatchDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14094D9F0 (PiDevCfgConfigureDeviceInterface.c)
 *     IoGetDeviceInterfaceAlias @ 0x140956090 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1409565C8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140959D88 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14095B57C (PiCMOpenDeviceInterfaceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140A58EDC (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140A592A0 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140A714A0 (_CmCreateDeviceInterfaceWorker.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140AA8710 (IoOpenDeviceInterfaceRegistryKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140959D88 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKey(
        _QWORD *a1,
        const WCHAR *a2,
        unsigned int a3,
        __int64 a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v11)(void *, PCWSTR, unsigned int, int, int, __int64); // rsi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  _DWORD v17[4]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-59h]
  int v19; // [rsp+54h] [rbp-55h]
  ACCESS_MASK v20; // [rsp+58h] [rbp-51h]
  char v21; // [rsp+5Ch] [rbp-4Dh]
  HANDLE *v22; // [rsp+60h] [rbp-49h]
  ULONG v23[14]; // [rsp+68h] [rbp-41h] BYREF

  memset_0(v17, 0, 0x58uLL);
  v11 = (__int64 (__fastcall *)(void *, PCWSTR, unsigned int, int, int, __int64))a1[63];
  v19 = 0;
  v20 = a5;
  v18 = a3;
  v21 = a6;
  v22 = a7;
  if ( v11 )
  {
    if ( v11 == PiPnpRtlCmActionCallback )
      v12 = PiPnpRtlCmActionCallback(a1, a2, 3u, 11, 1, (__int64)v17);
    else
      v12 = guard_dispatch_icall_no_overrides(a1);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        goto LABEL_12;
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = CmOpenDeviceInterfaceRegKeyWorker(a1, a2, v18, v19, v20, v21, v22, v23);
  v14 = v13;
  if ( !v11 )
    goto LABEL_7;
  v17[0] = v13;
  v16 = guard_dispatch_icall_no_overrides(a1);
  if ( v16 == -1073741822 )
    goto LABEL_7;
  if ( v16 == -1073741536 )
  {
LABEL_12:
    v14 = v17[0];
    goto LABEL_7;
  }
  if ( v16 )
    return (unsigned int)-1073741595;
LABEL_7:
  if ( v14 >= 0 && a8 )
    *a8 = v23[0];
  return (unsigned int)v14;
}
