/*
 * XREFs of DpiGetRegistryPathFromPDO @ 0x1400856C4
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x140087478 (DpiGetDeviceRegistryPaths.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x140197AD8 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x14022FAE8 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // ebx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v6; // rdi
  unsigned __int16 v7; // r8
  void *v8; // rax
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  Length = 0;
  v4 = IoOpenDeviceRegistryKey(a1, 2 - (a2 != 0), 0x20019u, &KeyHandle);
  if ( v4 >= 0 )
  {
    v4 = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
    if ( v4 == -1073741789 )
    {
      Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, Length, 1953656900LL);
      v6 = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, Length);
        v4 = ZwQueryKey(KeyHandle, KeyNameInformation, v6, Length, &Length);
        if ( v4 >= 0 )
        {
          v7 = *v6;
          *a3 = *v6;
          a3[1] = v7 + 2;
          v8 = (void *)ExAllocatePool2(256LL, (unsigned __int16)(v7 + 2), 1953656900LL);
          *((_QWORD *)a3 + 1) = v8;
          if ( v8 )
          {
            memset(v8, 0, a3[1]);
            memmove(*((void **)a3 + 1), v6 + 2, *a3);
          }
          else
          {
            v4 = -1073741801;
            WdLogSingleEntry1(6LL);
            WdLogGlobalForLineNumber = 5733;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 5716;
        }
        ExFreePoolWithTag(v6, 0x74727044u);
      }
      else
      {
        v4 = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 5699;
      }
    }
    ZwClose(KeyHandle);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5665;
  }
  return (unsigned int)v4;
}
