/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x14037CC40
 * Callers:
 *     DifNtWaitForWorkViaWorkerFactoryWrapper @ 0x1406917D0 (DifNtWaitForWorkViaWorkerFactoryWrapper.c)
 * Callees:
 *     IoRemoveIoCompletion @ 0x1402207D0 (IoRemoveIoCompletion.c)
 *     KeAreAllApcsDisabled @ 0x140263C40 (KeAreAllApcsDisabled.c)
 *     AlpcpSignal @ 0x1402648EC (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269BD0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402C2960 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402C2B40 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryFinishDeferredWork @ 0x14037D4AC (ExpWorkerFactoryFinishDeferredWork.c)
 *     PspRevertContainerImpersonation @ 0x14037D900 (PspRevertContainerImpersonation.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1403DF6B0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpAddCurrentThreadToThreadHistory @ 0x14044D9E0 (ExpAddCurrentThreadToThreadHistory.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1404B0784 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObpDeregisterObject @ 0x140779D4C (ObpDeregisterObject.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ExSystemExceptionFilter @ 0x140836A60 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     NtAlpcSendWaitReceivePort @ 0x1408F9100 (NtAlpcSendWaitReceivePort.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpRemoveObjectRoutine @ 0x140923BC0 (ObpRemoveObjectRoutine.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A5A090 (ObpHandleRevocationBlockRemoveObject.c)
 *     AlpcpTrackPortReferences @ 0x140A7A860 (AlpcpTrackPortReferences.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtWaitForWorkViaWorkerFactory(void *a1, volatile void *a2, ULONG a3, _DWORD *a4, void *Src)
{
  ULONG v6; // r13d
  PKSPIN_LOCK *v7; // rsi
  unsigned __int8 PreviousMode; // r15
  PLIST_ENTRY *Pool2; // rbx
  unsigned int ULongFromUser; // eax
  signed __int64 v11; // rbx
  bool v12; // cc
  signed __int64 BugCheckParameter4; // rbx
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  char v19; // al
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _KTHREAD *v23; // rax
  unsigned int v24; // r14d
  char v25; // r9
  struct _KTHREAD *v26; // r14
  unsigned __int8 CurrentIrql; // r12
  __int64 v28; // rdx
  __int64 v29; // r8
  PKSPIN_LOCK v30; // rcx
  void *v31; // rax
  __int64 v32; // rdx
  PKSPIN_LOCK v33; // rax
  BOOLEAN v34; // al
  __int64 v35; // rcx
  __int64 v36; // rax
  ULONG v37; // [rsp+44h] [rbp-1A4h] BYREF
  PVOID v38; // [rsp+48h] [rbp-1A0h] BYREF
  PLIST_ENTRY *v39; // [rsp+50h] [rbp-198h]
  PVOID Object; // [rsp+58h] [rbp-190h] BYREF
  void *v41; // [rsp+60h] [rbp-188h]
  HANDLE Handle; // [rsp+68h] [rbp-180h]
  volatile void *Address; // [rsp+70h] [rbp-178h]
  PVOID v44; // [rsp+78h] [rbp-170h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-168h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-148h] BYREF
  int v47[4]; // [rsp+B0h] [rbp-138h] BYREF
  int v48[2]; // [rsp+C0h] [rbp-128h]
  volatile void *v49; // [rsp+C8h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-118h]
  PVOID v51[4]; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v52; // [rsp+100h] [rbp-E8h]
  __int64 v53; // [rsp+108h] [rbp-E0h]
  int v54; // [rsp+110h] [rbp-D8h]
  _BYTE P[128]; // [rsp+120h] [rbp-C8h] BYREF

  v6 = a3;
  Address = a2;
  Handle = a1;
  v49 = a2;
  LODWORD(v38) = a3;
  Object = a4;
  v41 = Src;
  v46 = 0LL;
  *(_OWORD *)v47 = 0LL;
  *(_QWORD *)v48 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(P, 0, sizeof(P));
  v37 = 0;
  v7 = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  Pool2 = (PLIST_ENTRY *)P;
  v39 = (PLIST_ENTRY *)P;
  if ( v6 - 1 > 0x7FFFFFE )
  {
    v15 = -1073741811;
  }
  else
  {
    if ( PreviousMode )
    {
      ProbeForWrite(Address, 32LL * v6, 8u);
      ULongFromUser = RtlReadULongFromUser(a4);
      RtlWriteULongToUser(a4, ULongFromUser);
      if ( ((unsigned __int8)Src & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(v47, Src, 0x18uLL);
    }
    else
    {
      RtlCopyVolatileMemory(v47, Src, 0x18uLL);
    }
    Object = 0LL;
    v15 = ObReferenceObjectByHandle(Handle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
    v7 = (PKSPIN_LOCK *)Object;
    v44 = Object;
    if ( v15 >= 0 )
    {
      if ( v6 > 0x10 )
      {
        Pool2 = (PLIST_ENTRY *)ExAllocatePool2(0x40uLL);
        v39 = Pool2;
        if ( !Pool2 )
        {
          v6 = 16;
          Pool2 = (PLIST_ENTRY *)P;
          v39 = (PLIST_ENTRY *)P;
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
          v19 = v48[1];
          if ( (v48[1] & 1) != 0 )
          {
            v41 = *(void **)v47;
            v20 = v48[0];
            Handle = *(HANDLE *)&v47[2];
            memset_0(v51, 0, 0x40uLL);
            v23 = KeGetCurrentThread();
            --v23->KernelApcDisable;
            v46 = 0LL;
            v24 = v20 & 0xFFFF0000;
            if ( (v24 & 0x20000) == 0 )
            {
              v38 = 0LL;
              if ( ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &v38, 0LL) >= 0 )
              {
                if ( (v24 & 0x40000) != 0 )
                  AlpcpTrackPortReferences(v38);
                v51[0] = v38;
                v54 = v24 | 4;
                v52 = 0LL;
                v51[3] = 0LL;
                v53 = 0LL;
                if ( (int)AlpcpSendMessage(v51, v41, 0LL, PreviousMode) < 0 )
                {
                  ObfDereferenceObject(v51[0]);
                }
                else
                {
                  *(_QWORD *)&v46 = v52;
                  *((PVOID *)&v46 + 1) = v51[0];
                  AlpcpSignal((__int64)v51, 1u, 0, v25);
                }
              }
            }
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22);
            v19 = v48[1];
          }
          if ( (v19 & 2) != 0 )
          {
            v26 = KeGetCurrentThread();
            if ( (v26->MiscFlags & 4) == 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql != 2 )
                __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v18) = 2;
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v18);
              }
              v26->WaitIrql = CurrentIrql;
              v26->MiscFlags |= 4u;
            }
            PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
          }
          v15 = IoRemoveIoCompletion(
                  (struct _KQUEUE *)v7[2][1],
                  (unsigned __int64)Address,
                  Pool2,
                  v6,
                  &v37,
                  PreviousMode,
                  0LL,
                  1u);
          ExpWorkerFactoryFinishDeferredWork(&v46);
          v30 = v7[2];
          Handle = v30;
          LockHandle.LockQueue.Lock = v30;
          LockHandle.LockQueue.Next = 0LL;
          v31 = (void *)KeGetCurrentIrql();
          v41 = v31;
          if ( (_BYTE)v31 != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v28) = 2;
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v31, v28);
            v30 = (PKSPIN_LOCK)Handle;
            LOBYTE(v31) = (_BYTE)v41;
          }
          LockHandle.OldIrql = (unsigned __int8)v31;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          {
            v32 = _InterlockedExchange64((volatile __int64 *)v30, (__int64)&LockHandle);
            if ( v32 )
              KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v32, v29);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v30);
          }
          if ( v15 == 258 )
          {
            if ( !*((_DWORD *)v7 + 100) && *((_DWORD *)v7 + 96) < (unsigned int)(*((_DWORD *)v7 + 95) + 1) )
            {
              v33 = v7[2];
              if ( *((_DWORD *)v33 + 7) <= 1u && (*(_DWORD *)(v33[1] + 4) || *((_DWORD *)v7[2] + 6)) )
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
            RtlWriteULongToUser(a4, v37);
          else
            *a4 = v37;
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
      v34 = KeAreAllApcsDisabled();
      v35 = (__int64)(v7 - 6);
      if ( v34 )
      {
        ObpDeferObjectDeletion(v35);
      }
      else
      {
        v36 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v35);
        if ( v36 )
          ObpHandleRevocationBlockRemoveObject(v36);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v7 - 6);
        ObpRemoveObjectRoutine(v7 - 6, 0LL);
      }
    }
  }
  if ( (v48[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(v47[2], v48[0], v47[0], 0, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v15;
}
