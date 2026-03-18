/*
 * XREFs of _CmDeleteDeviceInterfaceRegKey @ 0x140B5EC1C
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x140773764 (PiCMDeleteDeviceInterfaceKey.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x140B4383C (_CmDeleteDeviceInterfaceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140896A38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceRegKey(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  _DWORD v16[4]; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-31h]
  unsigned int v18; // [rsp+54h] [rbp-2Dh]
  char v19; // [rsp+58h] [rbp-29h]
  int v20; // [rsp+5Ch] [rbp-25h]

  memset_0(v16, 0, 0x58uLL);
  v8 = *(_QWORD *)(a1 + 504);
  v19 = a5;
  v17 = a3;
  v18 = 0;
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
  v10 = CmDeleteDeviceInterfaceRegKeyWorker(a1, a2, v17, v18, v19);
  v11 = v10;
  if ( !v8 )
    return v11;
  v16[0] = v10;
  v12 = guard_dispatch_icall_no_overrides(a1, a2);
  v13 = v12;
  if ( v12 == -1073741822 )
    return v11;
  if ( v12 == -1073741536 )
    return v16[0];
  v14 = v11;
  if ( v13 )
    return (unsigned int)-1073741595;
  return v14;
}
