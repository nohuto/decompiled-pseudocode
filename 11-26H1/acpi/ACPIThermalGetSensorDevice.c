/*
 * XREFs of ACPIThermalGetSensorDevice @ 0x140069E88
 * Callers:
 *     ACPIThermalStartDevice @ 0x1400BAC70 (ACPIThermalStartDevice.c)
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x140024BD8 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalGetSensorDevice(_QWORD *a1)
{
  __int64 v2; // rsi
  struct _DEVICE_OBJECT *v3; // r14
  __int64 v4; // rdi
  IRP *Irp; // r12
  PVOID v6; // r15
  __int64 *v7; // rcx
  __int64 *v8; // rax
  NTSTATUS DeviceProperty; // ebx
  __int64 v10; // rcx
  int v11; // eax
  _OWORD *v12; // r13
  NTSTATUS v13; // eax
  KIRQL v14; // dl
  PDEVICE_OBJECT v15; // rdi
  const WCHAR *v16; // r13
  PDEVICE_OBJECT AttachedDeviceReference; // [rsp+60h] [rbp-A0h]
  ULONG BufferLength; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  void *FileHandle; // [rsp+78h] [rbp-88h] BYREF
  PVOID v22; // [rsp+80h] [rbp-80h] BYREF
  PVOID Context; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  __int64 *v25; // [rsp+98h] [rbp-68h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v28; // [rsp+E0h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v30[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v31; // [rsp+120h] [rbp+20h]
  __int128 v32; // [rsp+128h] [rbp+28h] BYREF
  __int128 v33; // [rsp+138h] [rbp+38h]
  __int128 v34; // [rsp+148h] [rbp+48h]

  Context = a1;
  *(_QWORD *)&v34 = 0LL;
  BufferLength = 0;
  v2 = 0LL;
  v22 = 0LL;
  v3 = 0LL;
  v4 = a1[25];
  Irp = 0LL;
  P = 0LL;
  v6 = 0LL;
  FileHandle = 0LL;
  AttachedDeviceReference = 0LL;
  v7 = (__int64 *)a1[95];
  DestinationString = 0LL;
  DWORD2(v34) = 0;
  v32 = 0LL;
  v33 = 0LL;
  IoStatusBlock = 0LL;
  v31 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Object = 0LL;
  memset(v30, 0, sizeof(v30));
  v8 = AMLIGetNamedChild(v7, 1314083935);
  v25 = v8;
  if ( v8 )
  {
    v11 = AMLIEvalNameSpaceObject(v8, (__int64)v30, 0, 0LL);
    v12 = v30;
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 128) & 4) == 0 )
    {
      DeviceProperty = 0;
      *(_QWORD *)(v4 + 208) = *(_QWORD *)(v4 + 192);
      *(_QWORD *)(v4 + 216) = *(_QWORD *)(v4 + 200);
      goto LABEL_43;
    }
    v32 = 0LL;
    v10 = a1[95];
    v33 = 0LL;
    v34 = 0LL;
    v28 = THRM_EXTENSIONS_DSM_UUID;
    v11 = ACPIAmliEvaluateDsm(v10, (unsigned int)&v28, 0, 2, (__int64)&v32, (__int64)&v22);
    v12 = v22;
  }
  DeviceProperty = v11;
  if ( v11 < 0 )
    goto LABEL_30;
  if ( *((_WORD *)v12 + 1) != 2 )
  {
    dword_14008ED38 = 0;
    pszDest = 0;
    DeviceProperty = -1072431095;
    FreeDataBuffs((__int64)v12, 1u);
LABEL_30:
    v15 = 0LL;
    goto LABEL_31;
  }
  v13 = AMLIGetNameSpaceObject(*((_BYTE **)v12 + 4), *((__int64 **)Context + 95), &Object, 0);
  dword_14008ED38 = 0;
  pszDest = 0;
  DeviceProperty = v13;
  FreeDataBuffs((__int64)v12, 1u);
  v6 = Object;
  if ( DeviceProperty < 0 )
    goto LABEL_30;
  if ( !Object )
  {
LABEL_29:
    DeviceProperty = -1073741810;
    goto LABEL_30;
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v2 = *(_QWORD *)(*(_QWORD *)v6 + 104LL);
  if ( !v2 || (*(_BYTE *)(v2 + 8) & 4) != 0 )
  {
    v2 = 0LL;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
    goto LABEL_29;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 728));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  v3 = *(struct _DEVICE_OBJECT **)(v2 + 784);
  if ( v3 )
  {
    ObfReferenceObject(*(PVOID *)(v2 + 784));
    ACPIInternalDecrementIrpReferenceCount(v2);
    v2 = 0LL;
    if ( IoGetDeviceProperty(v3, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &BufferLength) != -1073741789 )
    {
      DeviceProperty = -1073741823;
      goto LABEL_30;
    }
    P = (PVOID)ExAllocatePool2(256LL, BufferLength, 1416651585LL);
    v16 = (const WCHAR *)P;
    if ( !P )
    {
      DeviceProperty = -1073741670;
      goto LABEL_30;
    }
    DeviceProperty = IoGetDeviceProperty(v3, DevicePropertyPhysicalDeviceObjectName, BufferLength, P, &BufferLength);
    if ( DeviceProperty >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v16);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DeviceProperty = ZwCreateFile(
                         &FileHandle,
                         0x1F01FFu,
                         &ObjectAttributes,
                         &IoStatusBlock,
                         0LL,
                         0,
                         3u,
                         1u,
                         0,
                         0LL,
                         0);
      if ( DeviceProperty < 0 )
      {
        FileHandle = 0LL;
        goto LABEL_30;
      }
      Object = 0LL;
      DeviceProperty = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      if ( DeviceProperty >= 0 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(v3);
        Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
        if ( !Irp )
        {
          DeviceProperty = -1073741670;
          v15 = AttachedDeviceReference;
          goto LABEL_31;
        }
        DeviceProperty = IoRegisterPlugPlayNotification(
                           EventCategoryTargetDeviceChange,
                           0,
                           Object,
                           v3->DriverObject,
                           AcpiThermalDeviceTargetChange,
                           Context,
                           (PVOID *)(v4 + 240));
        if ( DeviceProperty >= 0 )
        {
          *(_QWORD *)(v4 + 208) = Irp;
          Irp = 0LL;
          *(_QWORD *)(v4 + 216) = AttachedDeviceReference;
          v15 = 0LL;
          DeviceProperty = 0;
          goto LABEL_31;
        }
      }
    }
    v15 = AttachedDeviceReference;
    goto LABEL_31;
  }
  DeviceProperty = -1073741810;
  v15 = 0LL;
LABEL_31:
  if ( v25 )
    AMLIDereferenceHandleEx((__int64)v25);
  if ( v6 )
    AMLIDereferenceHandleEx((__int64)v6);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v15 )
    ObfDereferenceObject(v15);
  if ( v2 )
    ACPIInternalDecrementIrpReferenceCount(v2);
  if ( P )
    ExFreePoolWithTag(P, 0x54706341u);
LABEL_43:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Irp )
    IoFreeIrp(Irp);
  if ( v22 )
    ExFreePoolWithTag(v22, 0x52706341u);
  return (unsigned int)DeviceProperty;
}
