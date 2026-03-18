/*
 * XREFs of IopGetRegistryKeyInformation @ 0x140A74810
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140A731C8 (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryDeviceDescription @ 0x140A73E4C (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140A744A8 (pIoQueryBusDescription.c)
 * Callees:
 *     ZwQueryKey @ 0x1407236B0 (ZwQueryKey.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryKeyInformation(HANDLE KeyHandle, _QWORD *a2)
{
  NTSTATUS result; // eax
  void *Pool2; // rbx
  NTSTATUS v6; // edi
  ULONG Length; // [rsp+50h] [rbp+18h] BYREF

  Length = 0;
  result = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( result == -1073741789 || result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v6 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool2, Length, &Length);
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return v6;
      }
      else
      {
        *a2 = Pool2;
        return 0;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
