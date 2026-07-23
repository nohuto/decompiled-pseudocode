/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x14037E9F0
 * Callers:
 *     DifNtWaitForWorkViaWorkerFactoryWrapper @ 0x1406953B0 (DifNtWaitForWorkViaWorkerFactoryWrapper.c)
 * Callees:
 *     IoRemoveIoCompletion @ 0x140222160 (IoRemoveIoCompletion.c)
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     AlpcpSignal @ 0x140263E5C (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14030D620 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryFinishDeferredWork @ 0x14037F25C (ExpWorkerFactoryFinishDeferredWork.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1403E28A0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpAddCurrentThreadToThreadHistory @ 0x140445B10 (ExpAddCurrentThreadToThreadHistory.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1404A9E14 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExSystemExceptionFilter @ 0x14083CCA0 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     NtAlpcSendWaitReceivePort @ 0x140929090 (NtAlpcSendWaitReceivePort.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 *     AlpcpTrackPortReferences @ 0x140A827A0 (AlpcpTrackPortReferences.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v6; // r13d
  PKSPIN_LOCK *v7; // rsi
  unsigned __int8 PreviousMode; // r15
  PLIST_ENTRY *Pool2; // rbx
  unsigned int ULongFromUser; // eax
  signed __int64 v11; // rbx
  bool v12; // cc
  signed __int64 BugCheckParameter4; // rbx
  NTSTATUS v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  char v19; // al
  ULONG v20; // r14d
  struct _KTHREAD *v21; // rax
  unsigned int v22; // r14d
  char v23; // r9
  struct _KTHREAD *v24; // r14
  unsigned __int8 CurrentIrql; // r12
  __int64 v26; // rdx
  __int64 v27; // r8
  PKSPIN_LOCK v28; // rcx
  _WORKER_FACTORY_DEFERRED_WORK *v29; // rax
  __int64 v30; // rdx
  PKSPIN_LOCK v31; // rax
  BOOLEAN v32; // al
  __int64 v33; // rcx
  __int64 v34; // rax
  ULONG v35; // [rsp+44h] [rbp-1A4h] BYREF
  PVOID v36; // [rsp+48h] [rbp-1A0h] BYREF
  PLIST_ENTRY *v37; // [rsp+50h] [rbp-198h]
  PVOID Object; // [rsp+58h] [rbp-190h] BYREF
  PWORKER_FACTORY_DEFERRED_WORK v39; // [rsp+60h] [rbp-188h]
  HANDLE Handle; // [rsp+68h] [rbp-180h]
  volatile void *Address; // [rsp+70h] [rbp-178h]
  PVOID v42; // [rsp+78h] [rbp-170h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-168h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-148h] BYREF
  HANDLE PortHandle[2]; // [rsp+B0h] [rbp-138h] BYREF
  ULONG Flags[2]; // [rsp+C0h] [rbp-128h]
  PFILE_IO_COMPLETION_INFORMATION v47; // [rsp+C8h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-118h]
  PVOID v49[4]; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v50; // [rsp+100h] [rbp-E8h]
  __int64 v51; // [rsp+108h] [rbp-E0h]
  int v52; // [rsp+110h] [rbp-D8h]
  _BYTE P[128]; // [rsp+120h] [rbp-C8h] BYREF

  v6 = Count;
  Address = MiniPackets;
  Handle = WorkerFactoryHandle;
  v47 = MiniPackets;
  LODWORD(v36) = Count;
  Object = PacketsReturned;
  v39 = DeferredWork;
  v44 = 0LL;
  *(_OWORD *)PortHandle = 0LL;
  *(_QWORD *)Flags = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(P, 0, sizeof(P));
  v35 = 0;
  v7 = 0LL;
  v42 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  Pool2 = (PLIST_ENTRY *)P;
  v37 = (PLIST_ENTRY *)P;
  if ( v6 - 1 > 0x7FFFFFE )
  {
    v15 = -1073741811;
  }
  else
  {
    if ( PreviousMode )
    {
      ProbeForWrite(Address, 32LL * v6, 8u);
      ULongFromUser = RtlReadULongFromUser(PacketsReturned);
      RtlWriteULongToUser(PacketsReturned, ULongFromUser);
      if ( ((unsigned __int8)DeferredWork & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(PortHandle, DeferredWork, 0x18uLL);
    }
    else
    {
      RtlCopyVolatileMemory(PortHandle, DeferredWork, 0x18uLL);
    }
    Object = 0LL;
    v15 = ObReferenceObjectByHandle(Handle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
    v7 = (PKSPIN_LOCK *)Object;
    v42 = Object;
    if ( v15 >= 0 )
    {
      if ( v6 > 0x10 )
      {
        Pool2 = (PLIST_ENTRY *)ExAllocatePool2(0x40uLL);
        v37 = Pool2;
        if ( !Pool2 )
        {
          v6 = 16;
          Pool2 = (PLIST_ENTRY *)P;
          v37 = (PLIST_ENTRY *)P;
        }
      }
      KeAcquireInStackQueuedSpinLock(v7[2], &LockHandle);
      if ( *((_BYTE *)v7[2] + 33) )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v15 = 128;
      }
      else
      {
        if ( ((_DWORD)v7[51] & 0x200) != 0 )
          ExpLeaveWorkerFactoryAwayMode((ULONG_PTR)v7, v16, v17);
        ++*((_DWORD *)v7[2] + 7);
        while ( *((_DWORD *)v7 + 95) >= *((_DWORD *)v7 + 96) && !*((_BYTE *)v7[2] + 33) )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v19 = Flags[1];
          if ( (Flags[1] & 1) != 0 )
          {
            v39 = (PWORKER_FACTORY_DEFERRED_WORK)PortHandle[0];
            v20 = Flags[0];
            Handle = PortHandle[1];
            memset_0(v49, 0, 0x40uLL);
            v21 = KeGetCurrentThread();
            --v21->KernelApcDisable;
            v44 = 0LL;
            v22 = v20 & 0xFFFF0000;
            if ( (v22 & 0x20000) == 0 )
            {
              v36 = 0LL;
              if ( ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &v36, 0LL) >= 0 )
              {
                if ( (v22 & 0x40000) != 0 )
                  AlpcpTrackPortReferences(v36);
                v49[0] = v36;
                v52 = v22 | 4;
                v50 = 0LL;
                v49[3] = 0LL;
                v51 = 0LL;
                if ( (int)AlpcpSendMessage(v49, v39, 0LL, PreviousMode) < 0 )
                {
                  ObfDereferenceObject(v49[0]);
                }
                else
                {
                  *(_QWORD *)&v44 = v50;
                  *((PVOID *)&v44 + 1) = v49[0];
                  AlpcpSignal((__int64)v49, 1u, 0, v23);
                }
              }
            }
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v19 = Flags[1];
          }
          if ( (v19 & 2) != 0 )
          {
            v24 = KeGetCurrentThread();
            if ( (v24->MiscFlags & 4) == 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql != 2 )
                __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v18) = 2;
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v18);
              }
              v24->WaitIrql = CurrentIrql;
              v24->MiscFlags |= 4u;
            }
            PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
          }
          v15 = IoRemoveIoCompletion(
                  (struct _KQUEUE *)v7[2][1],
                  (unsigned __int64)Address,
                  Pool2,
                  v6,
                  &v35,
                  PreviousMode,
                  0LL,
                  1u);
          ExpWorkerFactoryFinishDeferredWork(&v44);
          v28 = v7[2];
          Handle = v28;
          LockHandle.LockQueue.Lock = v28;
          LockHandle.LockQueue.Next = 0LL;
          v29 = (_WORKER_FACTORY_DEFERRED_WORK *)KeGetCurrentIrql();
          v39 = v29;
          if ( (_BYTE)v29 != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v26) = 2;
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v29, v26);
            v28 = (PKSPIN_LOCK)Handle;
            LOBYTE(v29) = (_BYTE)v39;
          }
          LockHandle.OldIrql = (unsigned __int8)v29;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            v30 = _InterlockedExchange64((volatile __int64 *)v28, (__int64)&LockHandle);
            if ( v30 )
              KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v30, v27);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v28);
          }
          if ( v15 == 258 )
          {
            if ( !*((_DWORD *)v7 + 100) && *((_DWORD *)v7 + 96) < (unsigned int)(*((_DWORD *)v7 + 95) + 1) )
            {
              v31 = v7[2];
              if ( *((_DWORD *)v31 + 7) <= 1u && (*(_DWORD *)(v31[1] + 4) || *((_DWORD *)v7[2] + 6)) )
                continue;
            }
            if ( *((_DWORD *)v7 + 96) <= *((_DWORD *)v7 + 94)
              || *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
            {
              continue;
            }
          }
          goto LABEL_67;
        }
        v15 = 258;
LABEL_67:
        --*((_DWORD *)v7[2] + 7);
        if ( v15 == 258 )
        {
          --*((_DWORD *)v7 + 96);
          --*((_DWORD *)v7 + 97);
          ExpRemoveCurrentThreadFromThreadHistory(v7);
        }
        else
        {
          ExpAddCurrentThreadToThreadHistory(v7);
        }
        if ( (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v7) )
          ExpWorkerFactoryCheckCreate((ULONG_PTR)v7, (__int64)&LockHandle, 0LL);
        else
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( !v15 )
        {
          if ( PreviousMode )
            RtlWriteULongToUser(PacketsReturned, v35);
          else
            *PacketsReturned = v35;
        }
      }
    }
  }
  if ( Pool2 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(Pool2, 0);
  if ( v7 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)(v7 - 6), -1, 0x746C6644u);
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v12 = v11 <= 1;
    BugCheckParameter4 = v11 - 1;
    if ( v12 )
    {
      if ( *(v7 - 5) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v7 - 48) >> 8)],
          (ULONG_PTR)v7,
          1uLL,
          (ULONG_PTR)*(v7 - 5));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v7, 2uLL, BugCheckParameter4);
      v32 = KeAreAllApcsDisabled();
      v33 = (__int64)(v7 - 6);
      if ( v32 )
      {
        ObpDeferObjectDeletion(v33);
      }
      else
      {
        v34 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v33);
        if ( v34 )
          ObpHandleRevocationBlockRemoveObject(v34);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v7 - 6);
        ObpRemoveObjectRoutine(v7 - 6, 0LL);
      }
    }
  }
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(PortHandle[1], Flags[0], (PPORT_MESSAGE)PortHandle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v15;
}
