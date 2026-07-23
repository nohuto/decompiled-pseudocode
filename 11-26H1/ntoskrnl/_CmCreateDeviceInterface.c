/*
 * XREFs of _CmCreateDeviceInterface @ 0x140AF4EDC
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x14095F340 (_PnpDispatchDeviceInterface.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140AF5078 (_CmCreateDeviceInterfaceWorker.c)
 */

__int64 __fastcall CmCreateDeviceInterface(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 v10; // rsi
  int v11; // eax
  int DeviceInterfaceWorker; // eax
  int v13; // ebx
  int v15; // eax
  int v16[4]; // [rsp+40h] [rbp-59h] BYREF
  int v17; // [rsp+50h] [rbp-49h]
  HANDLE Handle; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v19[4]; // [rsp+60h] [rbp-39h] BYREF
  int v20; // [rsp+64h] [rbp-35h]

  memset_0(v16, 0, 0x58uLL);
  v10 = *(_QWORD *)(a1 + 504);
  if ( a3 || (v17 = 1, a4) )
    v17 = a3;
  v20 = a6;
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
      {
LABEL_25:
        v13 = v16[0];
        goto LABEL_8;
      }
      if ( v11 )
        goto LABEL_17;
    }
  }
  DeviceInterfaceWorker = CmCreateDeviceInterfaceWorker(a1, a2, v17, (unsigned int)&Handle, (__int64)v19, v20);
  v13 = DeviceInterfaceWorker;
  if ( v10 )
  {
    v16[0] = DeviceInterfaceWorker;
    v15 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v15 != -1073741822 )
    {
      if ( v15 != -1073741536 )
      {
        if ( !v15 )
          goto LABEL_8;
LABEL_17:
        v13 = -1073741595;
        goto LABEL_9;
      }
      goto LABEL_25;
    }
  }
LABEL_8:
  if ( v13 >= 0 && a4 )
  {
    *a4 = Handle;
LABEL_15:
    if ( a5 )
      *a5 = v19[0];
    return (unsigned int)v13;
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  if ( v13 >= 0 )
    goto LABEL_15;
  return (unsigned int)v13;
}
