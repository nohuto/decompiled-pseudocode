/*
 * XREFs of IopReadFileScatter @ 0x140B0EB28
 * Callers:
 *     IopIoRingDispatchReadScatter @ 0x14079ABC0 (IopIoRingDispatchReadScatter.c)
 *     NtReadFileScatter @ 0x140B0EA40 (NtReadFileScatter.c)
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

__int64 __fastcall IopReadFileScatter(
        struct _FILE_OBJECT *BugCheckParameter2,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned int *a5,
        unsigned int a6,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        ULONG Length,
        __int64 a9,
        unsigned int *a10,
        PVOID a11,
        struct _IO_STATUS_BLOCK *a12)
{
  IRP *Irp; // rsi
  _FILE_SEGMENT_ELEMENT *Pool2; // r12
  PVOID v15; // rbx
  char v16; // r15
  __int64 RelatedDeviceObject; // rdx
  __int64 v18; // r8
  int v19; // r13d
  unsigned __int64 v20; // rcx
  __int64 v21; // r15
  KPROCESSOR_MODE v22; // al
  PFILE_SEGMENT_ELEMENT v23; // r13
  int SectorSize; // ecx
  PVOID v25; // rbx
  __int64 v26; // rax
  unsigned int *v27; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _MDL *Mdl; // rax
  int v30; // ebx
  _DWORD *FileObjectExtension; // rax
  _KPROCESS *Process; // rcx
  __int16 v34; // ax
  char v35; // al
  SIZE_T v36; // rbx
  ULONG v37; // r8d
  bool v38; // zf
  int ULongFromUser; // eax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-88h]
  char v41; // [rsp+41h] [rbp-87h]
  char v42; // [rsp+42h] [rbp-86h]
  unsigned int v43; // [rsp+48h] [rbp-80h]
  __int64 ULong64FromUser; // [rsp+50h] [rbp-78h]
  PVOID Object[2]; // [rsp+58h] [rbp-70h] BYREF
  _FILE_SEGMENT_ELEMENT *v46; // [rsp+68h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-58h]
  unsigned int v48; // [rsp+78h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-48h]
  __int64 v51; // [rsp+E0h] [rbp+18h] BYREF
  void *v52; // [rsp+E8h] [rbp+20h]

  v52 = a4;
  v51 = a3;
  Irp = 0LL;
  Pool2 = 0LL;
  v46 = 0LL;
  Object[0] = 0LL;
  v43 = 0;
  ULong64FromUser = 0LL;
  v42 = 1;
  CurrentThread = KeGetCurrentThread();
  AccessMode = CurrentThread->PreviousMode;
  v15 = a11;
  if ( (BugCheckParameter2->Flags & 2) == 0 || (v16 = 1, a11) )
    v16 = 0;
  v41 = v16;
  RelatedDeviceObject = (__int64)IoGetRelatedDeviceObject(BugCheckParameter2);
  DeviceObject = (PDEVICE_OBJECT)RelatedDeviceObject;
  if ( (BugCheckParameter2->Flags & 8) == 0 )
    goto LABEL_40;
  if ( v16 )
    goto LABEL_40;
  if ( a6 != (Length >> 12) + ((Length & 0xFFF) != 0) )
    goto LABEL_40;
  v19 = 4;
  if ( (*(_DWORD *)(RelatedDeviceObject + 48) & 4) != 0 )
    goto LABEL_40;
  v20 = *(unsigned int *)(RelatedDeviceObject + 72);
  if ( (_DWORD)v20 != 8 )
  {
    if ( (unsigned int)v20 > 0x36 || (RelatedDeviceObject = 0x40000100100248LL, !_bittest64(&RelatedDeviceObject, v20)) )
    {
      if ( (_DWORD)v20 != 83 )
        goto LABEL_40;
    }
  }
  if ( !AccessMode || v15 )
  {
    v21 = a9;
    if ( a9 )
      ULong64FromUser = *(_QWORD *)a9;
    if ( a10 )
      v43 = *a10;
  }
  else
  {
    ULongFromUser = RtlReadULongFromUser(a5);
    RtlWriteULongToUser(a5, ULongFromUser);
    IopMarkApcRoutineIfAsynchronousIo32((__int64 *)&a5, &v51, 0);
    if ( BugCheckParameter2->CompletionContext && (v51 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v30 = -1073741811;
      goto LABEL_46;
    }
    v21 = a9;
    if ( a9 )
    {
      if ( (a9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      ULong64FromUser = RtlReadULong64FromUser((volatile void *)a9);
    }
    if ( a10 )
    {
      v43 = RtlReadULongFromUser(a10);
      v48 = v43;
    }
  }
  v22 = AccessMode;
  if ( AccessMode )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[1].ReadyTime )
      goto LABEL_55;
    v34 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v34 == 332 || (v38 = v34 == 452, v35 = 0, v38) )
      v35 = 1;
    if ( !v35 )
LABEL_55:
      v19 = 8;
    v36 = 8LL * a6;
    v37 = v19;
    v23 = SegmentArray;
    ProbeForRead(SegmentArray, v36, v37);
    if ( Length )
    {
      Pool2 = (_FILE_SEGMENT_ELEMENT *)ExAllocatePool2(0x123uLL);
      v46 = Pool2;
      RtlCopyFromUser(Pool2, v23, v36);
      v23 = Pool2;
      SegmentArray = Pool2;
    }
    v22 = AccessMode;
  }
  else
  {
    v23 = SegmentArray;
  }
  if ( v22 )
  {
    if ( (BugCheckParameter2->Flags & 8) != 0 )
    {
      SectorSize = DeviceObject->SectorSize;
      if ( (_WORD)SectorSize )
      {
        v18 = DeviceObject->SectorSize;
        if ( ((SectorSize - 1) & Length) != 0 )
        {
          RelatedDeviceObject = Length % (unsigned int)v18;
          if ( Length % (unsigned int)v18 )
            goto LABEL_40;
        }
      }
      if ( v21 && (_WORD)SectorSize && ((SectorSize - 1) & (unsigned int)ULong64FromUser) != 0 )
        goto LABEL_40;
    }
    if ( Length )
    {
      for ( RelatedDeviceObject = 0LL;
            (unsigned int)RelatedDeviceObject < a6;
            RelatedDeviceObject = (unsigned int)(RelatedDeviceObject + 1) )
      {
        if ( ((__int64)v23[(unsigned int)RelatedDeviceObject].Buffer & 0xFFFLL) != 0 )
          goto LABEL_40;
      }
    }
    v22 = AccessMode;
  }
  if ( a2 )
  {
    Object[0] = 0LL;
    v30 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v22, Object, 0LL);
    if ( v30 < 0 )
      goto LABEL_46;
    KeResetEvent((PRKEVENT)Object[0]);
  }
  if ( !v21 && (BugCheckParameter2->Flags & 0x280) == 0 || ULong64FromUser < 0 )
  {
LABEL_40:
    v30 = -1073741811;
    goto LABEL_46;
  }
  v25 = a11;
  if ( !a11 )
    IopResetEvent((__int64)BugCheckParameter2, RelatedDeviceObject);
  LOBYTE(v18) = v41 ^ 1;
  LOBYTE(RelatedDeviceObject) = DeviceObject->StackSize;
  v26 = IopAllocateIrpExReturn((__int64)DeviceObject, RelatedDeviceObject, v18);
  Irp = (IRP *)v26;
  Object[1] = (PVOID)v26;
  if ( v26 )
  {
    *(_QWORD *)(v26 + 192) = BugCheckParameter2;
    *(_QWORD *)(v26 + 152) = CurrentThread;
    *(_QWORD *)(v26 + 160) = 0LL;
    *(_BYTE *)(v26 + 64) = AccessMode;
    *(_BYTE *)(v26 + 65) = 0;
    *(_BYTE *)(v26 + 68) = 0;
    *(_QWORD *)(v26 + 104) = 0LL;
    *(_DWORD *)(v26 + 16) = 0;
    *(PVOID *)(v26 + 80) = Object[0];
    if ( v25 )
    {
      ObfReferenceObjectWithTag(v25, 0x49526F49u);
      Irp->Flags |= 0x200000u;
      Irp->UserIosb = a12;
      v27 = a5;
    }
    else
    {
      v27 = a5;
      *(_QWORD *)(v26 + 72) = a5;
      *(_QWORD *)(v26 + 88) = v51;
      v25 = v52;
    }
    Irp->Overlay.AsynchronousParameters.UserApcContext = v25;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = BugCheckParameter2;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    if ( Length )
    {
      Mdl = IoAllocateMdl(v23->Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MmProbeAndLockSelectedPages(Mdl, v23, AccessMode, IoWriteAccess);
      Irp->UserBuffer = v23->Buffer;
    }
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
    Irp->Flags |= (BugCheckParameter2->Flags & 8 | 0x4800) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v43;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = ULong64FromUser;
    FileObjectExtension = BugCheckParameter2->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v27[2];
    v30 = IopSynchronousServiceTail(DeviceObject, Irp, BugCheckParameter2, 1, AccessMode, 0, 0);
    v42 = 0;
  }
  else
  {
    v30 = -1073741670;
  }
LABEL_46:
  if ( v42 )
    IopExceptionCleanupEx((ULONG_PTR)BugCheckParameter2, Irp, Object[0], 0LL, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v30;
}
