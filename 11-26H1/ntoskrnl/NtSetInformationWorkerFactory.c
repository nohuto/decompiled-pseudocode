/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1403E1B50
 * Callers:
 *     DifNtSetInformationWorkerFactoryWrapper @ 0x140690B60 (DifNtSetInformationWorkerFactoryWrapper.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14030D620 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryCreateThread @ 0x14030DCFC (ExpWorkerFactoryCreateThread.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1403E28A0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeTimeOutQueueWaiters @ 0x1403E3298 (KeTimeOutQueueWaiters.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1404A9E14 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // si
  ULONG v9; // edx
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  bool v14; // r14
  unsigned int *v15; // rdi
  unsigned __int64 *v16; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v18; // rdx
  unsigned int v19; // eax
  PKSPIN_LOCK *v20; // rcx
  NTSTATUS Thread; // r12d
  char v22; // si
  signed __int64 v23; // rbx
  bool v24; // cc
  signed __int64 v25; // rbx
  unsigned int v26; // eax
  bool v27; // zf
  unsigned int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r8
  unsigned int v33; // eax
  PKSPIN_LOCK v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // eax
  BOOLEAN v37; // al
  signed __int64 v38; // rcx
  __int64 v39; // rax
  PKSPIN_LOCK *v40; // [rsp+38h] [rbp-1A0h]
  PVOID Object; // [rsp+50h] [rbp-188h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-180h] BYREF
  _QWORD v43[3]; // [rsp+78h] [rbp-160h] BYREF
  __int64 Src; // [rsp+90h] [rbp-148h] BYREF

  v43[0] = WorkerFactoryInformation;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset_0(&Src, 0, 0x100uLL);
  if ( WorkerFactoryInformationClass == WorkerFactoryThreadBasePriority )
  {
LABEL_2:
    v9 = 4;
LABEL_3:
    if ( WorkerFactoryInformationLength != v9 )
      return -1073741820;
    switch ( WorkerFactoryInformationClass )
    {
      case WorkerFactoryCallbackType:
        if ( PreviousMode )
        {
          if ( ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          LODWORD(Src) = RtlReadULongFromUser(WorkerFactoryInformation);
        }
        else
        {
          RtlCopyVolatileMemory(&Src, WorkerFactoryInformation, 4uLL);
        }
        break;
      case WorkerFactoryBindingCount:
        if ( PreviousMode )
          ULongFromUser = RtlReadULongFromUser(WorkerFactoryInformation);
        else
          ULongFromUser = *(_DWORD *)WorkerFactoryInformation;
        LODWORD(Src) = ULongFromUser;
        break;
      case WorkerFactoryIdleTimeout:
        JUMPOUT(0x1403E1C68LL);
      default:
        __fastfail(0x25u);
    }
    Object = 0LL;
    result = ObReferenceObjectByHandle(WorkerFactoryHandle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
    if ( result >= 0 )
    {
      v14 = 0;
      v15 = (unsigned int *)Object;
      v40 = (PKSPIN_LOCK *)((char *)Object + 16);
      v16 = (unsigned __int64 *)*((_QWORD *)Object + 2);
      LockHandle.LockQueue.Lock = v16;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12);
      }
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v18 = _InterlockedExchange64((volatile __int64 *)v16, (__int64)&LockHandle);
        if ( v18 )
          KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v18, v13);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v16);
      }
      if ( WorkerFactoryInformationClass != WorkerFactoryCallbackType )
      {
        switch ( WorkerFactoryInformationClass )
        {
          case WorkerFactoryIdleTimeout:
            v20 = v40;
            if ( *((_BYTE *)*v40 + 33) )
            {
              Thread = 128;
            }
            else
            {
              v35 = Src;
              if ( Src >= 0 )
              {
                Thread = -1073741811;
              }
              else
              {
                if ( Src > -10000000 )
                  v35 = -10000000LL;
                if ( v35 < -6000000000LL )
                  v35 = -6000000000LL;
                Src = v35;
                *((_QWORD *)v15 + 14) = v35;
                v43[0] = 0LL;
                v43[1] = -1LL;
                KeSetTimer2((__int64)(v15 + 106), v35, -v35, (__int64)v43);
                Thread = 0;
                v20 = v40;
              }
            }
            goto LABEL_30;
          case WorkerFactoryBindingCount:
            v29 = v15[101];
            v30 = (unsigned int)Src;
            if ( (int)Src < 0 )
            {
              if ( v29 > -(int)Src )
              {
                v31 = v29 + Src;
                v15[101] = v29 + Src;
              }
              else
              {
                v15[101] = 0;
                v31 = 0;
              }
            }
            else
            {
              v31 = v29 + Src;
              if ( v29 >= v29 + (unsigned int)Src )
              {
                v15[101] = -1;
                v31 = -1;
              }
              else
              {
                v15[101] = v31;
              }
            }
            if ( v29 )
            {
              if ( !v31 && (v15[102] & 0x200) != 0 )
                ExpLeaveWorkerFactoryAwayMode((ULONG_PTR)v15, v30, v13);
            }
            else if ( v31 && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v15) )
            {
              ExpWorkerFactoryCheckCreate((ULONG_PTR)v15, (__int64)&LockHandle, 0LL);
              Thread = 0;
              v22 = 0;
              v20 = v40;
              LOBYTE(v18) = 0;
              goto LABEL_32;
            }
            goto LABEL_29;
          case WorkerFactoryThreadMinimum:
            v20 = v40;
            if ( !*((_BYTE *)*v40 + 33) )
            {
              v36 = Src;
              v14 = (unsigned int)Src > v15[94];
              v15[94] = Src;
              if ( v15[95] < v36 )
                v15[95] = v36;
              if ( !v14 )
              {
                Thread = 0;
                goto LABEL_30;
              }
              v14 = 0;
              if ( (v15[102] & 0x200) != 0 )
                ExpLeaveWorkerFactoryAwayMode((ULONG_PTR)v15, v18, v13);
              Thread = 0;
              do
              {
                if ( v15[96] + v15[98] >= v15[94] )
                  goto LABEL_108;
                ++v15[100];
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                Thread = ExpWorkerFactoryCreateThread((__int64)v15);
                KeAcquireInStackQueuedSpinLock(*v40, &LockHandle);
              }
              while ( Thread >= 0 );
              --v15[100];
LABEL_108:
              v20 = v40;
              goto LABEL_30;
            }
            Thread = 128;
            break;
          case WorkerFactoryThreadMaximum:
            v20 = v40;
            v34 = *v40;
            if ( *((_BYTE *)*v40 + 33) )
            {
              Thread = 128;
              goto LABEL_30;
            }
            v22 = 1;
            if ( (_DWORD)Src && (!v15[95] && *((_DWORD *)v34 + 6) || *(int *)(v34[1] + 4) > 0) )
              v14 = 1;
            v15[95] = Src;
            v20 = v40;
            if ( (unsigned int)Src < v15[94] )
            {
              v15[94] = Src;
              Thread = 0;
              v18 = 1LL;
              goto LABEL_32;
            }
            Thread = 0;
            goto LABEL_31;
          default:
            __fastfail(0x25u);
        }
        goto LABEL_30;
      }
      switch ( (_DWORD)Src )
      {
        case 0:
          v19 = v15[96];
          if ( v19 == v15[97] )
          {
            Thread = -1073741823;
            v20 = v40;
          }
          else
          {
            v15[96] = v19 + 1;
LABEL_29:
            v20 = v40;
            Thread = 0;
          }
LABEL_30:
          v22 = 0;
LABEL_31:
          v18 = 1LL;
          goto LABEL_32;
        case 1:
          v14 = 1;
          v22 = 0;
          Thread = 0;
          v20 = v40;
          v18 = 1LL;
          goto LABEL_32;
        case 2:
          v26 = v15[96];
          if ( !v26 )
          {
            Thread = -1073741823;
            goto LABEL_45;
          }
          v28 = v26 - 1;
          v27 = v28 == 0;
          v15[96] = v28;
          break;
        case 3:
          if ( !v15[96] )
          {
            Thread = -1073741823;
            goto LABEL_45;
          }
          ExpRemoveCurrentThreadFromThreadHistory(v15);
          --v15[96];
          --v15[97];
          v27 = v15[96] == 0;
          break;
        default:
          Thread = -1073741811;
          v20 = v40;
          goto LABEL_30;
      }
      v14 = v27;
      Thread = 0;
LABEL_45:
      v22 = 0;
      v20 = v40;
      LOBYTE(v18) = 1;
LABEL_32:
      if ( v14 )
      {
        v32 = v15[96];
        if ( *((_BYTE *)*v20 + 33) )
        {
          Thread = 128;
        }
        else
        {
          v33 = v15[95];
          if ( (unsigned int)v32 >= v33 )
          {
            if ( !v22 )
              Thread = -1073741527;
          }
          else if ( v15[100] || (unsigned int)v32 + v15[98] >= v33 )
          {
            Thread = 0;
          }
          else
          {
            if ( (v15[102] & 0x200) != 0 )
              ExpLeaveWorkerFactoryAwayMode((ULONG_PTR)v15, v18, v32);
            ++v15[100];
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            Thread = ExpWorkerFactoryCreateThread((__int64)v15);
            if ( Thread < 0 )
            {
              KeAcquireInStackQueuedSpinLock(*v40, &LockHandle);
              --v15[100];
              if ( v22 )
                Thread = 0;
              LOBYTE(v18) = 1;
            }
            else
            {
              LOBYTE(v18) = 0;
            }
          }
        }
      }
      if ( (_BYTE)v18 )
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)(v15 - 12), -1, 0x746C6644u);
      v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)v15 - 6, 0xFFFFFFFFFFFFFFFFuLL);
      v24 = v23 <= 1;
      v25 = v23 - 1;
      if ( v24 )
      {
        if ( *((_QWORD *)v15 - 5) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v15 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v15 - 48) >> 8)],
            (ULONG_PTR)v15,
            1uLL,
            *((_QWORD *)v15 - 5));
        if ( v25 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v15, 2uLL, v25);
        v37 = KeAreAllApcsDisabled();
        v38 = (signed __int64)(v15 - 12);
        if ( v37 )
        {
          ObpDeferObjectDeletion(v38);
        }
        else
        {
          v39 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v38);
          if ( v39 )
            ObpHandleRevocationBlockRemoveObject(v39);
          if ( ObpTraceFlags )
            ObpDeregisterObject(v15 - 12);
          ObpRemoveObjectRoutine(v15 - 12, 0LL);
        }
      }
      return Thread;
    }
  }
  else
  {
    if ( WorkerFactoryInformationClass != WorkerFactoryPaused )
    {
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          v9 = 8;
          goto LABEL_3;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
        case WorkerFactoryAdjustThreadGoal:
        case WorkerFactoryCallbackType:
        case WorkerFactoryTimeoutWaiters:
        case WorkerFactoryFlags:
        case WorkerFactoryThreadSoftMaximum:
          goto LABEL_2;
        case WorkerFactoryStackInformation:
          v9 = 16;
          goto LABEL_3;
        case WorkerFactoryThreadCpuSets:
          if ( WorkerFactoryInformationLength >= 0x100 )
            v9 = 256;
          else
            v9 = WorkerFactoryInformationLength + (WorkerFactoryInformationLength & 7);
          goto LABEL_3;
        default:
          return -1073741821;
      }
    }
    return -1073741822;
  }
  return result;
}
