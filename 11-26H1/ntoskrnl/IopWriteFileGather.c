/*
 * XREFs of IopWriteFileGather @ 0x140B03A10
 * Callers:
 *     IopIoRingDispatchWriteGather @ 0x14079B4A4 (IopIoRingDispatchWriteGather.c)
 *     NtWriteFileGather @ 0x140B03910 (NtWriteFileGather.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140467B40 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     MmUpdateMdlTracker @ 0x1404D9B5C (MmUpdateMdlTracker.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopWriteFileGather(
        struct _FILE_OBJECT *BugCheckParameter2,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned int *a5,
        unsigned int a6,
        _FILE_SEGMENT_ELEMENT *Address,
        ULONG Length,
        __int64 a9,
        unsigned int *a10,
        unsigned __int8 a11,
        PVOID Object,
        struct _IO_STATUS_BLOCK *a13,
        int a14)
{
  IRP *Irp; // rsi
  int v16; // r13d
  KPROCESSOR_MODE PreviousMode; // r15
  char v18; // bl
  __int64 RelatedDeviceObject; // rdx
  __int64 v20; // r8
  ULONG v21; // ebx
  unsigned __int64 v22; // rcx
  __int64 v23; // r12
  _FILE_SEGMENT_ELEMENT *Pool2; // r15
  KPROCESSOR_MODE v25; // cl
  IRP *v26; // rax
  PVOID v27; // rbx
  unsigned int *v28; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  ULONG v30; // r12d
  struct _MDL *Mdl; // rax
  unsigned __int64 v32; // r15
  __int64 MajorFunction; // r12
  _FILE_SEGMENT_ELEMENT *v34; // r15
  _DWORD *FileObjectExtension; // rax
  int v36; // ebx
  _KPROCESS *Process; // rcx
  __int16 v39; // ax
  char v40; // al
  ULONG v41; // r8d
  SIZE_T v42; // rbx
  bool v43; // zf
  int SectorSize; // ecx
  int ULongFromUser; // eax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  char v47; // [rsp+41h] [rbp-97h]
  char v48; // [rsp+42h] [rbp-96h]
  __int64 ULong64FromUser; // [rsp+48h] [rbp-90h]
  _FILE_SEGMENT_ELEMENT *P; // [rsp+50h] [rbp-88h]
  unsigned int v51; // [rsp+58h] [rbp-80h]
  PVOID v52; // [rsp+60h] [rbp-78h] BYREF
  PFILE_SEGMENT_ELEMENT SegmentArray; // [rsp+68h] [rbp-70h]
  PIRP v54; // [rsp+70h] [rbp-68h]
  PVOID v55; // [rsp+78h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-58h]
  unsigned int v57; // [rsp+88h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-48h]
  __int64 v60; // [rsp+F0h] [rbp+18h] BYREF
  void *v61; // [rsp+F8h] [rbp+20h]

  v61 = a4;
  v60 = a3;
  Irp = 0LL;
  P = 0LL;
  v55 = 0LL;
  v52 = 0LL;
  v51 = 0;
  v16 = 0;
  ULong64FromUser = 0LL;
  v48 = 1;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  if ( (BugCheckParameter2->Flags & 2) == 0 || (v18 = 1, a14 < 0) )
    v18 = 0;
  v47 = v18;
  RelatedDeviceObject = (__int64)IoGetRelatedDeviceObject(BugCheckParameter2);
  DeviceObject = (PDEVICE_OBJECT)RelatedDeviceObject;
  if ( (BugCheckParameter2->Flags & 8) == 0
    || v18
    || (v21 = Length, a6 != (Length >> 12) + ((Length & 0xFFF) != 0))
    || (*(_DWORD *)(RelatedDeviceObject + 48) & 4) != 0
    || (v22 = *(unsigned int *)(RelatedDeviceObject + 72), (_DWORD)v22 != 8)
    && ((unsigned int)v22 > 0x36 || (RelatedDeviceObject = 0x40000100100248LL, !_bittest64(&RelatedDeviceObject, v22)))
    && (_DWORD)v22 != 83 )
  {
    v36 = -1073741811;
LABEL_44:
    v34 = 0LL;
    goto LABEL_38;
  }
  if ( !PreviousMode || Object )
  {
    v23 = a9;
    if ( a9 )
    {
      ULong64FromUser = *(_QWORD *)a9;
      v16 = *(_QWORD *)a9;
    }
    if ( a10 )
      v51 = *a10;
  }
  else
  {
    ULongFromUser = RtlReadULongFromUser(a5);
    RtlWriteULongToUser(a5, ULongFromUser);
    IopMarkApcRoutineIfAsynchronousIo32((__int64 *)&a5, &v60, 0);
    if ( BugCheckParameter2->CompletionContext && (v60 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v36 = -1073741811;
      v34 = 0LL;
      goto LABEL_38;
    }
    v23 = a9;
    if ( a9 )
    {
      if ( (a9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      ULong64FromUser = RtlReadULong64FromUser((volatile void *)a9);
      v16 = ULong64FromUser;
    }
    if ( a10 )
    {
      v51 = RtlReadULongFromUser(a10);
      v57 = v51;
    }
  }
  if ( !PreviousMode )
  {
    Pool2 = Address;
    SegmentArray = Address;
    goto LABEL_15;
  }
  if ( ((~(unsigned __int8)(BugCheckParameter2->Flags >> 5) & 4 | 2) & a11) == 0 )
  {
    v36 = -1073741790;
    goto LABEL_44;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].ReadyTime )
    goto LABEL_52;
  v39 = WORD2(Process[3].PerProcessorCycleTimes);
  if ( v39 == 332 || (v43 = v39 == 452, v40 = 0, v43) )
    v40 = 1;
  v41 = 4;
  if ( !v40 )
LABEL_52:
    v41 = 8;
  v42 = 8LL * a6;
  Pool2 = Address;
  SegmentArray = Address;
  ProbeForRead(Address, v42, v41);
  if ( Length )
  {
    Pool2 = (_FILE_SEGMENT_ELEMENT *)ExAllocatePool2(0x123uLL);
    P = Pool2;
    v55 = Pool2;
    RtlCopyFromUser(Pool2, SegmentArray, v42);
    SegmentArray = Pool2;
    Address = Pool2;
  }
  v21 = Length;
LABEL_15:
  v25 = AccessMode;
  if ( AccessMode )
  {
    if ( (BugCheckParameter2->Flags & 8) != 0 )
    {
      SectorSize = DeviceObject->SectorSize;
      if ( (_WORD)SectorSize )
      {
        v20 = DeviceObject->SectorSize;
        if ( ((SectorSize - 1) & v21) != 0 )
        {
          RelatedDeviceObject = v21 % (unsigned int)v20;
          if ( v21 % (unsigned int)v20 )
            goto LABEL_65;
        }
      }
      if ( v23 && (v16 != -1 || HIDWORD(ULong64FromUser) != -1) && (_WORD)SectorSize && ((SectorSize - 1) & v16) != 0 )
        goto LABEL_65;
    }
    if ( v21 )
    {
      for ( RelatedDeviceObject = 0LL;
            (unsigned int)RelatedDeviceObject < a6;
            RelatedDeviceObject = (unsigned int)(RelatedDeviceObject + 1) )
      {
        if ( ((__int64)Pool2[(unsigned int)RelatedDeviceObject].Buffer & 0xFFFLL) != 0 )
          goto LABEL_65;
      }
    }
    v25 = AccessMode;
  }
  if ( (a11 & 6) == 4 )
  {
    v16 = -1;
    ULong64FromUser = -1LL;
  }
  if ( a2 )
  {
    v52 = 0LL;
    v36 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v25, &v52, 0LL);
    if ( v36 < 0 )
      goto LABEL_66;
    KeResetEvent((PRKEVENT)v52);
  }
  if ( !v23 && (BugCheckParameter2->Flags & 0x280) == 0
    || ULong64FromUser < 0 && (HIDWORD(ULong64FromUser) != -1 || v16 != -1) )
  {
LABEL_65:
    v36 = -1073741811;
LABEL_66:
    v34 = P;
    goto LABEL_38;
  }
  if ( !Object )
    IopResetEvent((__int64)BugCheckParameter2, RelatedDeviceObject);
  LOBYTE(v20) = v47 ^ 1;
  LOBYTE(RelatedDeviceObject) = DeviceObject->StackSize;
  v26 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, RelatedDeviceObject, v20);
  Irp = v26;
  v54 = v26;
  if ( !v26 )
  {
    v36 = -1073741670;
    goto LABEL_66;
  }
  v26->Tail.Overlay.OriginalFileObject = BugCheckParameter2;
  v26->Tail.Overlay.Thread = CurrentThread;
  v26->Tail.Overlay.AuxiliaryBuffer = 0LL;
  v26->RequestorMode = AccessMode;
  v26->PendingReturned = 0;
  v26->Cancel = 0;
  v26->CancelRoutine = 0LL;
  v26->Flags = 0;
  v26->UserEvent = (PKEVENT)v52;
  v27 = Object;
  if ( Object )
  {
    ObfReferenceObjectWithTag(Object, 0x49526F49u);
    Irp->Flags |= 0x200000u;
    Irp->UserIosb = a13;
    v28 = a5;
  }
  else
  {
    v28 = a5;
    v26->UserIosb = (PIO_STATUS_BLOCK)a5;
    v26->Overlay.AllocationSize.QuadPart = v60;
    v27 = v61;
  }
  Irp->Overlay.AsynchronousParameters.UserApcContext = v27;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].FileObject = BugCheckParameter2;
  if ( (BugCheckParameter2->Flags & 0x10) != 0 || (a14 & 1) != 0 )
    CurrentStackLocation[-1].Flags = 4;
  Irp->AssociatedIrp.MasterIrp = 0LL;
  Irp->MdlAddress = 0LL;
  v30 = Length;
  if ( Length )
  {
    Mdl = IoAllocateMdl(Pool2->Buffer, Length, 0, 1u, Irp);
    v32 = (unsigned __int64)Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MajorFunction = CurrentStackLocation[-1].MajorFunction;
    MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoReadAccess);
    if ( (MmTrackLockedPages & 1) != 0 )
      MmUpdateMdlTracker(
        v32,
        (struct _LIST_ENTRY *)DeviceObject->DriverObject->MajorFunction[MajorFunction],
        (struct _LIST_ENTRY *)DeviceObject);
    Irp->UserBuffer = SegmentArray->Buffer;
    v30 = Length;
  }
  v34 = P;
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    v34 = 0LL;
  }
  Irp->Flags |= (BugCheckParameter2->Flags & 8 | 0x5000) >> 3;
  CurrentStackLocation[-1].Parameters.Read.Length = v30;
  CurrentStackLocation[-1].Parameters.Create.Options = v51;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = ULong64FromUser;
  FileObjectExtension = BugCheckParameter2->FileObjectExtension;
  if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
    CurrentStackLocation[-1].Parameters.Read.Flags = v28[2];
  v36 = IopSynchronousServiceTail(DeviceObject, Irp, BugCheckParameter2, 1, AccessMode, 0, 1u);
  v48 = 0;
LABEL_38:
  if ( v48 )
    IopExceptionCleanupEx((ULONG_PTR)BugCheckParameter2, Irp, v52, 0LL, 0);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  return (unsigned int)v36;
}
