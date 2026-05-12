/*
 * XREFs of sub_1400465E0 @ 0x1400465E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14003BC28 @ 0x14003BC28 (sub_14003BC28.c)
 *     sub_14003C2CC @ 0x14003C2CC (sub_14003C2CC.c)
 *     sub_140044B70 @ 0x140044B70 (sub_140044B70.c)
 *     sub_14004534C @ 0x14004534C (sub_14004534C.c)
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_1400C8EEC @ 0x1400C8EEC (sub_1400C8EEC.c)
 *     sub_1400C9020 @ 0x1400C9020 (sub_1400C9020.c)
 *     sub_140178008 @ 0x140178008 (sub_140178008.c)
 *     sub_1401780C8 @ 0x1401780C8 (sub_1401780C8.c)
 *     sub_1401AD970 @ 0x1401AD970 (sub_1401AD970.c)
 *     sub_1401B06F4 @ 0x1401B06F4 (sub_1401B06F4.c)
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 *     sub_1401B43C0 @ 0x1401B43C0 (sub_1401B43C0.c)
 */

__int64 __fastcall sub_1400465E0(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  struct _DRIVER_OBJECT *v3; // r14
  _DWORD *v4; // rsi
  char *DeviceExtension; // r15
  char v6; // bl
  KSPIN_LOCK *DriverObjectExtension; // r13
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdi
  char v11; // al
  int v12; // ecx
  ULONG v13; // edx
  int v14; // edi
  __int64 v15; // r8
  PDEVICE_OBJECT v16; // rax
  struct _DEVICE_OBJECT *v17; // r14
  int v18; // eax
  KSPIN_LOCK **v19; // rcx
  KSPIN_LOCK v20; // rdx
  KSPIN_LOCK *v21; // rax
  PDEVICE_OBJECT SourceDevice; // [rsp+40h] [rbp-49h] BYREF
  int v24; // [rsp+48h] [rbp-41h] BYREF
  int v25; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v26; // [rsp+50h] [rbp-39h] BYREF
  BOOL v27; // [rsp+54h] [rbp-35h] BYREF
  int v28; // [rsp+58h] [rbp-31h]
  __int64 v29; // [rsp+60h] [rbp-29h] BYREF
  struct _UNICODE_STRING v30; // [rsp+68h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-11h] BYREF
  struct _UNICODE_STRING DeviceName; // [rsp+88h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp+Fh] BYREF
  char v35; // [rsp+100h] [rbp+77h]
  int KeyHandle; // [rsp+108h] [rbp+7Fh] BYREF

  KeyHandle = 0;
  SourceDevice = 0LL;
  v3 = DriverObject;
  v24 = 0;
  v4 = 0LL;
  v25 = 0;
  DeviceExtension = 0LL;
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v26 = 0;
  DestinationString = 0LL;
  v27 = 0;
  v30 = 0LL;
  v35 = 0;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 11LL, &unk_140148948, DriverObject, DeviceObject);
  }
  DeviceName = 0LL;
  DriverObjectExtension = (KSPIN_LOCK *)IoGetDriverObjectExtension(v3, StorPortGetSrb);
  sub_14003BC28((__int64)DeviceObject, &DeviceName, (unsigned __int32 *)&v24);
  v8 = sub_140044B70(DeviceObject);
  v9 = 0LL;
  if ( v8 != -1 )
    v9 = v8;
  v10 = sub_140178008(DriverObjectExtension, v9);
  v11 = sub_1401780C8(DriverObjectExtension + 5, &KeyHandle);
  v12 = KeyHandle;
  if ( !v11 )
    v12 = 127;
  v28 = v12;
  if ( v12 == 20 )
  {
    v6 = 1;
    goto LABEL_30;
  }
  if ( v12 == 17 )
  {
    if ( byte_14016874A )
      goto LABEL_36;
    if ( v10 && (*(_DWORD *)(v10 + 184) & 0x40000000) != 0 )
    {
      if ( byte_140168D80 )
      {
        if ( byte_14016875C )
          v6 = 1;
      }
      else if ( byte_140168748 )
      {
        v6 = 1;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v30, L"EnableNVMeInterface");
    v29 = (__int64)&v25;
    KeyHandle = 4;
    if ( (int)sub_1401AD970((int)DeviceObject, (int)&DestinationString, (int)&v30, 4, (__int64)&v29, &KeyHandle) < 0 )
    {
      if ( !v6 )
        goto LABEL_29;
    }
    else
    {
      if ( !v25 )
      {
LABEL_23:
        v6 = 0;
LABEL_29:
        v3 = DriverObject;
        goto LABEL_30;
      }
      v6 = 1;
    }
    if ( !v10 || (*(_DWORD *)(v10 + 184) & 0x40000000) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"StorPort");
      RtlInitUnicodeString(&v30, L"DMArSupport");
      v29 = (__int64)&v26;
      KeyHandle = 4;
      if ( (int)sub_1401AD970((int)DeviceObject, (int)&DestinationString, (int)&v30, 4, (__int64)&v29, &KeyHandle) >= 0 )
      {
        v27 = v26 != 0;
        RtlInitUnicodeString(&DestinationString, L"DMA Management");
        RtlInitUnicodeString(&v30, L"RemappingSupported");
        sub_1401B06F4((_DWORD)DeviceObject, (unsigned int)&DestinationString, (unsigned int)&v30, 4, (__int64)&v27, 4);
      }
      goto LABEL_29;
    }
    goto LABEL_23;
  }
LABEL_30:
  if ( !byte_14016874A && v10 && (*(_DWORD *)(v10 + 184) & 0x40000) != 0 )
  {
    v6 = 1;
    v35 = 1;
LABEL_35:
    v13 = 1424;
    goto LABEL_37;
  }
  if ( v6 )
    goto LABEL_35;
LABEL_36:
  v13 = 48 * dword_14016843C + 6272;
LABEL_37:
  v14 = IoCreateDevice(v3, v13, &DeviceName, 4u, 0x100u, 0, &SourceDevice);
  if ( v14 < 0 )
    goto LABEL_57;
  if ( v6 )
  {
    LOBYTE(v15) = v35;
    DeviceExtension = (char *)SourceDevice->DeviceExtension;
    v14 = sub_1400C8EEC(DeviceExtension, SourceDevice, v15);
    if ( v14 < 0 )
      goto LABEL_58;
  }
  else
  {
    v4 = SourceDevice->DeviceExtension;
    v14 = sub_14004534C(v4);
    if ( v14 < 0 )
      goto LABEL_60;
  }
  v16 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
  v17 = v16;
  if ( !v16 )
  {
    v14 = -1073741823;
    goto LABEL_57;
  }
  if ( v6 )
    v18 = sub_1401B43C0(
            (int)DeviceExtension,
            (int)SourceDevice,
            (int)DriverObjectExtension,
            (int)v16,
            DeviceObject,
            (__int64)&DeviceName,
            v24,
            v28);
  else
    v18 = sub_1401B34BC(
            (int)v4,
            (int)SourceDevice,
            (int)DriverObjectExtension,
            (int)v16,
            DeviceObject,
            (__int64)&DeviceName,
            v24,
            v28);
  DeviceName.Buffer = 0LL;
  v14 = v18;
  if ( v18 < 0 )
  {
    IoDetachDevice(v17);
LABEL_57:
    if ( v6 )
    {
LABEL_58:
      if ( DeviceExtension )
        sub_1400C9020(DeviceExtension);
LABEL_62:
      if ( SourceDevice )
        IoDeleteDevice(SourceDevice);
      goto LABEL_64;
    }
LABEL_60:
    if ( v4 )
      sub_140045574((__int64)v4);
    goto LABEL_62;
  }
  KeAcquireInStackQueuedSpinLock(DriverObjectExtension + 10, &LockHandle);
  v19 = (KSPIN_LOCK **)(DriverObjectExtension + 7);
  v20 = DriverObjectExtension[7];
  if ( v6 )
    v21 = (KSPIN_LOCK *)(DeviceExtension + 64);
  else
    v21 = (KSPIN_LOCK *)(v4 + 16);
  if ( *(KSPIN_LOCK ***)(v20 + 8) != v19 )
    __fastfail(3u);
  *v21 = v20;
  v21[1] = (KSPIN_LOCK)v19;
  *(_QWORD *)(v20 + 8) = v21;
  *v19 = v21;
  ++*((_DWORD *)DriverObjectExtension + 18);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v6 )
    sub_14003C2CC((__int64)v4);
  SourceDevice->Flags |= 0x10u;
  SourceDevice->Flags &= ~0x80u;
LABEL_64:
  if ( DeviceName.Buffer )
    ExFreePoolWithTag(DeviceName.Buffer, 0x53446152u);
  return (unsigned int)v14;
}
