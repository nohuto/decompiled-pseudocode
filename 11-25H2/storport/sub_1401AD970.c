/*
 * XREFs of sub_1401AD970 @ 0x1401AD970
 * Callers:
 *     sub_14001B1A4 @ 0x14001B1A4 (sub_14001B1A4.c)
 *     sub_14003F914 @ 0x14003F914 (sub_14003F914.c)
 *     sub_140042310 @ 0x140042310 (sub_140042310.c)
 *     sub_140044660 @ 0x140044660 (sub_140044660.c)
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 *     sub_14009E38C @ 0x14009E38C (sub_14009E38C.c)
 *     sub_1400BBFCC @ 0x1400BBFCC (sub_1400BBFCC.c)
 *     sub_1400F6764 @ 0x1400F6764 (sub_1400F6764.c)
 *     sub_140127920 @ 0x140127920 (sub_140127920.c)
 *     sub_1401926C4 @ 0x1401926C4 (sub_1401926C4.c)
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401AD970(
        struct _DEVICE_OBJECT *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        _DWORD *KeyHandle)
{
  _DWORD *v6; // r14
  __int64 v7; // r12
  int v10; // r15d
  NTSTATUS v11; // edi
  _DWORD *v12; // rdi
  PVOID SystemRoutineAddress; // rax
  NTSTATUS v14; // eax
  void *DeviceRegKey; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD DestinationString[3]; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  void *Dst; // [rsp+A8h] [rbp-60h] BYREF
  int v21; // [rsp+B0h] [rbp-58h]
  __int64 v22; // [rsp+B8h] [rbp-50h]
  __int64 *v23; // [rsp+C0h] [rbp-48h]
  int v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  int v26; // [rsp+D8h] [rbp-30h]

  v6 = KeyHandle;
  v7 = a4;
  DeviceRegKey = 0LL;
  v10 = *KeyHandle;
  v11 = IoOpenDeviceRegistryKey(a1, 1u, 0x20019u, &DeviceRegKey);
  if ( v11 < 0 )
    return (unsigned int)v11;
  KeyHandle = 0LL;
  HIDWORD(DestinationString[0]) = 0;
  if ( !a2 )
  {
    v12 = DeviceRegKey;
    KeyHandle = DeviceRegKey;
    goto LABEL_5;
  }
  ObjectAttributes.RootDirectory = DeviceRegKey;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = a2;
  v11 = ZwCreateKey((PHANDLE)&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v11 >= 0 )
  {
    v12 = KeyHandle;
LABEL_5:
    LODWORD(DestinationString[0]) = v10;
    v17 = *a5;
    memset_0(&Dst, 0, 0x70uLL);
    v21 = 20;
    v24 = 0;
    Dst = &sub_1401B0650;
    v22 = *(_QWORD *)(a3 + 8);
    v25 = 0LL;
    v23 = &v17;
    v26 = 0;
    *(_OWORD *)&DestinationString[1] = 0LL;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress((PUNICODE_STRING)&DestinationString[1]);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v14 = ((__int64 (__fastcall *)(__int64, _DWORD *, void **, __int64, _QWORD))SystemRoutineAddress)(
            0x40000000LL,
            v12,
            &Dst,
            v7,
            0LL);
    v10 = DestinationString[0];
    v11 = v14;
    *a5 = v17;
    if ( a2 )
      ZwClose(KeyHandle);
  }
  ZwClose(DeviceRegKey);
  if ( v11 >= 0 )
    *v6 = v10;
  return (unsigned int)v11;
}
