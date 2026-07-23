/*
 * XREFs of MiCheckControlArea @ 0x14036FA60
 * Callers:
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x140341C78 (MiRemoveMappedPtes.c)
 *     MiRemoveSystemCacheReferences @ 0x14036F210 (MiRemoveSystemCacheReferences.c)
 *     MiFlushRelease @ 0x14036F2C0 (MiFlushRelease.c)
 *     MiDereferenceControlAreaBySection @ 0x14036F4A8 (MiDereferenceControlAreaBySection.c)
 *     MiUnmapViewSubsections @ 0x14036F6F0 (MiUnmapViewSubsections.c)
 *     MmPurgeSection @ 0x14039E9D4 (MmPurgeSection.c)
 *     MiReleaseFaultCharges @ 0x1404A5730 (MiReleaseFaultCharges.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     PsGetNextPartitionUnsafe @ 0x140259B7C (PsGetNextPartitionUnsafe.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiClearFilePointer @ 0x1402EDC78 (MiClearFilePointer.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiShouldTrimUnusedSegments @ 0x14046E4F8 (MiShouldTrimUnusedSegments.c)
 *     MiInsertUnusedSegment @ 0x14047A120 (MiInsertUnusedSegment.c)
 *     MiImageUnused @ 0x1404B7FC0 (MiImageUnused.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiCleanSection @ 0x1404D9074 (MiCleanSection.c)
 *     MiDeleteDebuggerPatches @ 0x1404E0030 (MiDeleteDebuggerPatches.c)
 *     MiReturnImageBase @ 0x140A85CA8 (MiReturnImageBase.c)
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 *     MiPurgeImageSection @ 0x140B6CD4C (MiPurgeImageSection.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, __int64 a2)
{
  int v2; // r8d
  BOOL v3; // r15d
  unsigned int v4; // ebx
  KIRQL v5; // si
  _QWORD *v7; // rbp
  __int64 inserted; // r14
  __int64 v9; // r12
  int v10; // ecx
  volatile LONG *v11; // rcx
  unsigned int v12; // ecx
  __int64 *v13; // r8
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  unsigned int *v16; // rdi
  unsigned int *NextPartitionUnsafe; // rdx
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  bool v20; // zf
  signed __int64 v21; // rtt
  unsigned int *v22; // rbx
  unsigned int *v23; // rdx
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  bool v26; // zf
  signed __int64 v27; // rtt
  __int64 v29; // [rsp+20h] [rbp-78h] BYREF
  __int128 v30; // [rsp+28h] [rbp-70h]
  _QWORD v31[2]; // [rsp+38h] [rbp-60h] BYREF
  int v32; // [rsp+48h] [rbp-50h]
  int v33; // [rsp+4Ch] [rbp-4Ch]
  __int64 v34; // [rsp+50h] [rbp-48h]
  __int64 (__fastcall *v35)(); // [rsp+58h] [rbp-40h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 60);
  v3 = *(_QWORD *)(a1 + 64) != 0LL;
  v29 = -1LL;
  v4 = 0;
  v5 = a2;
  v7 = 0LL;
  inserted = 0LL;
  v9 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (v2 & 0x3FF));
  v30 = 0LL;
  if ( !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v10 = *(_DWORD *)(a1 + 56);
    if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    {
      v4 = 2;
      *(_DWORD *)(a1 + 56) = v10 | 1;
LABEL_36:
      v13 = (__int64 *)(a1 + 80);
      goto LABEL_37;
    }
    if ( !*(_QWORD *)(a1 + 32) )
    {
      v4 = 2;
      *(_DWORD *)(a1 + 56) = v10 | 1;
      MiClearFilePointer(a1);
      goto LABEL_36;
    }
    if ( (v10 & 0x20) == 0 )
    {
LABEL_33:
      if ( (*(_DWORD *)(a1 + 56) & 0x40000) != 0 )
        v4 |= 1u;
      else
        inserted = MiInsertUnusedSegment(a1);
      goto LABEL_36;
    }
    MiImageUnused(a1, 1LL, &v29);
    if ( (*(_DWORD *)(a1 + 56) & 0x20000) != 0
      && ((*(_DWORD *)(a1 + 56) & 8) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) == 0) )
    {
      v4 = 16;
    }
    if ( (*(_BYTE *)(a1 + 96) & 1) != 0 )
    {
      v4 = 16;
    }
    else if ( v4 != 16 )
    {
LABEL_18:
      if ( (*(_DWORD *)(a1 + 56) & 0x20000) != 0
        && ((*(_DWORD *)(a1 + 56) & 8) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) == 0) )
      {
        MiReturnImageBase(&v29);
        v29 = -1LL;
        v4 |= 4u;
        v30 = 0LL;
        MiPurgeImageSection(a1);
      }
      if ( (*(_BYTE *)(a1 + 96) & 1) != 0 )
      {
        v31[1] = 0LL;
        v35 = MiWalkImageRemoveDebuggerPatchesFromPage;
        v34 = 0LL;
        v31[0] = a1;
        v32 = 4;
        v33 = -1;
        MiWalkEntireImage(v31);
        MiDeleteDebuggerPatches(a1);
      }
      if ( v4 >= 0x10 )
      {
        v4 &= ~0x10u;
        v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
        v12 = *(_DWORD *)(a1 + 56) & 0xFFFFFFFB;
        v20 = (*(_QWORD *)(a1 + 40))-- == 1LL;
        *(_DWORD *)(a1 + 56) = v12;
        if ( !v20 || *(_QWORD *)(a1 + 24) )
        {
          v4 |= 8u;
        }
        else if ( !*(_QWORD *)(a1 + 32) )
        {
          *(_DWORD *)(a1 + 56) = v12 | 1;
          v4 = 2;
          MiImageUnused(a1, 1LL, &v29);
          MiClearFilePointer(a1);
          goto LABEL_36;
        }
      }
      if ( (v4 & 8) != 0 )
      {
        v4 = v4 & 0xFFFFFFF2 | 4;
        goto LABEL_36;
      }
      if ( (v4 & 2) != 0 )
        goto LABEL_36;
      goto LABEL_33;
    }
    *(_DWORD *)(a1 + 56) |= 4u;
    v11 = (volatile LONG *)(a1 + 72);
    *(_QWORD *)(a1 + 40) = 1LL;
    if ( v5 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    else
      ExReleaseSpinLockExclusive(v11, v5);
    goto LABEL_18;
  }
  v13 = (__int64 *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 80) )
  {
    v14 = *v13;
    v4 = 4;
    do
    {
LABEL_39:
      a2 = *(_QWORD *)v14;
      if ( (*(_DWORD *)(v14 + 8) & 3) != 0 )
      {
        *(_QWORD *)v14 = v7;
        v7 = (_QWORD *)v14;
        *v13 = a2;
      }
      else
      {
        v13 = (__int64 *)v14;
      }
      v14 = a2;
    }
    while ( a2 );
    goto LABEL_45;
  }
LABEL_37:
  if ( (v4 & 4) == 0 )
    goto LABEL_46;
  v14 = *v13;
  if ( *v13 )
    goto LABEL_39;
LABEL_45:
  v4 &= ~4u;
LABEL_46:
  if ( v4 )
  {
    if ( (v4 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, v5, 0LL);
    }
    else
    {
      v15 = (_DWORD *)(a1 + 72);
      if ( v5 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          *v15 = 0;
          MiSegmentDelete(a1);
        }
        else
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
          MiSegmentDelete(a1);
        }
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v15 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
        __writecr8(v5);
        MiSegmentDelete(a1);
      }
    }
  }
  else
  {
    if ( v5 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(a1 + 72) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 72), retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(a1 + 72) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 72), retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      __writecr8(v5);
    }
    MiReleaseControlAreaWaiters(v7, a2, (__int64)v13);
    if ( qword_140E3D880 >= (unsigned __int64)qword_140E3C1A0
      && (unsigned int)MiShouldTrimUnusedSegments(&MiSystemPartition) )
    {
      v16 = 0LL;
      NextPartitionUnsafe = PsGetNextPartitionUnsafe(0LL);
      if ( NextPartitionUnsafe )
      {
        while ( 1 )
        {
          _m_prefetchw(NextPartitionUnsafe + 10);
          v18 = *((_QWORD *)NextPartitionUnsafe + 5);
          v19 = v18 + 1;
          v20 = v18 == 0;
          if ( (unsigned __int64)(v18 + 1) > 1 )
            break;
LABEL_79:
          if ( !v20 )
            __fastfail(0xEu);
          NextPartitionUnsafe = PsGetNextPartitionUnsafe(NextPartitionUnsafe);
          if ( !NextPartitionUnsafe )
            goto LABEL_95;
        }
        while ( 1 )
        {
          v21 = v18;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)NextPartitionUnsafe + 5, v19, v18);
          if ( v21 == v18 )
            break;
          v19 = v18 + 1;
          v20 = v18 == 0;
          if ( v18 == -1 || v20 )
            goto LABEL_79;
        }
        v16 = NextPartitionUnsafe;
      }
      if ( v16 )
      {
        do
        {
          if ( *(_QWORD *)(*(_QWORD *)v16 + 2440LL) )
            KeSetEvent((PRKEVENT)(*(_QWORD *)v16 + 2168LL), 0, 0);
          v22 = 0LL;
          v23 = PsGetNextPartitionUnsafe(v16);
          if ( v23 )
          {
            while ( 1 )
            {
              _m_prefetchw(v23 + 10);
              v24 = *((_QWORD *)v23 + 5);
              v25 = v24 + 1;
              v26 = v24 == 0;
              if ( (unsigned __int64)(v24 + 1) > 1 )
                break;
LABEL_91:
              if ( !v26 )
                __fastfail(0xEu);
              v23 = PsGetNextPartitionUnsafe(v23);
              if ( !v23 )
              {
                PsDereferencePartition(v16, 1850045264LL);
                goto LABEL_95;
              }
            }
            while ( 1 )
            {
              v27 = v24;
              v24 = _InterlockedCompareExchange64((volatile signed __int64 *)v23 + 5, v25, v24);
              if ( v27 == v24 )
                break;
              v25 = v24 + 1;
              v26 = v24 == 0;
              if ( v24 == -1 || v26 )
                goto LABEL_91;
            }
            v22 = v23;
          }
          PsDereferencePartition(v16, 1850045264LL);
          v16 = v22;
        }
        while ( v22 );
      }
    }
  }
LABEL_95:
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v9, v3, inserted);
  return MiReturnImageBase(&v29);
}
