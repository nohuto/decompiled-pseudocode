/*
 * XREFs of MiUpdateSystemProtoPtesTree @ 0x140450590
 * Callers:
 *     MiDeletePerSessionProtos @ 0x14044FF10 (MiDeletePerSessionProtos.c)
 *     MiAllocateSubsectionProtos @ 0x1404503C4 (MiAllocateSubsectionProtos.c)
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
 *     MiDeleteSubsectionPages @ 0x14048B54C (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14048DBBC (MiCreatePrototypePtes.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14052C1C0 (MiEntireSubsectionIsPurged.c)
 *     MiCreatePagingFileFinish @ 0x140988DEC (MiCreatePagingFileFinish.c)
 *     MiBuildImageControlArea @ 0x140A6279C (MiBuildImageControlArea.c)
 *     MiCreateImageMapFreeResources @ 0x140A631D8 (MiCreateImageMapFreeResources.c)
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x140A876DC (MiDeletePageFileSectionNodes.c)
 *     MiAllocatePerSessionProtos @ 0x140B13A28 (MiAllocatePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlpTreeDoubleRotateNodes @ 0x140445700 (RtlpTreeDoubleRotateNodes.c)
 *     RtlpRbReportFatalError @ 0x14061CC2C (RtlpRbReportFatalError.c)
 */

void __fastcall MiUpdateSystemProtoPtesTree(_QWORD *a1, char a2)
{
  unsigned __int64 v4; // rdi
  KIRQL v5; // r12
  __int64 CycleTime; // rbx
  bool v7; // dl
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  char v11; // r8
  char v12; // si
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r15
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 *v19; // r15
  __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // r8
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( (a1[3] & 7) != 0 )
  {
    switch ( a1[3] & 7LL )
    {
      case 1LL:
        v4 = *(a1 - 6);
        break;
      case 2LL:
        v4 = *(_QWORD *)(*(a1 - 7) + 136LL);
        break;
      case 3LL:
        v4 = a1[6];
        break;
      case 4LL:
        v4 = a1[4];
        break;
      default:
        v4 = 0LL;
        break;
    }
  }
  else
  {
    v4 = *(a1 - 14);
  }
  if ( (a2 & 2) != 0 )
  {
    v5 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
  }
  else
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
  }
  if ( (a2 & 1) == 0 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&stru_140E2D2D0.CycleTime, (__int64)a1);
    a1[3] &= ~8uLL;
    goto LABEL_65;
  }
  CycleTime = stru_140E2D2D0.CycleTime;
  v7 = 0;
  if ( !stru_140E2D2D0.CycleTime )
    goto LABEL_30;
  while ( 1 )
  {
    if ( (*(_QWORD *)(CycleTime + 24) & 7) != 0 )
    {
      switch ( *(_QWORD *)(CycleTime + 24) & 7LL )
      {
        case 1LL:
          v8 = *(_QWORD *)(CycleTime - 48);
          break;
        case 2LL:
          v8 = *(_QWORD *)(*(_QWORD *)(CycleTime - 56) + 136LL);
          break;
        case 3LL:
          v8 = *(_QWORD *)(CycleTime + 48);
          break;
        case 4LL:
          v8 = *(_QWORD *)(CycleTime + 32);
          break;
        default:
          goto LABEL_28;
      }
    }
    else
    {
      v8 = *(_QWORD *)(CycleTime - 112);
    }
    if ( v4 >= v8 )
      break;
    v9 = *(_QWORD *)CycleTime;
    if ( !*(_QWORD *)CycleTime )
      goto LABEL_30;
LABEL_33:
    CycleTime = v9;
  }
LABEL_28:
  v9 = *(_QWORD *)(CycleTime + 8);
  if ( v9 )
    goto LABEL_33;
  v7 = 1;
LABEL_30:
  *a1 = 0LL;
  v10 = (unsigned __int64)a1;
  a1[1] = 0LL;
  a1[2] = CycleTime;
  if ( !CycleTime )
  {
    stru_140E2D2D0.CycleTime = (volatile unsigned __int64)a1;
    a1[3] |= 8uLL;
    goto LABEL_65;
  }
  *(_QWORD *)(CycleTime + 8LL * v7) = a1;
  v11 = (-1 - 2 * v7) & 3;
  v12 = *(_BYTE *)(CycleTime + 16) & 3;
  if ( v12 )
  {
LABEL_37:
    if ( v12 == v11 )
    {
      if ( (*(_BYTE *)(v10 + 16) & 3) == v12 )
      {
        v14 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v14 != CycleTime )
          RtlpRbReportFatalError(v14, CycleTime);
        v15 = *(_QWORD *)(CycleTime + 8LL * v7);
        if ( v15 != v10 )
          RtlpRbReportFatalError(v15, v10);
        v16 = *(_QWORD *)(CycleTime + 16);
        v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        {
          if ( v17[1] == CycleTime )
          {
            v17[1] = v10;
          }
          else
          {
            if ( *v17 != CycleTime )
              RtlpRbReportFatalError(*v17, CycleTime);
            *v17 = v10;
          }
        }
        else
        {
          if ( stru_140E2D2D0.CycleTime != CycleTime )
            RtlpRbReportFatalError(stru_140E2D2D0.CycleTime, CycleTime);
          stru_140E2D2D0.CycleTime = v10;
        }
        v18 = v16 ^ *(_QWORD *)(v10 + 16);
        v19 = (__int64 *)(v10 + 8LL * !v7);
        *(_QWORD *)(v10 + 16) ^= v18 & 0xFFFFFFFFFFFFFFFCuLL;
        v20 = *v19;
        if ( *v19 )
        {
          v21 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v21 != v10 )
            RtlpRbReportFatalError(v21, v10);
          *(_QWORD *)(v20 + 16) = CycleTime | *(_DWORD *)(v20 + 16) & 3;
        }
        *(_QWORD *)(CycleTime + 8LL * v7) = v20;
        *v19 = CycleTime;
        *(_QWORD *)(CycleTime + 16) = v10 | *(_DWORD *)(CycleTime + 16) & 3;
        *(_BYTE *)(v10 + 16) &= 0xFCu;
        *(_BYTE *)(CycleTime + 16) &= 0xFCu;
      }
      else
      {
        v22 = RtlpTreeDoubleRotateNodes(&stru_140E2D2D0.CycleTime, CycleTime, v10, v7);
        *(_BYTE *)(CycleTime + 16) &= 0xFCu;
        v23 = *(_BYTE *)(v10 + 16) & 0xFC;
        *(_BYTE *)(v10 + 16) = v23;
        if ( v12 == (*(_BYTE *)(v22 + 16) & 3) )
        {
          *(_BYTE *)(CycleTime + 16) ^= (v12 ^ *(_BYTE *)(CycleTime + 16) ^ 0xFE) & 3;
        }
        else if ( v12 == ((*(_BYTE *)(v22 + 16) ^ 0xFE) & 3) )
        {
          *(_BYTE *)(v10 + 16) = v12 | v23;
        }
        *(_BYTE *)(v22 + 16) &= 0xFCu;
      }
      goto LABEL_63;
    }
    *(_BYTE *)(CycleTime + 16) &= 0xFCu;
    a1[3] |= 8uLL;
  }
  else
  {
    while ( 1 )
    {
      v10 = CycleTime;
      v13 = CycleTime;
      *(_BYTE *)(CycleTime + 16) ^= (v11 ^ *(_BYTE *)(CycleTime + 16)) & 3;
      CycleTime = *(_QWORD *)(CycleTime + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !CycleTime )
        break;
      v7 = *(_QWORD *)CycleTime != v13;
      v11 = (-1 - 2 * v7) & 3;
      v12 = *(_BYTE *)(CycleTime + 16) & 3;
      if ( v12 )
        goto LABEL_37;
    }
LABEL_63:
    a1[3] |= 8uLL;
  }
LABEL_65:
  if ( v5 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      stru_140E2D2D0.CurrentRunTime = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&stru_140E2D2D0.CurrentRunTime, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      stru_140E2D2D0.CurrentRunTime = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&stru_140E2D2D0.CurrentRunTime, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    __writecr8(v5);
  }
}
