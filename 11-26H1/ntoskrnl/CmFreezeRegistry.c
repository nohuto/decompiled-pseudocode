/*
 * XREFs of CmFreezeRegistry @ 0x140AE3390
 * Callers:
 *     NtFreezeRegistry @ 0x14084EDA0 (NtFreezeRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     CmpDisableLazyFlush @ 0x14051204C (CmpDisableLazyFlush.c)
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     HvMarkBaseBlockDirty @ 0x140AE37FC (HvMarkBaseBlockDirty.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmFreezeRegistry(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rcx
  struct _KTHREAD *v9; // rsi
  unsigned __int8 *PriorityFloorCounts; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  unsigned __int8 *NextActiveHive; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9

  v2 = a1;
  v3 = 0;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(a1, a2) )
  {
    CmpLockRegistryExclusive();
    if ( *(_DWORD *)&WheapPfaLock.ApcStateFill[12] )
    {
      v3 = -1073741431;
      CmpUnlockRegistry(v5);
    }
    else
    {
      v9 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
      CmpLockHiveListShared(v5, v4, v6, v7);
      do
      {
        v9 = *(struct _KTHREAD **)&v9->Header.Lock;
        PriorityFloorCounts = 0LL;
        if ( v9 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
          break;
        PriorityFloorCounts = v9[-2].PriorityFloorCounts;
      }
      while ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v9->QuantumTarget) );
      CmpUnlockHiveList();
      for ( ;
            PriorityFloorCounts;
            PriorityFloorCounts = CmpGetNextActiveHive(
                                    (struct _EX_RUNDOWN_REF *)PriorityFloorCounts,
                                    v11,
                                    v12,
                                    (__int64)v13) )
      {
        if ( (*((_DWORD *)PriorityFloorCounts + 40) & 3) == 0 )
        {
          *(_OWORD *)(*((_QWORD *)PriorityFloorCounts + 8) + 4056LL) = *(_OWORD *)(*((_QWORD *)PriorityFloorCounts + 8)
                                                                                 + 112LL);
          *(_OWORD *)(*((_QWORD *)PriorityFloorCounts + 8) + 4040LL) = *(_OWORD *)(*((_QWORD *)PriorityFloorCounts + 8)
                                                                                 + 148LL);
          *(_OWORD *)(*((_QWORD *)PriorityFloorCounts + 8) + 4072LL) = *(_OWORD *)(*((_QWORD *)PriorityFloorCounts + 8)
                                                                                 + 128LL);
          *(_OWORD *)(*((_QWORD *)PriorityFloorCounts + 8) + 112LL) = 0LL;
          *(_OWORD *)(*((_QWORD *)PriorityFloorCounts + 8) + 148LL) = 0LL;
          *(_OWORD *)(*((_QWORD *)PriorityFloorCounts + 8) + 128LL) = 0LL;
          *(_DWORD *)(*((_QWORD *)PriorityFloorCounts + 8) + 164LL) = 0;
          if ( (*((_DWORD *)PriorityFloorCounts + 1030) & 0x300) != 0x100 && !*((_DWORD *)PriorityFloorCounts + 26) )
          {
            HvLockHiveWriter((__int64)PriorityFloorCounts, v11, v12, v13);
            HvMarkBaseBlockDirty(PriorityFloorCounts);
            HvUnlockHiveWriter((__int64)PriorityFloorCounts);
          }
        }
      }
      v14 = CmFreezeThawTimeoutInSeconds;
      *(_DWORD *)&WheapPfaLock.ApcStateFill[12] = 1;
      if ( v2 )
        v14 = v2;
      KiSetTimerEx(
        (__int64)&CmpFreezeListLock.StackLimit,
        -10000000LL * v14,
        0,
        0,
        (__int64)&CmpFreezeListLock.WaitRegister);
      CmpDisableLazyFlush(2u);
      CmpUnlockRegistry(v15);
      CurrentThread = KeGetCurrentThread();
      v17 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
      --CurrentThread->KernelApcDisable;
      CmpLockHiveListShared(v19, v18, v20, v21);
      do
      {
        v17 = *(struct _KTHREAD **)&v17->Header.Lock;
        NextActiveHive = 0LL;
        if ( v17 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
          break;
        NextActiveHive = v17[-2].PriorityFloorCounts;
      }
      while ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v17->QuantumTarget) );
      CmpUnlockHiveList();
      while ( NextActiveHive )
      {
        if ( (*((_DWORD *)NextActiveHive + 40) & 3) == 0 )
        {
          v3 = CmpFlushHive((ULONG_PTR)NextActiveHive, 0xDu);
          if ( v3 < 0 )
          {
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)NextActiveHive + 205);
            CmThawRegistry();
            v3 = -1073741491;
            break;
          }
        }
        NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive, v23, v24, v25);
      }
      KeLeaveCriticalRegion();
    }
    CmpReleaseShutdownRundown(v8);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v3;
}
