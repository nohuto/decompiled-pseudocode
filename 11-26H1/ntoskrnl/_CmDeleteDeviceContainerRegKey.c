/*
 * XREFs of _CmDeleteDeviceContainerRegKey @ 0x140B2004C
 * Callers:
 *     _CmDeleteDeviceContainerWorker @ 0x140B1FE00 (_CmDeleteDeviceContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A3FBE4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKey(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r9
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  _DWORD v15[4]; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v16; // [rsp+50h] [rbp-78h]
  int v17; // [rsp+54h] [rbp-74h]
  char v18; // [rsp+58h] [rbp-70h]

  memset_0(v15, 0, 0x58uLL);
  v7 = *(_QWORD *)(a1 + 504);
  v16 = a3;
  v17 = 0;
  v18 = 1;
  if ( v7 )
  {
    v8 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v8 == -1073741822 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( v8 == -1073741536 )
        return v15[0];
      if ( v8 )
        return (unsigned int)-1073741595;
    }
  }
  v9 = CmDeleteDeviceContainerRegKeyWorker(a1, a2, v16, v6, v18);
  v10 = v9;
  if ( !v7 )
    return v10;
  v15[0] = v9;
  v11 = guard_dispatch_icall_no_overrides(a1, a2);
  v12 = v11;
  if ( v11 == -1073741822 )
    return v10;
  if ( v11 == -1073741536 )
    return v15[0];
  v13 = v10;
  if ( v12 )
    return (unsigned int)-1073741595;
  return v13;
}
