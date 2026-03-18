/*
 * XREFs of UsbhGetPdoRegistryParameter @ 0x140037970
 * Callers:
 *     UsbhExtPropDescSemaphorePresent @ 0x1400427B8 (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhReadPdoRegistryKeys @ 0x1400527E4 (UsbhReadPdoRegistryKeys.c)
 *     UsbhRegPnpStart @ 0x140052B60 (UsbhRegPnpStart.c)
 *     UsbhUpdateRegHubHardResetCount @ 0x140052D00 (UsbhUpdateRegHubHardResetCount.c)
 * Callees:
 *     memmove @ 0x140061600 (memmove.c)
 */

__int64 __fastcall UsbhGetPdoRegistryParameter(
        struct _DEVICE_OBJECT *a1,
        const WCHAR *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        ULONG ResultLength)
{
  bool v8; // cf
  NTSTATUS v11; // edi
  _DWORD *Pool2; // rbx
  NTSTATUS v13; // eax
  unsigned int v14; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  v8 = (_BYTE)ResultLength != 0;
  LOBYTE(ResultLength) = -(char)ResultLength;
  v11 = IoOpenDeviceRegistryKey(a1, 2 - v8, 0x1F0000u, &KeyHandle);
  if ( v11 >= 0 )
  {
    ResultLength = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, a4 + 12, 1112885333LL);
    if ( Pool2 )
    {
      v13 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, a4 + 12, &ResultLength);
      v11 = 0;
      if ( v13 != -2147483643 )
        v11 = v13;
      if ( v11 >= 0 )
      {
        v14 = Pool2[2];
        if ( a4 < v14 )
          v14 = a4;
        memmove(a3, Pool2 + 3, v14);
        if ( a5 )
          *a5 = Pool2[1];
        if ( a6 )
          *a6 = Pool2[2];
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      v11 = -1073741670;
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v11;
}
