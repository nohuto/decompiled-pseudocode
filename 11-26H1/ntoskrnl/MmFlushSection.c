/*
 * XREFs of MmFlushSection @ 0x14039C7A0
 * Callers:
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x14039BBBC (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheOneRange @ 0x14039BEE0 (CcFlushCacheOneRange.c)
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 *     CcMdlWriteComplete2 @ 0x14040EDA0 (CcMdlWriteComplete2.c)
 *     CcUnpinRepinnedBcb @ 0x1404A3690 (CcUnpinRepinnedBcb.c)
 *     CcPurgeAndClearCacheSection @ 0x1404ACF44 (CcPurgeAndClearCacheSection.c)
 *     MiFlushDataSection @ 0x1404B705C (MiFlushDataSection.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiFlushRelease @ 0x14036F2C0 (MiFlushRelease.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiFreeOverlappedFlushEntry @ 0x1403CBAA8 (MiFreeOverlappedFlushEntry.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 *     MiComputeDataFlushRange @ 0x140480064 (MiComputeDataFlushRange.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A6A2E0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A6A590 (FsRtlReleaseFileForCcFlush.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmFlushSection(__int64 a1, struct _KTHREAD **a2, __int64 a3, struct _KEVENT *a4, _DWORD *a5, int a6)
{
  int v6; // r13d
  struct _KTHREAD **v10; // r14
  __int64 v11; // rdi
  int v12; // esi
  __int64 result; // rax
  volatile signed __int32 *PoolMm; // rbx
  __int64 v15; // rax
  ULONG_PTR v16; // r15
  ULONG_PTR v17; // r12
  struct _KTHREAD *CurrentThread; // rbp
  char v19; // r14
  int v20; // eax
  __int64 v21; // r13
  int v22; // esi
  unsigned int v23; // ebp
  struct _FILE_OBJECT *v24; // r14
  unsigned __int64 v25; // rdi
  _DWORD *v26; // rcx
  __int128 v27; // [rsp+40h] [rbp-68h] BYREF
  __int128 v28; // [rsp+50h] [rbp-58h]
  __int128 v29; // [rsp+60h] [rbp-48h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  struct _KTHREAD *v31; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v32; // [rsp+C0h] [rbp+18h]

  v32 = a3;
  v6 = a6;
  v31 = 0LL;
  v10 = a2;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( a2 )
  {
    v10 = &v31;
    v31 = *a2;
  }
  v11 = (__int64)a5;
  *a5 = 0;
  *(_QWORD *)(v11 + 8) = 0LL;
  if ( a4 )
  {
    v12 = v6 & 1;
    if ( (v6 & 1) != 0 )
    {
      KeSetEvent(a4, 0, 0);
      result = 3221225716LL;
      *(_DWORD *)v11 = -1073741580;
      return result;
    }
    PoolMm = (volatile signed __int32 *)ExAllocatePoolMm(
                                          64LL,
                                          0x30uLL,
                                          1817144653,
                                          KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !PoolMm )
    {
      KeSetEvent(a4, 0, 0);
      result = 3221225626LL;
      *(_DWORD *)v11 = -1073741670;
      return result;
    }
  }
  else
  {
    PoolMm = 0LL;
    v12 = v6 & 1;
  }
  LOBYTE(a5) = 0;
  v15 = MiLockSectionControlArea(a1, 1LL, &a5);
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 56) & 3) != 0 || !*(_QWORD *)(v15 + 32) )
    {
      v25 = (unsigned __int8)a5;
      v26 = (_DWORD *)(v15 + 72);
      if ( (_BYTE)a5 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v26 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v26, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v26 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v26, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
        __writecr8(v25);
      }
    }
    else if ( (unsigned int)MiComputeDataFlushRange(v15, (unsigned __int8)a5, v10, a3, 0, &v27) )
    {
      v16 = v29;
      v17 = *((_QWORD *)&v28 + 1);
      if ( PoolMm )
      {
        *((_QWORD *)PoolMm + 4) = a4;
        *((_QWORD *)PoolMm + 2) = 1LL;
        *((_QWORD *)PoolMm + 3) = v11;
        *(_QWORD *)PoolMm = v17;
        *((_QWORD *)PoolMm + 1) = v16;
      }
      CurrentThread = KeGetCurrentThread();
      v31 = CurrentThread;
      v19 = BYTE4(CurrentThread[1].Queue);
      LOBYTE(a5) = v19;
      BYTE4(CurrentThread[1].Queue) = 1;
      if ( v12 )
      {
        v23 = 0;
        v24 = (struct _FILE_OBJECT *)MiReferenceControlAreaFileWithTag(v27, 0x63536D4Du, 0);
        do
        {
          v22 = FsRtlAcquireFileForCcFlushEx(v24);
          if ( v22 < 0 )
            break;
          v22 = MiFlushSection(DWORD2(v27), v28, v17, v16, (__int64)PoolMm, v6, 0LL, v11);
          FsRtlReleaseFileForCcFlush(v24);
          if ( v22 != -1073741740 )
            break;
          ++v23;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        }
        while ( v23 < 5 );
        v21 = v27;
        ObFastDereferenceObjectDeferDelete((signed __int64 *)(v27 + 64), (ULONG_PTR)v24, 0x63536D4Du);
        CurrentThread = v31;
        v19 = (char)a5;
      }
      else
      {
        v20 = MiFlushSection(DWORD2(v27), v28, v17, v16, (__int64)PoolMm, v6, 0LL, v11);
        v21 = v27;
        v22 = v20;
      }
      if ( v22 < 0 || *(_QWORD *)(v11 + 8) )
        *(_QWORD *)(v11 + 8) += (unsigned int)(DWORD2(v29) << 12);
      else
        *(_QWORD *)(v11 + 8) = v32;
      BYTE4(CurrentThread[1].Queue) = v19;
      if ( PoolMm )
      {
        if ( _InterlockedExchangeAdd(PoolMm + 4, 0xFFFFFFFF) == 1 )
          MiFreeOverlappedFlushEntry((PVOID)PoolMm);
        return (unsigned int)v22;
      }
      else
      {
        MiFlushRelease(v21, v17, v16);
        return (unsigned int)v22;
      }
    }
  }
  if ( PoolMm )
  {
    ExFreePoolWithTag((PVOID)PoolMm, 0);
    KeSetEvent(a4, 0, 0);
  }
  return 0LL;
}
