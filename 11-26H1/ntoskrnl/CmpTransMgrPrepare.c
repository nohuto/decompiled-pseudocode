/*
 * XREFs of CmpTransMgrPrepare @ 0x1408B52AC
 * Callers:
 *     CmpRmUnDoPhase @ 0x140864A08 (CmpRmUnDoPhase.c)
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408B527C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrSyncHive @ 0x1408B57AC (CmpTransMgrSyncHive.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  char v8; // si
  __int64 NextElement; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  ULONG_PTR i; // rcx
  __int64 NextActiveHive; // rax
  ULONG_PTR v13; // rdi
  __int64 j; // rcx
  unsigned int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *Thread; // rdi
  __int64 v22; // rcx
  struct _EX_RUNDOWN_REF *v24; // rcx
  struct _EX_RUNDOWN_REF *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-78h] BYREF
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
    ((void (*)(void))CmpLockRegistry)();
    v27 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a2 + 16, &v27, 0LL);
      if ( !NextElement )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 4160LL) == a1 )
        ++*a3;
    }
    v10 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
    if ( v10 )
    {
      v25 = v10 + 205;
      if ( ExAcquireRundownProtection_0(v10 + 205) )
      {
        CmpUnlockRegistry(v22);
        v18 = CmpTransMgrSyncHive((ULONG_PTR)v10);
        v24 = v25;
LABEL_25:
        ExReleaseRundownProtection_0(v24);
        goto LABEL_22;
      }
      v18 = 0;
    }
    else
    {
      for ( i = 0LL; ; i = v13 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v13 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( *(_QWORD *)(NextActiveHive + 4160) == a1 )
        {
          j = *(unsigned int *)(NextActiveHive + 160);
          if ( (j & 2) == 0 )
          {
            v15 = *(_DWORD *)(a2 + 112);
            if ( v15 )
            {
              for ( j = 0LL; (unsigned int)j < v15; j = (unsigned int)(j + 1) )
              {
                if ( NextActiveHive == *(_QWORD *)(a2 + 8 * j + 120) )
                  goto LABEL_17;
              }
            }
            else
            {
LABEL_17:
              CmpUnlockRegistry(j);
              v18 = CmpTransMgrSyncHive(v13);
              if ( v18 < 0 )
              {
                v24 = (struct _EX_RUNDOWN_REF *)(v13 + 1640);
                goto LABEL_25;
              }
              CmpLockRegistry(v17, v16, v19, v20, v27, ApcState.ApcListHead[0].Flink, ApcState.ApcListHead[0].Blink);
            }
          }
        }
      }
      Thread = stru_140E098B8.WaitBlock[2].Thread;
      v22 = *(unsigned int *)(stru_140E098B8.WaitBlock[2].Thread->ThreadLock + 144);
      if ( (v22 & 1) != 0 )
        goto LABEL_21;
      HvLockHiveFlusherExclusive(stru_140E098B8.WaitBlock[2].Thread);
      HvLockHiveWriter(Thread);
      v18 = HvpMarkDirty((ULONG_PTR)Thread);
      HvUnlockHiveWriter(Thread);
      if ( v18 >= 0 )
      {
        *(_DWORD *)(Thread->ThreadLock + 144) |= 1u;
        HvUnlockHiveFlusherExclusive(Thread);
        CmpUnlockRegistry(v26);
        v8 = 0;
        if ( (int)CmpFlushHive(Thread, 0LL) >= 0 )
        {
LABEL_21:
          v18 = 0;
          if ( v8 )
            goto LABEL_28;
          goto LABEL_22;
        }
        v18 = -1073741670;
LABEL_22:
        CmpDetachFromRegistryProcess(&ApcState);
        return (unsigned int)v18;
      }
      HvUnlockHiveFlusherExclusive(Thread);
    }
LABEL_28:
    CmpUnlockRegistry(v22);
    goto LABEL_22;
  }
  *a4 = 1;
  return 0;
}
