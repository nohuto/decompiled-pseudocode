/*
 * XREFs of _CmOpenDevicePanelRegKey @ 0x1408A0FBC
 * Callers:
 *     _CmCreateDevicePanelWorker @ 0x140781ACC (_CmCreateDevicePanelWorker.c)
 *     _PnpDispatchDevicePanel @ 0x1408A2B60 (_PnpDispatchDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140A3E640 (_CmOpenDevicePanelRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDevicePanelRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v16[4]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h]
  int v18; // [rsp+58h] [rbp-41h]
  char v19; // [rsp+5Ch] [rbp-3Dh]
  __int64 v20; // [rsp+60h] [rbp-39h]
  int v21; // [rsp+68h] [rbp-31h]

  memset_0(v16, 0, 0x58uLL);
  v10 = *(_QWORD *)(a1 + 504);
  v18 = a5;
  v19 = a6;
  v17 = 96LL;
  v20 = a7;
  if ( v10 )
  {
    v11 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_13;
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = CmOpenDevicePanelRegKeyWorker(a1, a2, (unsigned int)v17);
  v13 = v12;
  if ( v10 )
  {
    v16[0] = v12;
    v14 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v14 != -1073741822 )
    {
      if ( v14 != -1073741536 )
      {
        if ( !v14 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
LABEL_13:
      v13 = v16[0];
    }
  }
LABEL_8:
  if ( v13 >= 0 && a8 )
    *a8 = v21;
  return (unsigned int)v13;
}
