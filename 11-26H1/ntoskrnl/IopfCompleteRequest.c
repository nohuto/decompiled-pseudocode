/*
 * XREFs of IopfCompleteRequest @ 0x1403FA200
 * Callers:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x1403FB3E8 (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140C4BB00 (IovCompleteRequest.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     PoDeviceReleaseIrp @ 0x140212D70 (PoDeviceReleaseIrp.c)
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IopFreeIrpExtension @ 0x140267EA0 (IopFreeIrpExtension.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     IopDequeueIrpFromThread @ 0x1403311D0 (IopDequeueIrpFromThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     IopDoesCompletionNeedsApc @ 0x1403FB2F0 (IopDoesCompletionNeedsApc.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     IopIoRingCompleteIrp @ 0x140410B08 (IopIoRingCompleteIrp.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopfCompleteRequest(IRP *BugCheckParameter1, unsigned __int8 a2)
{
  char CurrentLocation; // r8
  unsigned __int8 v3; // r14
  CHAR StackCount; // dl
  PIRP v5; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v7; // r12
  int Flink; // r13d
  PIRP v9; // rdi
  UCHAR *p_Control; // rbx
  PIRP v11; // rdx
  struct _LIST_ENTRY *Status; // rax
  char v13; // cl
  char v14; // al
  char v15; // r14
  PIRP v16; // rdx
  __int64 v17; // rcx
  PDEVICE_OBJECT DeviceObject; // rdi
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rax
  _WORD *v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  _WORD *v26; // rdx
  _WORD *v27; // rax
  int v28; // eax
  const WCHAR *v29; // rcx
  __int64 v30; // rax
  struct _MDL *MdlAddress; // rcx
  IRP *MasterIrp; // rsi
  struct _MDL *Next; // rbx
  unsigned __int64 Information; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  CHAR *AuxiliaryBuffer; // r12
  struct _FILE_OBJECT *OriginalFileObject; // rcx
  ULONG DeviceType; // ecx
  PCHAR v40; // rcx
  PIRP v41; // rcx
  __int64 Flags; // rdx
  PIRP v43; // rax
  CCHAR ApcEnvironment; // cl
  PETHREAD Thread; // rdx
  PMDL v46; // rbx
  ULONG v47; // eax
  ULONG_PTR v48; // rax
  ULONG_PTR v49; // rsi
  PETHREAD v50; // rdi
  KIRQL v51; // al
  unsigned __int8 CurrentIrql; // bl
  PIRP v53; // rax
  CCHAR v54; // cl
  KIRQL v55; // al
  PIRP v56; // r8
  KIRQL v57; // bl
  _KPROCESS *Process; // rdx
  PETHREAD v59; // r10
  struct _KTHREAD *v60; // r9
  CCHAR ApcStateIndex; // al
  struct _LIST_ENTRY *v62; // rax
  PIRP Irp; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v64; // [rsp+50h] [rbp-B8h]
  CHAR *v65; // [rsp+58h] [rbp-B0h]
  __int64 v66; // [rsp+60h] [rbp-A8h] BYREF
  CHAR *v67; // [rsp+68h] [rbp-A0h] BYREF
  PIRP v68; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v70; // [rsp+88h] [rbp-80h]
  __int64 v71; // [rsp+90h] [rbp-78h]
  const WCHAR *v72; // [rsp+98h] [rbp-70h]
  int v73; // [rsp+A0h] [rbp-68h]
  int v74; // [rsp+A4h] [rbp-64h]
  _BYTE v75[128]; // [rsp+A8h] [rbp-60h] BYREF

  Irp = BugCheckParameter1;
  CurrentLocation = BugCheckParameter1->CurrentLocation;
  v3 = a2;
  LOBYTE(v64) = a2;
  StackCount = BugCheckParameter1->StackCount;
  v5 = BugCheckParameter1;
  v65 = 0LL;
  v67 = 0LL;
  if ( CurrentLocation > (char)(StackCount + 1) || BugCheckParameter1->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)BugCheckParameter1, 0x1336uLL, 0LL, 0LL);
  CurrentStackLocation = BugCheckParameter1->Tail.Overlay.CurrentStackLocation;
  if ( CurrentLocation <= StackCount && CurrentStackLocation->MajorFunction == 22 )
  {
    v7 = 1;
    PoDeviceReleaseIrp(
      (__int64)BugCheckParameter1,
      CurrentStackLocation->MinorFunction,
      (__int64)CurrentStackLocation->DeviceObject);
    v5 = Irp;
  }
  else
  {
    v7 = 0;
  }
  if ( (v5[1].Size & 0x200) != 0 )
    Flink = (int)v5[1].ThreadListEntry.Flink;
  else
    Flink = 0;
  ++v5->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v9 = Irp;
  if ( Irp->CurrentLocation <= (char)(Irp->StackCount + 1) )
  {
    p_Control = &CurrentStackLocation->Control;
    while ( 1 )
    {
      v9->PendingReturned = *p_Control & 1;
      v11 = Irp;
      Status = (struct _LIST_ENTRY *)Irp->IoStatus.Status;
      if ( (int)Status < 0 && (_DWORD)Status != Flink )
      {
        *p_Control |= 2u;
        Flink = (int)Status;
        HIBYTE(v5[1].Size) |= 2u;
        v5[1].ThreadListEntry.Flink = Status;
        v11 = Irp;
      }
      v13 = *p_Control;
      v14 = *p_Control;
      if ( v11->IoStatus.Status < 0 )
      {
        if ( v13 < 0 )
          goto LABEL_17;
      }
      else if ( (v13 & 0x40) != 0 )
      {
        goto LABEL_17;
      }
      if ( v11->Cancel )
      {
        v14 = *p_Control;
        if ( (*p_Control & 0x20) != 0 )
        {
LABEL_17:
          v15 = *(p_Control - 2);
          *p_Control = v14 & 2;
          *((_WORD *)p_Control - 1) = 0;
          *(_QWORD *)(p_Control + 5) = 0LL;
          *(_QWORD *)(p_Control + 13) = 0LL;
          *(_QWORD *)(p_Control + 21) = 0LL;
          *(_QWORD *)(p_Control + 45) = 0LL;
          v16 = Irp;
          v17 = Irp->StackCount;
          if ( Irp->CurrentLocation == (_BYTE)v17 + 1 )
            DeviceObject = 0LL;
          else
            DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
          if ( v7 && (unsigned __int8)(v15 - 2) <= 1u && DeviceObject )
          {
            v19 = PopDiagHandleRegistered == 0;
            v20 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * v17 + 10);
            v66 = (__int64)DeviceObject;
            v68 = Irp;
            *(_QWORD *)(v20 + 40) = DeviceObject;
            if ( !v19 && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE) )
            {
              if ( !v66 )
                goto LABEL_43;
              v21 = *(_QWORD *)(v66 + 8);
              v22 = *(_WORD **)(v21 + 64);
              if ( !v22 )
                goto LABEL_43;
              v23 = *(unsigned __int16 *)(v21 + 56);
              if ( !(_WORD)v23 )
                goto LABEL_43;
              v24 = 64LL;
              v25 = v23 >> 1;
              v26 = v75;
              do
              {
                if ( !v25 )
                  break;
                if ( !*v22 )
                  break;
                *v26++ = *v22++;
                --v25;
                --v24;
              }
              while ( v24 );
              v27 = v26 - 1;
              if ( v24 )
                v27 = v26;
              *v27 = 0;
              if ( v24 )
                v28 = 1;
              else
LABEL_43:
                v28 = 0;
              *(_QWORD *)&UserData.Size = 8LL;
              v71 = 8LL;
              v29 = (const WCHAR *)v75;
              if ( !v28 )
                v29 = &SourceString;
              UserData.Ptr = (ULONGLONG)&v68;
              v70 = &v66;
              v30 = -1LL;
              v72 = v29;
              do
                v19 = v29[++v30] == 0;
              while ( !v19 );
              v73 = 2 * v30 + 2;
              v74 = 0;
              EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERACQUIRE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
            }
            v16 = Irp;
          }
          if ( (unsigned int)guard_dispatch_icall_no_overrides(DeviceObject, v16) == -1073741802 )
            return;
          if ( v7 )
            PoDeviceReleaseIrp((__int64)Irp, v15, (__int64)DeviceObject);
          goto LABEL_53;
        }
      }
      if ( Irp->PendingReturned && Irp->CurrentLocation <= Irp->StackCount )
        Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      *p_Control &= 2u;
      *((_WORD *)p_Control - 1) = 0;
      *(_QWORD *)(p_Control + 5) = 0LL;
      *(_QWORD *)(p_Control + 13) = 0LL;
      *(_QWORD *)(p_Control + 21) = 0LL;
      *(_QWORD *)(p_Control + 45) = 0LL;
LABEL_53:
      p_Control += 72;
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v9 = Irp;
      if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      {
        v3 = v64;
        break;
      }
    }
  }
  if ( (v9->Flags & 8) != 0 )
  {
    MdlAddress = v9->MdlAddress;
    MasterIrp = v9->AssociatedIrp.MasterIrp;
    if ( MdlAddress )
    {
      do
      {
        Next = MdlAddress->Next;
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
    }
    IoFreeIrp(v9);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&MasterIrp->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(MasterIrp, v3);
    return;
  }
  if ( v9->IoStatus.Status != 260 )
    goto LABEL_67;
  Information = v9->IoStatus.Information;
  if ( Information <= 2 )
    goto LABEL_67;
  v35 = Information - 2684354563u;
  if ( Information - 2684354563u > 0x16 || (v36 = 4194817LL, !_bittest64(&v36, v35)) )
  {
    v9->IoStatus.Status = -1073741191;
    v9 = Irp;
LABEL_67:
    AuxiliaryBuffer = v65;
    goto LABEL_68;
  }
  AuxiliaryBuffer = v9->Tail.Overlay.AuxiliaryBuffer;
  v9->Tail.Overlay.AuxiliaryBuffer = 0LL;
  v9 = Irp;
  v67 = AuxiliaryBuffer;
LABEL_68:
  if ( !v3 )
  {
    OriginalFileObject = v9->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      if ( (v9->Flags & 0x400) == 0 )
      {
        DeviceType = IoGetRelatedDeviceObject(OriginalFileObject)->DeviceType;
        if ( DeviceType == 8 || DeviceType == 20 )
          v3 = 1;
        v9 = Irp;
      }
    }
  }
  v40 = v9->Tail.Overlay.AuxiliaryBuffer;
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v9 = Irp;
  }
  if ( IopFreeIrpExtension((__int64)v9, -1, 1)
    && (unsigned __int8)guard_dispatch_icall_no_overrides(&Irp, Irp->Tail.Overlay.OriginalFileObject) )
  {
    goto LABEL_138;
  }
  v41 = Irp;
  Flags = Irp->Flags;
  if ( (Flags & 0x402) != 0 )
  {
    if ( (Flags & 0x440) != 0 )
    {
      *(_OWORD *)&Irp->UserIosb->Status = *(_OWORD *)&Irp->IoStatus.Status;
      if ( (Flags & 0x42) != 0 )
      {
        IopDequeueIrpFromThread(Irp, Flags);
        KeSetEvent(Irp->UserEvent, v3, 0);
        IoFreeIrp(Irp);
      }
      else
      {
        KeSetEvent(Irp->UserEvent, v3, 0);
      }
    }
    else
    {
      IopDequeueIrpFromThread(Irp, Flags);
      v43 = Irp;
      ApcEnvironment = Irp->ApcEnvironment;
      Thread = Irp->Tail.Overlay.Thread;
      Irp->Tail.Apc.Type = 18;
      v43->Tail.Apc.Size = 88;
      if ( ApcEnvironment == 2 )
        ApcEnvironment = Thread->ApcStateIndex;
      v43->Tail.Apc.ApcStateIndex = ApcEnvironment;
      v43->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)Thread;
      v43->Tail.Overlay.Thread = (PETHREAD)IopCompletePageWrite;
      v43->Tail.Overlay.AuxiliaryBuffer = 0LL;
      v43->Tail.Overlay.ListEntry.Flink = 0LL;
      *(_WORD *)((char *)&v43->Tail.CompletionKey + 81) = 0;
      v43->Tail.Overlay.ListEntry.Blink = 0LL;
      v43->Tail.Apc.SpareByte0 = 0;
      KeInsertQueueApc((__int64)&Irp->Tail, 0LL, 0LL, v3);
    }
    goto LABEL_138;
  }
  v46 = Irp->MdlAddress;
  if ( v46 )
  {
    do
    {
      if ( (v46->MdlFlags & 2) != 0 )
        MmUnlockPages(v46);
      v46 = v46->Next;
    }
    while ( v46 );
    v41 = Irp;
  }
  if ( (v41->Flags & 0x2000) != 0 )
  {
    ObfDereferenceObjectWithTag(v41->Tail.Overlay.Thread, 0x746C6644u);
    v41 = Irp;
  }
  v47 = v41->Flags;
  if ( (v47 & 0x800) != 0 && !v41->PendingReturned )
  {
    if ( v41->IoStatus.Status == 260 )
    {
      v48 = v41->IoStatus.Information;
      if ( v48 == 2684354563 || v48 == 2684354572 || v48 == 2684354585 )
      {
        v41->Tail.Overlay.AuxiliaryBuffer = AuxiliaryBuffer;
        return;
      }
    }
    goto LABEL_138;
  }
  v49 = (ULONG_PTR)v41->Tail.Overlay.OriginalFileObject;
  v50 = v41->Tail.Overlay.Thread;
  v68 = (PIRP)v49;
  if ( (v47 & 0x200000) == 0 )
  {
    if ( (v47 & 0x2000) == 0 )
      goto LABEL_109;
    if ( IopCompleteIrpInFileObjectList(v41, v49, v3) )
      goto LABEL_138;
    goto LABEL_108;
  }
  if ( (unsigned __int8)IopDoesCompletionNeedsApc(v41) )
  {
LABEL_108:
    v41 = Irp;
    goto LABEL_109;
  }
  v41 = Irp;
  if ( !Irp->Cancel || (Irp->Flags & 0x2000) != 0 )
  {
    IopIoRingCompleteIrp(Irp, v49);
    goto LABEL_138;
  }
LABEL_109:
  if ( v50 )
  {
    v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v50[1].WaitBlock[0].Thread);
    KeReleaseSpinLock((PKSPIN_LOCK)&v50[1].WaitBlock[0].Thread, v51);
    v41 = Irp;
  }
  if ( v41->Cancel )
  {
    v55 = KeAcquireQueuedSpinLock(0xBuLL);
    v56 = Irp;
    v57 = v55;
    Process = IopPerfIoTrackingLock.Process;
    v59 = Irp->Tail.Overlay.Thread;
    if ( (_KPROCESS **)IopPerfIoTrackingLock.Process == &IopPerfIoTrackingLock.Process )
    {
LABEL_130:
      if ( v59 )
      {
        ApcStateIndex = Irp->ApcEnvironment;
        Irp->Tail.Apc.Type = 18;
        v56->Tail.Apc.Size = 88;
        if ( ApcStateIndex == 2 )
          ApcStateIndex = v59->ApcStateIndex;
        v56->Tail.Apc.ApcStateIndex = ApcStateIndex;
        v56->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
        v56->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v59;
        v56->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
        v56->Tail.Overlay.ListEntry.Flink = 0LL;
        *(_WORD *)((char *)&v56->Tail.CompletionKey + 81) = 0;
        v56->Tail.Overlay.ListEntry.Blink = 0LL;
        v56->Tail.Apc.SpareByte0 = 0;
        KeInsertQueueApc((__int64)&Irp->Tail, v49, (__int64)AuxiliaryBuffer, v3);
        KeReleaseQueuedSpinLock(0xBuLL, v57);
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        v60 = *(struct _KTHREAD **)&Process->Header.Lock;
        if ( &Process[-1].UserCetLogging == (void **)Irp )
          break;
        Process = *(_KPROCESS **)&Process->Header.Lock;
        if ( v60 == (struct _KTHREAD *)&IopPerfIoTrackingLock.Process )
          goto LABEL_130;
      }
      if ( (_KPROCESS *)v60->Header.WaitListHead.Flink != Process
        || (v62 = Process->Header.WaitListHead.Flink, (_KPROCESS *)v62->Flink != Process) )
      {
        __fastfail(3u);
      }
      v62->Flink = (struct _LIST_ENTRY *)v60;
      v60->Header.WaitListHead.Flink = v62;
      Process->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Process;
      *(_QWORD *)&Process->Header.Lock = Process;
      ObfDereferenceObjectWithTag(v59, 0x746C6644u);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v57);
    IopDropIrp(Irp, v49);
LABEL_138:
    if ( AuxiliaryBuffer )
      ExFreePoolWithTag(AuxiliaryBuffer, 0);
    return;
  }
  if ( v50 == KeGetCurrentThread()
    && !KeGetCurrentThread()->SpecialApcDisable
    && KeAreInterruptsEnabled()
    && !KeGetCurrentIrql()
    && KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v66 = 1LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
    IopCompleteRequest((_DWORD)Irp + 120, 0, (unsigned int)&v66, (unsigned int)&v68, (__int64)&v67);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    AuxiliaryBuffer = v67;
    goto LABEL_138;
  }
  v53 = Irp;
  v54 = Irp->ApcEnvironment;
  Irp->Tail.Apc.Type = 18;
  v53->Tail.Apc.Size = 88;
  if ( v54 == 2 )
    v54 = v50->ApcStateIndex;
  v53->Tail.Apc.ApcStateIndex = v54;
  v53->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v50;
  v53->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
  v53->Tail.Overlay.ListEntry.Flink = 0LL;
  v53->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
  *(_WORD *)((char *)&v53->Tail.CompletionKey + 81) = 0;
  v53->Tail.Overlay.ListEntry.Blink = 0LL;
  v53->Tail.Apc.SpareByte0 = 0;
  KeInsertQueueApc((__int64)&Irp->Tail, v49, (__int64)AuxiliaryBuffer, v3);
}
