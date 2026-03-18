/*
 * XREFs of _CmOpenDeviceContainerRegKey @ 0x14095C134
 * Callers:
 *     _CmCreateDeviceContainerWorker @ 0x14094F244 (_CmCreateDeviceContainerWorker.c)
 *     _PnpDispatchDeviceContainer @ 0x14095C2A0 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14095B2D0 (_CmOpenDeviceContainerRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  __int64 v10; // r9
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  int v17[4]; // [rsp+40h] [rbp-59h] BYREF
  int v18; // [rsp+50h] [rbp-49h]
  int v19; // [rsp+54h] [rbp-45h]
  ACCESS_MASK v20; // [rsp+58h] [rbp-41h]
  char v21; // [rsp+5Ch] [rbp-3Dh]
  HANDLE *v22; // [rsp+60h] [rbp-39h]
  ULONG v23[14]; // [rsp+68h] [rbp-31h] BYREF

  memset_0(v17, 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 504);
  v19 = 0;
  v20 = a5;
  v21 = a6;
  v18 = 80;
  v22 = a7;
  if ( v11 )
  {
    v12 = guard_dispatch_icall_no_overrides(a1);
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
  v13 = CmOpenDeviceContainerRegKeyWorker(a1, a2, v18, v10, v20, v21, v22, v23);
  v14 = v13;
  if ( !v11 )
    goto LABEL_5;
  v17[0] = v13;
  v16 = guard_dispatch_icall_no_overrides(a1);
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
