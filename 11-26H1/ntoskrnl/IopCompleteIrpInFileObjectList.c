/*
 * XREFs of IopCompleteIrpInFileObjectList @ 0x1402661D0
 * Callers:
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     EtwTraceEnqueueWork @ 0x140267678 (EtwTraceEnqueueWork.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     IopDoesCompletionNeedsApc @ 0x1403FB2F0 (IopDoesCompletionNeedsApc.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall IopCompleteIrpInFileObjectList(PIRP Irp, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  volatile __int64 *v8; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // rdx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rsi
  _QWORD *v12; // r13
  __int64 v13; // rax
  _KTHREAD *CurrentThread; // rdi
  signed __int8 v15; // cf
  _QWORD *v16; // r15
  _QWORD *v17; // rsi
  _QWORD *v18; // rax
  unsigned int v19; // ebp
  __int64 v20; // rdi
  __int64 v21; // rdx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 **v22; // rcx
  char v23; // si
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  ULONG Flags; // eax
  PFILE_OBJECT OriginalFileObject; // r13
  PMDL MdlAddress; // rcx
  PKEVENT UserEvent; // rcx
  ULONG v30; // eax
  volatile signed __int32 *p_IrpListLock; // rdi
  unsigned __int8 v32; // bp
  struct _LIST_ENTRY *Flink; // rdx
  LIST_ENTRY *p_ThreadListEntry; // rax
  struct _LIST_ENTRY *Blink; // rcx
  ULONG_PTR v36; // r15
  signed __int64 v37; // rsi
  bool v38; // cc
  signed __int64 BugCheckParameter4; // rsi
  _QWORD *v41; // rbp
  _QWORD *v42; // r15
  char v43; // al
  __int64 v44; // rax
  __int64 v45; // r12
  unsigned int v46; // esi
  __int64 v47; // rdi
  NTSTATUS Status; // ecx
  unsigned __int64 UserApcRoutine; // rax
  unsigned __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  BOOLEAN v53; // al
  ULONG_PTR v54; // rcx
  __int64 v55; // rax
  struct _MDL *Next; // rdi
  signed __int32 v57[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+30h] [rbp-68h]
  __int64 v59; // [rsp+38h] [rbp-60h]
  __int128 v60; // [rsp+40h] [rbp-58h] BYREF
  __int64 v61; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v63; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v64; // [rsp+B8h] [rbp+20h]

  v4 = (char)a3;
  if ( !Irp->PendingReturned )
  {
    Status = Irp->IoStatus.Status;
    if ( (Status & 0xC0000000) == 0xC0000000 || (*(_DWORD *)(a2 + 80) & 0x2000000) != 0 && Status >= 0 )
      return 0;
  }
  v5 = *(__int64 **)(a2 + 176);
  if ( v5 )
  {
    v6 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    v7 = *v5;
    Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v5[1];
    Irp->Tail.Overlay.PacketType = 0;
    v8 = (volatile __int64 *)(v7 + 64);
    *(_QWORD *)&v60 = 0LL;
    *((_QWORD *)&v60 + 1) = v7 + 64;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    LOBYTE(v61) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v10 = _InterlockedExchange64(v8, (__int64)&v60);
      if ( v10 )
        KxWaitForLockOwnerShip(&v60);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v60, v8);
    }
    Irp->Flags |= 0x10000u;
    if ( *(_BYTE *)(v7 + 72) )
    {
      v23 = 1;
    }
    else
    {
      p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
      v64 = v4;
      v12 = (_QWORD *)(v7 + 8);
      v13 = KeGetCurrentIrql();
      v59 = v13;
      if ( (_BYTE)v13 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v13, 2LL);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(a3) = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
        EtwTraceEnqueueWork(CurrentThread, &Irp->Tail.CompletionKey + 6, a3);
      }
      if ( v4 )
      {
        if ( (*(_BYTE *)(v7 + 1) & 2) != 0 )
          v4 = 0;
        v64 = v4;
      }
      v15 = _interlockedbittestandset((volatile signed __int32 *)v7, 7u);
      v63 = 0;
      if ( v15 )
      {
        do
        {
          do
            KeYieldProcessorEx(&v63);
          while ( (*(_DWORD *)v7 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v7, 7u) );
      }
      if ( (_QWORD *)*v12 != v12
        && *(_DWORD *)(v7 + 40) < *(_DWORD *)(v7 + 44)
        && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v7 || CurrentThread->WaitReason != 15) )
      {
        v16 = (_QWORD *)*v12;
        do
        {
          v17 = v16;
          v16 = (_QWORD *)*v16;
          if ( *((_BYTE *)v17 + 16) != 3 )
            break;
          v18 = (_QWORD *)v17[1];
          if ( (_QWORD *)v16[1] != v17 || (_QWORD *)*v18 != v17 )
            goto LABEL_40;
          *v18 = v16;
          v19 = 0;
          v16[1] = v18;
          v20 = v17[3];
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 64), 0LL) )
          {
            do
            {
              if ( (++v19 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6, v10, a3) )
              {
                HvlNotifyLongSpinWait(v19);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v20 + 64) );
          }
          if ( *(_BYTE *)(v20 + 388) == 5 )
            v10 = (unsigned __int8)KiSignalThread(CurrentPrcb, v20, &Irp->Tail.CompletionKey + 6, v17);
          else
            v10 = 0LL;
          *(_QWORD *)(v20 + 64) = 0LL;
          v6 = *((unsigned __int8 *)v17 + 17);
          LOBYTE(v6) = v6 + 1;
          *((_BYTE *)v17 + 17) = v6;
          if ( (_BYTE)v10 )
          {
            Irp->Tail.Overlay.ListEntry.Flink = 0LL;
            goto LABEL_52;
          }
        }
        while ( v16 != v12 );
        p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
      }
      v21 = *(unsigned int *)(v7 + 4);
      *(_DWORD *)(v7 + 4) = v21 + 1;
      v22 = *(struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 ***)(v7 + 32);
      if ( *v22 != (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)(v7 + 24) )
LABEL_40:
        __fastfail(3u);
      p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(v7 + 24);
      p_ListEntry->ListEntry.Blink = (struct _LIST_ENTRY *)v22;
      *v22 = p_ListEntry;
      *(_QWORD *)(v7 + 32) = p_ListEntry;
      if ( !(_DWORD)v21 && (_QWORD *)*v12 != v12 )
      {
        v41 = *(_QWORD **)(v7 + 16);
        do
        {
          v42 = v41;
          v41 = (_QWORD *)v41[1];
          v43 = *((_BYTE *)v42 + 16);
          if ( v43 == 2 )
          {
            v52 = *v42;
            if ( *(_QWORD **)(*v42 + 8LL) != v42 || (_QWORD *)*v41 != v42 )
              goto LABEL_40;
            *v41 = v52;
            *(_QWORD *)(v52 + 8) = v41;
            *((_BYTE *)v42 + 17) = 5;
            KiInsertQueueInternal(v42[3], v42);
          }
          else
          {
            if ( v43 != 1 )
              break;
            v44 = *v42;
            if ( *(_QWORD **)(*v42 + 8LL) != v42 || (_QWORD *)*v41 != v42 )
              goto LABEL_40;
            *v41 = v44;
            *(_QWORD *)(v44 + 8) = v41;
            v45 = *((unsigned __int16 *)v42 + 9);
            v46 = 0;
            v47 = v42[3];
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 64), 0LL) )
            {
              do
              {
                if ( (++v46 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22, v21, a3) )
                {
                  HvlNotifyLongSpinWait(v46);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(_QWORD *)(v47 + 64) );
            }
            if ( *(_BYTE *)(v47 + 388) == 5 )
              KiSignalThread(CurrentPrcb, v47, v45, v42);
            *(_QWORD *)(v47 + 64) = 0LL;
            ++*((_BYTE *)v42 + 17);
          }
        }
        while ( v41 != v12 );
      }
LABEL_52:
      _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
      KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, v64, v59);
      v23 = 0;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&v60);
      v24 = v60;
      if ( !(_QWORD)v60 )
      {
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v60 + 1),
                           0LL,
                           (signed __int64)&v60) == &v60 )
          goto LABEL_59;
        v24 = KxWaitForLockChainValid(&v60);
      }
      *(_QWORD *)&v60 = 0LL;
      v10 = *((_QWORD *)&v60 + 1);
      if ( (((unsigned __int8)v10 ^ (unsigned __int8)_InterlockedExchange64(
                                                       (volatile __int64 *)(v24 + 8),
                                                       *((__int64 *)&v60 + 1))) & 4) != 0 )
      {
        _InterlockedOr(v57, 0);
        KiWakeAddressAll(v24 + 8, v10, a3);
      }
    }
    else
    {
      KiReleaseQueuedSpinLockInstrumented(&v60, retaddr);
    }
LABEL_59:
    v25 = (unsigned __int8)v61;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v61);
    __writecr8(v25);
    if ( v23 )
    {
      Flags = Irp->Flags;
      OriginalFileObject = Irp->Tail.Overlay.OriginalFileObject;
      if ( (Flags & 0x20) != 0 )
      {
        ExFreePoolWithTag(Irp->AssociatedIrp.MasterIrp, 0);
        Flags = Irp->Flags;
      }
      MdlAddress = Irp->MdlAddress;
      if ( MdlAddress )
      {
        do
        {
          Next = MdlAddress->Next;
          IoFreeMdl(MdlAddress);
          MdlAddress = Next;
        }
        while ( Next );
        Flags = Irp->Flags;
      }
      UserEvent = Irp->UserEvent;
      if ( UserEvent && OriginalFileObject && (Flags & 4) == 0 )
        ObfDereferenceObjectWithTag(UserEvent, 0x746C6644u);
      v30 = Irp->Flags;
      if ( (v30 & 0x2000) != 0 )
      {
        p_IrpListLock = (volatile signed __int32 *)&OriginalFileObject->IrpListLock;
        v32 = KeGetCurrentIrql();
        if ( v32 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v10) = 2;
          KiRaiseIrqlProcessIrqlFlags(v32, v10);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _interlockedbittestandset64(p_IrpListLock, 0LL) )
            KxWaitForSpinLockAndAcquire(&OriginalFileObject->IrpListLock);
        }
        else
        {
          KiAcquireSpinLockInstrumented(&OriginalFileObject->IrpListLock);
        }
        Flink = Irp->ThreadListEntry.Flink;
        p_ThreadListEntry = &Irp->ThreadListEntry;
        Blink = Irp->ThreadListEntry.Blink;
        if ( Flink->Blink != &Irp->ThreadListEntry || Blink->Flink != p_ThreadListEntry )
          goto LABEL_40;
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
        p_ThreadListEntry->Flink = p_ThreadListEntry;
        if ( (IopPerfIoTrackingLock.QuantumTarget & 1) != 0 )
        {
          ObFastDereferenceObject(
            (signed __int64 *)&KeGetCurrentThread()[1].SchedulerApc.SystemArgument2,
            Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL,
            0x70436F49u);
        }
        else
        {
          v36 = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
          if ( ObpTraceFlags )
            ObpPushStackInfo(v36 - 48, -1, 0x70436F49u);
          v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 - 48), 0xFFFFFFFFFFFFFFFFuLL);
          v38 = v37 <= 1;
          BugCheckParameter4 = v37 - 1;
          if ( v38 )
          {
            if ( *(_QWORD *)(v36 - 40) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v36 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v36 - 48) >> 8)],
                v36,
                1uLL,
                *(_QWORD *)(v36 - 40));
            if ( BugCheckParameter4 < 0 )
              KeBugCheckEx(0x18u, 0LL, v36, 2uLL, BugCheckParameter4);
            v53 = KeAreAllApcsDisabled();
            v54 = v36 - 48;
            if ( v53 )
            {
              ObpDeferObjectDeletion(v54);
            }
            else
            {
              v55 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v54);
              if ( v55 )
                ObpHandleRevocationBlockRemoveObject(v55);
              if ( ObpTraceFlags )
                ObpDeregisterObject(v36 - 48);
              ObpRemoveObjectRoutine(v36 - 48, 0LL);
            }
          }
        }
        Irp->Flags = Irp->Flags & 0xFFFF5FFF | 0x8000;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64((volatile signed __int64 *)p_IrpListLock, 0LL);
        else
          KiReleaseSpinLockInstrumented(&OriginalFileObject->IrpListLock, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
        __writecr8(v32);
        v30 = Irp->Flags;
      }
      if ( OriginalFileObject && (v30 & 0x80u) == 0 )
        ObDereferenceObjectExWithTag2((ULONG_PTR)OriginalFileObject);
      if ( (Irp->Flags & 0x8000) == 0 )
        goto LABEL_87;
      UserApcRoutine = (unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcRoutine;
      do
      {
        v50 = UserApcRoutine;
        v51 = ((UserApcRoutine >> 1) & 3) - 1;
        UserApcRoutine = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&Irp->Overlay,
                           UserApcRoutine & 0xFFFFFFFFFFFFFFF9uLL | (2 * v51),
                           UserApcRoutine);
      }
      while ( v50 != UserApcRoutine );
      if ( !(_DWORD)v51 )
LABEL_87:
        IoFreeIrp(Irp);
    }
    return 1;
  }
  if ( !(unsigned __int8)IopDoesCompletionNeedsApc(Irp) )
  {
    IopCompleteRequest((_DWORD)Irp + 120, 0, 0, (_DWORD)Irp + 192, 0LL);
    return 1;
  }
  return 0;
}
