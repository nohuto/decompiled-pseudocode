/*
 * XREFs of _CmDeleteDeviceRegKey @ 0x1409A0558
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     _CmDeleteDeviceWorker @ 0x14099FA74 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A7798C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiCMDeleteDeviceKey @ 0x140AB8E44 (PiCMDeleteDeviceKey.c)
 *     PipResetDevice @ 0x140C10C10 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A7798C (_CmDeleteDeviceRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v15; // [rsp+20h] [rbp-71h]
  _DWORD v16[6]; // [rsp+40h] [rbp-51h] BYREF
  char v17; // [rsp+58h] [rbp-39h]
  int v18; // [rsp+5Ch] [rbp-35h]

  memset_0(v16, 0, 0x58uLL);
  v7 = *(_QWORD *)(a1 + 504);
  v18 = 0;
  v16[5] = a4;
  v16[4] = a3;
  v17 = 1;
  if ( v7 )
  {
    v15 = 1;
    v8 = guard_dispatch_icall_no_overrides(a1);
    if ( v8 == -1073741822 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( v8 == -1073741536 )
        return v16[0];
      if ( v8 )
        return (unsigned int)-1073741595;
    }
  }
  LOBYTE(v15) = v17;
  v10 = CmDeleteDeviceRegKeyWorker(a1, v15);
  v9 = v10;
  if ( !v7 )
    return v9;
  v16[0] = v10;
  v11 = guard_dispatch_icall_no_overrides(a1);
  v12 = v11;
  if ( v11 == -1073741822 )
    return v9;
  if ( v11 == -1073741536 )
    return v16[0];
  v13 = v9;
  if ( v12 )
    return (unsigned int)-1073741595;
  return v13;
}
