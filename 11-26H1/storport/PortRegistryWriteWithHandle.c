/*
 * XREFs of PortRegistryWriteWithHandle @ 0x1401B98A0
 * Callers:
 *     PortRegistryWriteDeviceKey @ 0x1401B90B4 (PortRegistryWriteDeviceKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortRegistryWriteWithHandle(
        void *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        ULONG a4,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS v9; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  if ( a2 )
  {
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = a2;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v9 < 0 )
      return (unsigned int)v9;
    a1 = KeyHandle;
  }
  else
  {
    KeyHandle = a1;
  }
  v9 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)a1, *(PCWSTR *)(a3 + 8), a4, ValueData, ValueLength);
  if ( a2 )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
