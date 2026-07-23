/*
 * XREFs of IopAttachDeviceToDeviceStackSafe @ 0x140446FF4
 * Callers:
 *     IoAttachDeviceToDeviceStack @ 0x140446FB0 (IoAttachDeviceToDeviceStack.c)
 *     IoAttachDeviceToDeviceStackSafe @ 0x140446FD0 (IoAttachDeviceToDeviceStackSafe.c)
 *     IoAttachDeviceByPointer @ 0x1405CD6B0 (IoAttachDeviceByPointer.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x14026E884 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     IoGetAttachedDevice @ 0x1404472B0 (IoGetAttachedDevice.c)
 *     PnpCheckForWaitingReportedDevice @ 0x1404472DC (PnpCheckForWaitingReportedDevice.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140447340 (IopIsKnownGoodLegacyFsFilter.c)
 *     IoGetDiskDeviceObject @ 0x1404C9730 (IoGetDiskDeviceObject.c)
 *     McTemplateK0hzr0_EtwWriteTransfer @ 0x1405CE054 (McTemplateK0hzr0_EtwWriteTransfer.c)
 *     McTemplateK0hzr0hzr2_EtwWriteTransfer @ 0x1405CE0D8 (McTemplateK0hzr0hzr2_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObQueryNameString @ 0x140922620 (ObQueryNameString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     IovAttachDeviceToDeviceStack @ 0x140C26C28 (IovAttachDeviceToDeviceStack.c)
 */

PDEVICE_OBJECT __fastcall IopAttachDeviceToDeviceStackSafe(__int64 a1, struct _DEVICE_OBJECT *a2, PDEVICE_OBJECT *a3)
{
  bool v4; // di
  bool v5; // r15
  PDEVICE_OBJECT AttachedDevice; // rsi
  char v9; // r12
  struct _DEVICE_OBJECT *v10; // r13
  unsigned __int64 DeviceType; // rcx
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  int v13; // ecx
  __int64 v14; // rdx
  PDEVICE_OBJECT v15; // rax
  int v16; // edx
  int v17; // ecx
  ULONG v18; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  _OBJECT_NAME_INFORMATION *p_ObjectNameInfo; // rdi
  _OBJECT_NAME_INFORMATION *v23; // r15
  int v24; // r9d
  PDEVICE_OBJECT v25; // r13
  NTSTATUS v26; // r12d
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  __int16 v28; // dx
  bool v29; // [rsp+40h] [rbp-B8h]
  bool v30; // [rsp+41h] [rbp-B7h]
  KIRQL OldIrql; // [rsp+42h] [rbp-B6h]
  KIRQL OldIrqla[2]; // [rsp+42h] [rbp-B6h]
  ULONG Length; // [rsp+44h] [rbp-B4h] BYREF
  PDEVICE_OBJECT DiskDeviceObject; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-A8h] BYREF
  struct _DEVICE_OBJECT *DeviceAttachmentBase; // [rsp+60h] [rbp-98h]
  struct _DEVICE_OBJECT *v37; // [rsp+68h] [rbp-90h]
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+70h] [rbp-88h] BYREF

  v4 = 0;
  DiskDeviceObject = *(PDEVICE_OBJECT *)(a1 + 312);
  v5 = 0;
  v29 = 0;
  v30 = 0;
  v37 = a2;
  OldIrql = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovAttachDeviceToDeviceStack((unsigned int)MmVerifierData, a2);
  AttachedDevice = IoGetAttachedDevice(a2);
  v9 = 0;
  DeviceAttachmentBase = (struct _DEVICE_OBJECT *)IopGetDeviceAttachmentBase((__int64)a2);
  v10 = DeviceAttachmentBase;
  DeviceType = DeviceAttachmentBase->DeviceType;
  if ( (_DWORD)DeviceType == 8
    || (unsigned int)DeviceType <= 0x35 && (v20 = 0x20000100100008LL, _bittest64(&v20, DeviceType)) )
  {
    DeviceObjectExtension = DeviceAttachmentBase->DeviceObjectExtension;
    v13 = DeviceAttachmentBase->Flags & 0x10000000;
    v4 = v13 != 0;
    v14 = DeviceObjectExtension->ExtensionFlags & 0x2000;
    v29 = v13 != 0;
    v5 = (DeviceObjectExtension->ExtensionFlags & 0x2000) != 0;
    v30 = v5;
    if ( IopBlockLegacyFsFilters || v13 || (_DWORD)v14 )
    {
      v9 = 1;
      if ( (unsigned __int8)IopIsKnownGoodLegacyFsFilter(*(_QWORD *)(a1 + 8) + 56LL, v14) )
        v9 = 0;
      else
        ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
      v30 = v5;
      v29 = v4;
    }
  }
  if ( (AttachedDevice->Flags & 0x80u) != 0
    || (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0xF) != 0
    || AttachedDevice->StackSize >= 0x7Du
    || v9 )
  {
    AttachedDevice = 0LL;
    if ( a3 )
      *a3 = 0LL;
  }
  else
  {
    if ( a3 )
      *a3 = AttachedDevice;
    *(_BYTE *)(a1 + 76) = AttachedDevice->StackSize + 1;
    *(_DWORD *)(a1 + 152) = AttachedDevice->AlignmentRequirement;
    *(_WORD *)(a1 + 304) = AttachedDevice->SectorSize;
    if ( (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x10u;
    if ( (AttachedDevice->Flags & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 48) |= 0x8000000u;
    _InterlockedExchange64((volatile __int64 *)&AttachedDevice->AttachedDevice, a1);
    v15 = DiskDeviceObject;
    ++AttachedDevice->Spare1;
    *(_QWORD *)&v15->Flags = AttachedDevice;
    PnpCheckForWaitingReportedDevice(v10);
  }
  KeReleaseQueuedSpinLock(0xAuLL, OldIrql);
  if ( v9 )
  {
    if ( IopBlockLegacyFsFilters )
    {
      if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
        McTemplateK0hzr0_EtwWriteTransfer(
          v17,
          v16,
          0,
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 56LL) >> 1,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL));
    }
    else if ( v4 && (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0
           || v5 && (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
    {
      v21 = *(_QWORD *)(a1 + 8);
      p_ObjectNameInfo = &ObjectNameInfo;
      v35[0] = 1835034LL;
      v23 = (_OBJECT_NAME_INFORMATION *)v35;
      DiskDeviceObject = 0LL;
      v24 = *(unsigned __int16 *)(v21 + 56);
      LOWORD(v24) = (unsigned __int16)v24 >> 1;
      *(_WORD *)OldIrqla = v24;
      v35[1] = L"(Unavailable)";
      Length = 64;
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( IoGetDiskDeviceObject(v10, &DiskDeviceObject) >= 0 )
        {
          v25 = DiskDeviceObject;
          v26 = ObQueryNameString(DiskDeviceObject, &ObjectNameInfo, Length, &Length);
          if ( v26 == -1073741820 )
          {
            Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL);
            p_ObjectNameInfo = Pool2;
            if ( Pool2 )
              v26 = ObQueryNameString(v25, Pool2, Length, &Length);
            else
              v26 = -1073741670;
          }
          ObfDereferenceObjectWithTag(v25, 0x746C6644u);
          v10 = DeviceAttachmentBase;
          if ( v26 >= 0 )
            v23 = p_ObjectNameInfo;
        }
        v24 = *(unsigned __int16 *)OldIrqla;
      }
      v28 = v23->Name.Length >> 1;
      if ( v29 )
      {
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
          McTemplateK0hzr0hzr2_EtwWriteTransfer(
            *(_QWORD *)(a1 + 8),
            (unsigned int)IoMgr_LegacyFsFilterBlockedOnScm,
            KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
            v24,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            v28,
            (__int64)v23->Name.Buffer);
      }
      else if ( v30 && (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
      {
        McTemplateK0hzr0hzr2_EtwWriteTransfer(
          *(_QWORD *)(a1 + 8),
          (unsigned int)IoMgr_LegacyFsFilterAttachDisallowed,
          KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
          v24,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          v28,
          (__int64)v23->Name.Buffer);
      }
      if ( p_ObjectNameInfo && p_ObjectNameInfo != &ObjectNameInfo )
        ExFreePoolWithTag(p_ObjectNameInfo, 0);
    }
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  }
  v18 = v37->DeviceType;
  if ( v18 == 8 || v18 == 20 || v18 == 3 )
  {
    if ( FltMgrCallbacks )
      guard_dispatch_icall_no_overrides(a1, v37);
  }
  return AttachedDevice;
}
