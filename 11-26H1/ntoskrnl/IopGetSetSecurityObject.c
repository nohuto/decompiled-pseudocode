/*
 * XREFs of IopGetSetSecurityObject @ 0x1408F2A10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IopGetDevicePDO @ 0x14026E760 (IopGetDevicePDO.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1408F4190 (SeQuerySecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x1408FCCF0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     AstLogDeviceSDDLUpdated @ 0x140AA717C (AstLogDeviceSDDLUpdated.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140AFA6D4 (IopSetDeviceSecurityDescriptors.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AFA774 (IopSetDeviceSecurityDescriptor.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140B137D8 (SeAssignWorldSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        __int64 BugCheckParameter2,
        int a2,
        DWORD *a3,
        UNICODE_STRING *a4,
        PULONG Length,
        int a6,
        int a7,
        __int64 a8,
        char a9)
{
  __int64 v12; // r14
  struct _FILE_OBJECT *v13; // rbx
  struct _KTHREAD *v14; // r14
  unsigned __int8 PreviousMode; // r15
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v17; // rdx
  char v18; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 Irp; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  IRP *v23; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG *v26; // rax
  PULONG v27; // r14
  struct _KTHREAD *v28; // rcx
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned int FinalStatus; // edi
  bool v34; // di
  struct _KTHREAD *v35; // rax
  void *v36; // rdx
  AutoBoost *v37; // rcx
  char v38; // r12
  struct _KTHREAD *v39; // rsi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  __int64 v41; // rdx
  ULONG *v42; // r8
  DWORD *v43; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v45; // rdx
  struct _KTHREAD *v46; // rdi
  __int64 v47; // rdx
  _DWORD *DevicePDO; // rax
  void *v49; // rbx
  __int128 v50; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+90h] [rbp+8h] BYREF
  DWORD *v53; // [rsp+A0h] [rbp+18h]

  v53 = a3;
  ObjectsSecurityDescriptor = 0LL;
  if ( *(_WORD *)BugCheckParameter2 == 3 )
    v12 = BugCheckParameter2;
  else
    v12 = *(_QWORD *)(BugCheckParameter2 + 8);
  v13 = 0LL;
  if ( *(_WORD *)BugCheckParameter2 != 3 )
    v13 = (struct _FILE_OBJECT *)BugCheckParameter2;
  if ( !v13 || !v13->FileName.Length && !v13->RelatedFileObject || (v13->Flags & 0x800) != 0 )
  {
    switch ( a2 )
    {
      case 3:
        FinalStatus = 0;
        if ( !v13 || (v13->Flags & 0x100) == 0 )
        {
          FinalStatus = ObLogSecurityDescriptor(a4, &ObjectsSecurityDescriptor, 1LL);
          if ( (FinalStatus & 0x80000000) == 0 )
          {
            ExFreePoolWithTag(a4, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
            if ( *(_QWORD *)(v12 + 272) )
              *(_DWORD *)(*(_QWORD *)(v12 + 312) + 32LL) &= ~0x800u;
            *(_QWORD *)(v12 + 272) = ObjectsSecurityDescriptor;
            ExReleaseResourceLite(&IopSecurityResource);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v45);
          }
        }
        return FinalStatus;
      case 0:
        DevicePDO = IopGetDevicePDO(v12);
        v49 = DevicePDO;
        if ( DevicePDO )
        {
          FinalStatus = IopSetDeviceSecurityDescriptors(v12, DevicePDO, a3, a4, a7, a8);
          ObfDereferenceObject(v49);
        }
        else
        {
          FinalStatus = IopSetDeviceSecurityDescriptor(v12, (_DWORD)a3, (_DWORD)a4, a7, a8);
        }
        AstLogDeviceSDDLUpdated(v12);
        return FinalStatus;
      case 1:
        v39 = KeGetCurrentThread();
        --v39->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = *(PSECURITY_DESCRIPTOR *)(v12 + 272);
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor
          && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KiLeaveCriticalRegionUnsafe((__int64)v39, v41);
        v42 = Length;
        v43 = a3;
        goto LABEL_45;
    }
    return 0;
  }
  if ( a2 == 2 )
    return 0;
  v50 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = KeGetCurrentThread();
  PreviousMode = v14->PreviousMode;
  PsReferenceSiloContext(v13);
  if ( (v13->Flags & 2) != 0 )
  {
    v34 = (v13->Flags & 4) != 0;
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    v37 = (AutoBoost *)KeAbPreAcquire((__int64)&v13->Lock, 0LL, 0LL, v16);
    v38 = 0;
    LOBYTE(ObjectsSecurityDescriptor) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v13->Busy, 1) )
    {
      FinalStatus = IopWaitAndAcquireFileObjectLock(v13, PreviousMode, v34, v37, &ObjectsSecurityDescriptor);
      v38 = (char)ObjectsSecurityDescriptor;
    }
    else
    {
      if ( v37 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v37, v36);
        else
          *((_BYTE *)v37 + 10) = 1;
      }
      PsReferenceSiloContext(v13);
      FinalStatus = 0;
    }
    if ( v38 )
    {
      ObfDereferenceObject(v13);
      return FinalStatus;
    }
    v18 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v18 = 0;
  }
  IopResetEvent((__int64)v13, v17);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v13);
  Irp = IopAllocateIrpExReturn(
          (__int64)RelatedDeviceObject,
          (unsigned __int8)RelatedDeviceObject->StackSize,
          (unsigned __int8)v18 ^ 1u);
  v23 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v13;
    *(_QWORD *)(Irp + 152) = v14;
    *(_BYTE *)(Irp + 64) = a9;
    if ( (v13->Flags & 2) != 0 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v23->UserEvent = p_Event;
    v23->UserIosb = (PIO_STATUS_BLOCK)&v50;
    v23->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v23->Tail.Overlay.CurrentStackLocation;
    v26 = v53;
    v27 = Length;
    if ( a2 == 1 )
    {
      CurrentStackLocation[-1].MajorFunction = 20;
      CurrentStackLocation[-1].Parameters.Read.Length = *v26;
      CurrentStackLocation[-1].Parameters.Create.Options = *v27;
      v23->UserBuffer = a4;
    }
    else
    {
      CurrentStackLocation[-1].MajorFunction = 21;
      CurrentStackLocation[-1].Parameters.Read.Length = *v26;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a4;
    }
    CurrentStackLocation[-1].FileObject = v13;
    IopQueueThreadIrp((__int64)v23, v21);
    v28 = KeGetCurrentThread();
    ++v28->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v29 = IofCallDriver(RelatedDeviceObject, v23);
    FinalStatus = v29;
    if ( v18 )
    {
      if ( v29 == 259 )
      {
        KeWaitForSingleObject(&v13->Event, Executive, 0, 0, 0LL);
        FinalStatus = v13->FinalStatus;
      }
      IopReleaseFileObjectLock((ULONG_PTR)v13, v30, v31);
    }
    else if ( v29 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v50;
    }
    if ( FinalStatus != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( FinalStatus == -2147483643 )
          FinalStatus = -1073741789;
        *v27 = DWORD2(v50);
      }
      return FinalStatus;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) == 0 )
        return (unsigned int)SeAssignWorldSecurityDescriptor(a4);
      v46 = KeGetCurrentThread();
      --v46->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
      ObjectsSecurityDescriptor = SecurityDescriptor;
      if ( SecurityDescriptor && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        __fastfail(0xEu);
      ExReleaseResourceLite(&IopSecurityResource);
      KiLeaveCriticalRegionUnsafe((__int64)v46, v47);
      v42 = v27;
      v43 = v53;
LABEL_45:
      FinalStatus = SeQuerySecurityDescriptorInfo(v43, a4, v42, &ObjectsSecurityDescriptor);
      if ( SecurityDescriptor )
        ObDereferenceSecurityDescriptor(SecurityDescriptor, 1LL);
      return FinalStatus;
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  if ( (v13->Flags & 2) != 0 )
    IopReleaseFileObjectLock((ULONG_PTR)v13, v21, v22);
  ObfDereferenceObject(v13);
  return 3221225626LL;
}
