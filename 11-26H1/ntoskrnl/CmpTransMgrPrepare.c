/*
 * XREFs of CmpTransMgrPrepare @ 0x1408AEE6C
 * Callers:
 *     CmpRmUnDoPhase @ 0x14085E718 (CmpRmUnDoPhase.c)
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408AEE3C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrSyncHive @ 0x1408AF3A0 (CmpTransMgrSyncHive.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmListGetNextElement @ 0x140C58A70 (CmListGetNextElement.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  char v8; // si
  __int64 NextElement; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _EX_RUNDOWN_REF *v14; // rbx
  struct _KTHREAD *v15; // rbx
  ULONG_PTR PriorityFloorCounts; // rdi
  __int64 i; // rcx
  unsigned int v18; // edx
  int v19; // ebx
  struct _KTHREAD *Thread; // rdi
  __int64 v21; // rcx
  struct _EX_RUNDOWN_REF *v23; // rcx
  struct _EX_RUNDOWN_REF *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  *a4 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  *a3 = 0;
  LOCK_TRANSACTION_LIST();
  v8 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)(a2 + 16) != a2 + 16 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    CmpLockRegistry();
    v26 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a2 + 16, &v26, 0LL);
      if ( !NextElement )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 4160LL) == a1 )
        ++*a3;
    }
    v14 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
    if ( v14 )
    {
      v24 = v14 + 205;
      if ( ExAcquireRundownProtection_0(v14 + 205) )
      {
        CmpUnlockRegistry(v21);
        v19 = CmpTransMgrSyncHive((ULONG_PTR)v14);
        v23 = v24;
LABEL_28:
        ExReleaseRundownProtection_0(v23);
        goto LABEL_25;
      }
      v19 = 0;
    }
    else
    {
      v15 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
      CmpLockHiveListShared(v11, v10, v12, v13, v26, ApcState.ApcListHead[0].Flink, ApcState.ApcListHead[0].Blink);
      do
      {
        v15 = *(struct _KTHREAD **)&v15->Header.Lock;
        PriorityFloorCounts = 0LL;
        if ( v15 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
          break;
        PriorityFloorCounts = (ULONG_PTR)v15[-2].PriorityFloorCounts;
      }
      while ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v15->QuantumTarget) );
      CmpUnlockHiveList();
      while ( PriorityFloorCounts )
      {
        if ( *(_QWORD *)(PriorityFloorCounts + 4160) == a1 && (*(_DWORD *)(PriorityFloorCounts + 160) & 2) == 0 )
        {
          v18 = *(_DWORD *)(a2 + 112);
          if ( v18 )
          {
            for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
            {
              if ( PriorityFloorCounts == *(_QWORD *)(a2 + 8 * i + 120) )
                goto LABEL_20;
            }
          }
          else
          {
LABEL_20:
            CmpUnlockRegistry(i);
            v19 = CmpTransMgrSyncHive(PriorityFloorCounts);
            if ( v19 < 0 )
            {
              v23 = (struct _EX_RUNDOWN_REF *)(PriorityFloorCounts + 1640);
              goto LABEL_28;
            }
            CmpLockRegistry();
          }
        }
        PriorityFloorCounts = CmpGetNextActiveHive(PriorityFloorCounts);
      }
      Thread = stru_140E098B8.WaitBlock[2].Thread;
      v21 = *(unsigned int *)(stru_140E098B8.WaitBlock[2].Thread->ThreadLock + 144);
      if ( (v21 & 1) != 0 )
        goto LABEL_24;
      HvLockHiveFlusherExclusive(stru_140E098B8.WaitBlock[2].Thread);
      HvLockHiveWriter(Thread);
      v19 = HvpMarkDirty((ULONG_PTR)Thread);
      HvUnlockHiveWriter(Thread);
      if ( v19 >= 0 )
      {
        *(_DWORD *)(Thread->ThreadLock + 144) |= 1u;
        HvUnlockHiveFlusherExclusive(Thread);
        CmpUnlockRegistry(v25);
        v8 = 0;
        if ( (int)CmpFlushHive(Thread, 0LL) >= 0 )
        {
LABEL_24:
          v19 = 0;
          if ( v8 )
            goto LABEL_31;
          goto LABEL_25;
        }
        v19 = -1073741670;
LABEL_25:
        CmpDetachFromRegistryProcess(&ApcState);
        return (unsigned int)v19;
      }
      HvUnlockHiveFlusherExclusive(Thread);
    }
LABEL_31:
    CmpUnlockRegistry(v21);
    goto LABEL_25;
  }
  *a4 = 1;
  return 0;
}
