/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x14030D100
 * Callers:
 *     <none>
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     EtwTraceEnqueueWork @ 0x140267678 (EtwTraceEnqueueWork.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14030D620 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 *     KiWakeOtherQueueWaiters @ 0x14030DBC0 (KiWakeOtherQueueWaiters.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 *     IopAllocateMiniCompletionPacket @ 0x140A893B0 (IopAllocateMiniCompletionPacket.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  __int64 v2; // r8
  ULONG_PTR v3; // rsi
  unsigned __int64 *v4; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  NTSTATUS v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 MiniCompletionPacket; // rdi
  __int64 v16; // rbp
  _QWORD *v17; // r12
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rbx
  char v21; // r8
  _QWORD *v22; // r15
  __int64 v23; // r14
  _QWORD *v24; // rax
  unsigned int v25; // esi
  __int64 v26; // rbx
  char v27; // dl
  int v28; // edx
  __int64 *v29; // rcx
  signed __int64 v30; // rbx
  bool v31; // cc
  signed __int64 BugCheckParameter4; // rbx
  BOOLEAN v33; // al
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int8 v36; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+18h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  BugCheckParameter2 = 0LL;
  result = ObReferenceObjectByHandle(
             WorkerFactoryHandle,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             (PVOID *)&BugCheckParameter2,
             0LL);
  if ( result < 0 )
    return result;
  v3 = BugCheckParameter2;
  v4 = *(unsigned __int64 **)(BugCheckParameter2 + 16);
  LockHandle.LockQueue.Lock = v4;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = _InterlockedExchange64((volatile __int64 *)v4, (__int64)&LockHandle);
    if ( v6 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v6, v2);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v4);
  }
  v7 = *(_QWORD *)(v3 + 16);
  if ( *(_BYTE *)(v7 + 33) )
  {
    v9 = 128;
  }
  else
  {
    v8 = *(_DWORD *)(v7 + 24);
    if ( v8 == -1 )
    {
      v9 = -1073741823;
    }
    else
    {
      v9 = 0;
      *(_DWORD *)(v7 + 24) = v8 + 1;
      v10 = *(_QWORD *)(v3 + 16);
      if ( !*(_BYTE *)(v10 + 32) )
      {
        *(_BYTE *)(v10 + 32) = 1;
        if ( (*(_DWORD *)(v3 + 408) & 0x200) != 0 )
          ExpLeaveWorkerFactoryAwayMode(v3);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v14 = *(_QWORD *)(v3 + 16);
        MiniCompletionPacket = *(_QWORD *)(v14 + 16);
        v16 = *(_QWORD *)(v14 + 8);
        if ( MiniCompletionPacket
          || (LOBYTE(v12) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(v12, 0LL)) != 0) )
        {
          *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
          v17 = (_QWORD *)(v16 + 8);
          *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
          *(_DWORD *)(MiniCompletionPacket + 40) = 0;
          *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
          v18 = KeGetCurrentIrql();
          v36 = v18;
          if ( v18 != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v18, 2LL);
          CurrentPrcb = KeGetCurrentPrcb();
          v38 = (__int64)CurrentPrcb;
          CurrentThread = CurrentPrcb->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v21 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork((__int64)CurrentPrcb->CurrentThread, MiniCompletionPacket, v21);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v16, v11, v13);
          if ( (_QWORD *)*v17 == v17
            || *(_DWORD *)(v16 + 40) >= *(_DWORD *)(v16 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v16 && CurrentThread->WaitReason == 15 )
          {
LABEL_37:
            v28 = *(_DWORD *)(v16 + 4);
            *(_DWORD *)(v16 + 4) = v28 + 1;
            v29 = *(__int64 **)(v16 + 32);
            if ( *v29 != v16 + 24 )
LABEL_38:
              __fastfail(3u);
            *(_QWORD *)MiniCompletionPacket = v16 + 24;
            *(_QWORD *)(MiniCompletionPacket + 8) = v29;
            *v29 = MiniCompletionPacket;
            *(_QWORD *)(v16 + 32) = MiniCompletionPacket;
            if ( !v28 && (_QWORD *)*v17 != v17 )
              KiWakeOtherQueueWaiters(CurrentPrcb, v16);
          }
          else
          {
            v22 = (_QWORD *)*v17;
            while ( 1 )
            {
              v23 = (__int64)v22;
              v22 = (_QWORD *)*v22;
              if ( *(_BYTE *)(v23 + 16) != 3 )
              {
LABEL_36:
                CurrentPrcb = (struct _KPRCB *)v38;
                goto LABEL_37;
              }
              v24 = *(_QWORD **)(v23 + 8);
              if ( v22[1] != v23 || *v24 != v23 )
                goto LABEL_38;
              *v24 = v22;
              v25 = 0;
              v22[1] = v24;
              v26 = *(_QWORD *)(v23 + 24);
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 64), 0LL) )
              {
                do
                {
                  if ( (++v25 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v25);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(_QWORD *)(v26 + 64) );
              }
              v3 = BugCheckParameter2;
              v27 = *(_BYTE *)(v26 + 388) == 5 ? KiSignalThread(v38, v26, MiniCompletionPacket, v23) : 0;
              *(_QWORD *)(v26 + 64) = 0LL;
              ++*(_BYTE *)(v23 + 17);
              if ( v27 )
                break;
              if ( v22 == v17 )
                goto LABEL_36;
            }
            CurrentPrcb = (struct _KPRCB *)v38;
            *(_QWORD *)MiniCompletionPacket = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
          KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, v36);
        }
        ExpWorkerFactoryCheckCreate(v3, 0LL);
        goto LABEL_51;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_51:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v3 - 48, -1, 0x746C6644u);
  v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v31 = v30 <= 1;
  BugCheckParameter4 = v30 - 1;
  if ( v31 )
  {
    if ( *(_QWORD *)(v3 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v3 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v3 - 48) >> 8)],
        v3,
        1uLL,
        *(_QWORD *)(v3 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, v3, 2uLL, BugCheckParameter4);
    v33 = KeAreAllApcsDisabled();
    v34 = v3 - 48;
    if ( v33 )
    {
      ObpDeferObjectDeletion(v34);
    }
    else
    {
      v35 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v34);
      if ( v35 )
        ObpHandleRevocationBlockRemoveObject(v35);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v3 - 48);
      ObpRemoveObjectRoutine(v3 - 48, 0LL);
    }
  }
  return v9;
}
