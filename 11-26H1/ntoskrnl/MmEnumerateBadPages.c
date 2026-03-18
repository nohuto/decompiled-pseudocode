/*
 * XREFs of MmEnumerateBadPages @ 0x140B5D81C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiIterateOverPartitions @ 0x1404A90F4 (MiIterateOverPartitions.c)
 *     MiGetListOfPendingBadPages @ 0x14052AB58 (MiGetListOfPendingBadPages.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x14052D548 (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x1406F1F64 (MiSortPageFramesRemoveDuplicates.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmEnumerateBadPages(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v6; // rdi
  char *v7; // r15
  unsigned int v8; // esi
  void *v9; // rdx
  LegacyAutoBoost *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  int CurrentProcessorColor; // eax
  __int64 v15; // rdx
  __int64 PoolMm; // rax
  const void **v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  PVOID P[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+30h] [rbp-10h]
  size_t v23; // [rsp+38h] [rbp-8h]

  P[1] = P;
  *a1 = 0LL;
  P[0] = P;
  v22 = 0LL;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  --CurrentThread->SpecialApcDisable;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E2EB88, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2EB88, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E2EB88.Header.Lock, 0, v10, &stru_140E2EB88);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  MiIterateOverPartitions((__int64)MiEnumeratePartitionBadPages, (__int64)P);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2EB88, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E2EB88.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2EB88);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12, v11);
  MiGetListOfPendingBadPages((__int64)P);
  MiEnumerateQuarantinedBadHugeRangePages((__int64)P);
  if ( (int)v22 >= 0 )
  {
    if ( v23 )
    {
      if ( v23 + 1 >= v23
        && v23 + 1 <= 0x1FFFFFFFFFFFFFFFLL
        && (CurrentProcessorColor = MmGetCurrentProcessorColor(),
            PoolMm = ExAllocatePoolMm(64LL, 8 * v15 + 8, 1631743309, CurrentProcessorColor | 0x80000000),
            (v6 = (_QWORD *)PoolMm) != 0LL) )
      {
        v7 = (char *)(PoolMm + 8);
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = v22;
  }
  while ( 1 )
  {
    v17 = (const void **)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v18 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v18 + 8) = P;
    if ( v7 )
    {
      memmove(v7, v17[3], 8LL * (_QWORD)v17[2]);
      v7 += 8 * (_QWORD)v17[2];
    }
    ExFreePoolWithTag(v17, 0);
  }
  if ( v6 )
  {
    v19 = MiSortPageFramesRemoveDuplicates(v6 + 1, v23);
    *v6 = v19 ^ (*v6 ^ v19) & 0xFFF0000000000000uLL;
  }
  *a1 = v6;
  return v8;
}
