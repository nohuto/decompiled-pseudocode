/*
 * XREFs of _CmOpenDeviceContainerRegKey @ 0x140A3C1F0
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140A3BF10 (_PnpDispatchDeviceContainer.c)
 *     _CmCreateDeviceContainerWorker @ 0x140AE6728 (_CmCreateDeviceContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A3C990 (_CmOpenDeviceContainerRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  int v10; // r9d
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  int v17[4]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v18; // [rsp+50h] [rbp-49h]
  int v19; // [rsp+58h] [rbp-41h]
  char v20; // [rsp+5Ch] [rbp-3Dh]
  __int64 v21; // [rsp+60h] [rbp-39h]
  _DWORD v22[14]; // [rsp+68h] [rbp-31h] BYREF

  memset_0(v17, 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 504);
  v19 = a5;
  v20 = a6;
  v18 = 80LL;
  v21 = a7;
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
  v13 = CmOpenDeviceContainerRegKeyWorker(a1, a2, v18, v10, v19, v20, v21, (__int64)v22);
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
    *a8 = v22[0];
  return (unsigned int)v14;
}
