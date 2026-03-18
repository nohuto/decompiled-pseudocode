/*
 * XREFs of _CmDeleteDeviceRegKey @ 0x140A8A734
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A2A8BC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140A8A2C4 (_CmDeleteDeviceWorker.c)
 *     PiCMDeleteDeviceKey @ 0x140B66CDC (PiCMDeleteDeviceKey.c)
 *     PipResetDevice @ 0x140CC2E88 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A2A8BC (_CmDeleteDeviceRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  _DWORD v16[4]; // [rsp+40h] [rbp-51h] BYREF
  int v17; // [rsp+50h] [rbp-41h]
  int v18; // [rsp+54h] [rbp-3Dh]
  char v19; // [rsp+58h] [rbp-39h]
  int v20; // [rsp+5Ch] [rbp-35h]

  memset_0(v16, 0, 0x58uLL);
  v8 = *(_QWORD *)(a1 + 504);
  v18 = a4;
  v17 = a3;
  v19 = 1;
  v20 = 0;
  if ( v8 )
  {
    v9 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return v16[0];
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  v11 = CmDeleteDeviceRegKeyWorker(a1, a2, v17, v18, v19);
  v10 = v11;
  if ( !v8 )
    return v10;
  v16[0] = v11;
  v12 = guard_dispatch_icall_no_overrides(a1, a2);
  v13 = v12;
  if ( v12 == -1073741822 )
    return v10;
  if ( v12 == -1073741536 )
    return v16[0];
  v14 = v10;
  if ( v13 )
    return (unsigned int)-1073741595;
  return v14;
}
