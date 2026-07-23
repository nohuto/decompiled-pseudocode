/*
 * XREFs of IopDropIrp @ 0x140267700
 * Callers:
 *     IoRemoveIoCompletion @ 0x140222160 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     IopCopyCompleteReadIrp @ 0x14040F120 (IopCopyCompleteReadIrp.c)
 *     IopCopyCompleteReadRequest @ 0x14040F450 (IopCopyCompleteReadRequest.c)
 *     IopIoRingCompleteIrp @ 0x140410B08 (IopIoRingCompleteIrp.c)
 *     IopFreeCompletionListPackets @ 0x140A824B4 (IopFreeCompletionListPackets.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDropIrp(PIRP Irp, ULONG_PTR BugCheckParameter2)
{
  ULONG Flags; // eax
  PMDL MdlAddress; // rcx
  PKEVENT UserEvent; // rcx
  volatile signed __int32 *v7; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _LIST_ENTRY *Flink; // rdx
  LIST_ENTRY *p_ThreadListEntry; // rax
  struct _LIST_ENTRY *Blink; // rcx
  ULONG_PTR v12; // r14
  signed __int64 v13; // rax
  bool v14; // cc
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 UserApcRoutine; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  signed __int64 v19; // r13
  BOOLEAN v20; // al
  ULONG_PTR v21; // rcx
  __int64 v22; // rax
  struct _MDL *Next; // rdi
  void *retaddr; // [rsp+58h] [rbp+0h]

  Flags = Irp->Flags;
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
  if ( UserEvent && BugCheckParameter2 && (Flags & 4) == 0 )
    ObfDereferenceObjectWithTag(UserEvent, 0x746C6644u);
  if ( (Irp->Flags & 0x2000) != 0 )
  {
    v7 = (volatile signed __int32 *)(BugCheckParameter2 + 184);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v7, 0LL) )
        KxWaitForSpinLockAndAcquire(v7);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v7);
    }
    Flink = Irp->ThreadListEntry.Flink;
    p_ThreadListEntry = &Irp->ThreadListEntry;
    if ( Flink->Blink != &Irp->ThreadListEntry
      || (Blink = Irp->ThreadListEntry.Blink, Blink->Flink != p_ThreadListEntry) )
    {
      __fastfail(3u);
    }
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
      v12 = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
      if ( ObpTraceFlags )
        ObpPushStackInfo(v12 - 48, -1, 0x70436F49u);
      v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v14 = v13 <= 1;
      BugCheckParameter4 = v13 - 1;
      if ( v14 )
      {
        if ( *(_QWORD *)(v12 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v12 - 48) >> 8)],
            v12,
            1uLL,
            *(_QWORD *)(v12 - 40));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, v12, 2uLL, BugCheckParameter4);
        v20 = KeAreAllApcsDisabled();
        v21 = v12 - 48;
        if ( v20 )
        {
          ObpDeferObjectDeletion(v21);
        }
        else
        {
          v22 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v21);
          if ( v22 )
            ObpHandleRevocationBlockRemoveObject(v22);
          if ( ObpTraceFlags )
            ObpDeregisterObject(v12 - 48);
          ObpRemoveObjectRoutine(v12 - 48, 0LL);
        }
      }
    }
    Irp->Flags = Irp->Flags & 0xFFFF5FFF | 0x8000;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
    else
      KiReleaseSpinLockInstrumented(v7, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( BugCheckParameter2 && (Irp->Flags & 0x80u) == 0 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(BugCheckParameter2 - 48, -1, 0x746C6644u);
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    if ( v19 - 1 <= 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter2 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
          BugCheckParameter2,
          6uLL,
          *(_QWORD *)(BugCheckParameter2 - 40));
      if ( v19 - 1 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, v19 - 1);
      ObpDeferObjectDeletion(BugCheckParameter2 - 48);
    }
  }
  if ( (Irp->Flags & 0x8000) == 0 )
    goto LABEL_26;
  UserApcRoutine = (unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcRoutine;
  do
  {
    v17 = UserApcRoutine;
    v18 = ((UserApcRoutine >> 1) & 3) - 1;
    UserApcRoutine = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&Irp->Overlay,
                       UserApcRoutine & 0xFFFFFFFFFFFFFFF9uLL | (2 * v18),
                       UserApcRoutine);
  }
  while ( v17 != UserApcRoutine );
  if ( !(_DWORD)v18 )
LABEL_26:
    IoFreeIrp(Irp);
}
