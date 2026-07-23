/*
 * XREFs of _CmCreateDeviceContainer @ 0x140AE65A8
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x140AE6180 (_CmAddDeviceToContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmCreateDeviceContainerWorker @ 0x140AE6728 (_CmCreateDeviceContainerWorker.c)
 */

__int64 __fastcall CmCreateDeviceContainer(__int64 a1, __int64 a2, __int64 a3, HANDLE *a4, _BYTE *a5)
{
  __int64 v8; // rdi
  int v9; // eax
  int v10; // ebx
  int DeviceContainerWorker; // eax
  int v13; // eax
  int v14[4]; // [rsp+40h] [rbp-59h] BYREF
  int v15; // [rsp+50h] [rbp-49h]
  HANDLE Handle; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v17[4]; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+64h] [rbp-35h]

  memset_0(v14, 0, 0x58uLL);
  v8 = *(_QWORD *)(a1 + 504);
  v15 = 4;
  v18 = 0;
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
      {
LABEL_4:
        v10 = v14[0];
        goto LABEL_5;
      }
      if ( v9 )
      {
LABEL_19:
        v10 = -1073741595;
        goto LABEL_6;
      }
    }
  }
  DeviceContainerWorker = CmCreateDeviceContainerWorker(a1, a2, v15, (unsigned int)&Handle, (__int64)v17, v18);
  v10 = DeviceContainerWorker;
  if ( !v8 )
    goto LABEL_5;
  v14[0] = DeviceContainerWorker;
  v13 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v13 == -1073741536 )
    goto LABEL_4;
  if ( v13 != -1073741822 && v13 )
    goto LABEL_19;
LABEL_5:
  if ( v10 >= 0 && a4 )
  {
    *a4 = Handle;
LABEL_9:
    if ( a5 )
      *a5 = v17[0];
    return (unsigned int)v10;
  }
LABEL_6:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 >= 0 )
    goto LABEL_9;
  return (unsigned int)v10;
}
