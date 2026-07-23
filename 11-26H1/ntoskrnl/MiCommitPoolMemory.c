/*
 * XREFs of MiCommitPoolMemory @ 0x140366880
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 *     MmAllocateSecurePoolMemory @ 0x140700968 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     MiCreatePoolPageTables @ 0x1402A4644 (MiCreatePoolPageTables.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 *     MiLockPoolCommitWs @ 0x140366098 (MiLockPoolCommitWs.c)
 *     MiUnlockPoolCommitWs @ 0x140366EB0 (MiUnlockPoolCommitWs.c)
 *     MiFillPoolCommitPageTable @ 0x140367040 (MiFillPoolCommitPageTable.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLinkPoolCommitChain @ 0x140367300 (MiLinkPoolCommitChain.c)
 *     MiReturnExcessPoolCommit @ 0x140367634 (MiReturnExcessPoolCommit.c)
 *     MiShouldTrimUnusedSegments @ 0x14046E4F8 (MiShouldTrimUnusedSegments.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140501C70 (MiLogPerfMemoryRangeEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCommitPoolMemory(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // ebp
  unsigned __int8 *v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int16 v13; // dx
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  void *i; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  ULONG_PTR v20; // rdi
  int v21; // eax
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  _QWORD *v24; // r8
  unsigned __int8 v25; // al
  __int64 *v26; // rax
  __int64 v27; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v29; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 valid; // rax
  int PoolPageTables; // edi
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // [rsp+28h] [rbp-60h]
  unsigned __int64 v41; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-50h]
  _BYTE v43[20]; // [rsp+40h] [rbp-48h]
  int v44; // [rsp+54h] [rbp-34h]
  _QWORD *v45; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 72);
  v3 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v5 = *(_QWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 103) = CurrentIrql;
  MiLockWorkingSetSharedAtDpc(v5);
  v7 = 0;
  while ( 1 )
  {
    v8 = &stru_140E2DAB0.PriorityFloorCounts[4];
    v9 = 0xFFFFF6FB7DBEDFFFuLL;
    if ( v3 > *(_QWORD *)(a1 + 80) )
      break;
    v18 = *(_QWORD *)(a1 + 88);
    if ( v18 )
    {
      if ( v18 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v1 + 184) & 0xF) != 0
          || v18 < 0xFFFFF6FB7DBED000uLL
          || v18 > 0xFFFFF6FB7DBEDFFFuLL
          || (v34 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
        {
          if ( (*(_DWORD *)(v1 + 184) & 0xF) != 0 && v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v37 = 2 * (unsigned int)((__int64)(v18 + 0x90482413000LL) >> 3);
            _InterlockedAnd(
              (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4 * (v37 >> 5) + 4],
              ~(3 << v37));
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v18, 0xCFFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v34 + 4 * ((v18 >> 3) & 0x1FF)));
        }
        goto LABEL_26;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = *(_DWORD *)(v1 + 184) & 0xF;
      if ( !v32 )
      {
        v33 = 2LL;
        goto LABEL_47;
      }
      if ( v32 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
      }
      else
      {
        v33 = 3LL;
        if ( v32 == 5 )
          v33 = 0LL;
LABEL_47:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v33]);
      }
LABEL_26:
      *(_QWORD *)(a1 + 88) = 0LL;
    }
    if ( *(_BYTE *)(a1 + 103) < 2u )
    {
      if ( ((v25 = *(_DWORD *)(v1 + 184) & 0xF, v25 == 5) || v25 <= 4u)
        && ((*(_DWORD *)(v1 + 184) & 0xF) != 1 ? (v26 = (__int64 *)(v1 + 192)) : (v26 = &qword_140E37980),
            (v27 = *v26, (MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal) == 0LL)
          ? (v29 = 0LL)
          : (v29 = MmInternal[81]),
            (*(_DWORD *)((v29 << 6) + v27) & 0x40000000) != 0)
        || KeShouldYieldProcessor() )
      {
        MiUnlockPoolCommitWs(a1, v27, v9, v8);
        MiLockPoolCommitWs(a1);
      }
    }
    v45 = 0LL;
    v19 = *(_QWORD *)(a1 + 72);
    v20 = (__int64)(v3 << 25) >> 16;
    v21 = MiFastLockLeafPageTable(v19, v20, 0);
    v22 = v21;
    if ( v21
      && (v41 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          *(_QWORD *)v43 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          *(_QWORD *)&v43[8] = ((*(_QWORD *)v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          v23 = *(&v41 + v21),
          v24 = (_QWORD *)*(&v40 + v21),
          v45 = v24,
          v23) )
    {
      if ( v21 == 1 )
        goto LABEL_31;
      if ( v21 != 2 )
        goto LABEL_66;
    }
    else
    {
      valid = MiLockLowestValidPageTableEx(v19, v3, (unsigned __int64 *)&v45, 0);
      v24 = v45;
      v23 = valid;
      if ( v45 == (_QWORD *)v3 )
      {
        v22 = 1LL;
LABEL_31:
        if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
          KeBugCheckEx(0x1Au, 0x5301uLL, v20, 0LL, 0LL);
        goto LABEL_61;
      }
      if ( v45 != (_QWORD *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
        goto LABEL_65;
      v22 = 2LL;
    }
    if ( (*v24 & 1) != 0 )
    {
      if ( (*v24 & 0x80u) != 0LL )
        KeBugCheckEx(0x1Au, 0x5302uLL, v20, 0LL, 0LL);
      if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
        KeBugCheckEx(0x1Au, 0x5303uLL, v20, 0LL, 0LL);
    }
    else if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
    {
      goto LABEL_61;
    }
LABEL_65:
    v22 = 0LL;
    if ( v23 )
    {
LABEL_66:
      MiUnlockPageTableInternal(v19, v23);
      *(_QWORD *)(a1 + 88) = 0LL;
      goto LABEL_67;
    }
LABEL_61:
    *(_QWORD *)(a1 + 88) = v23;
    if ( (_DWORD)v22 )
    {
      MiLinkPoolCommitChain(a1, v3);
      v3 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    else
    {
LABEL_67:
      MiUnlockPoolCommitWs(a1, v23, v24, v22);
      PoolPageTables = MiCreatePoolPageTables(a1, v3);
      MiLockPoolCommitWs(a1);
      if ( !PoolPageTables )
      {
        *(_WORD *)(a1 + 100) |= 1u;
        break;
      }
    }
  }
  MiFillPoolCommitPageTable(a1, v6, v9, v8);
  MiUnlockPoolCommitWs(a1, v10, v11, v12);
  v13 = *(_WORD *)(a1 + 100);
  if ( (v13 & 1) != 0 )
  {
    if ( (v13 & 2) == 0 )
    {
      v38 = *(_QWORD *)a1;
      v39 = (*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v3 != v39 - 0x98000000000LL )
      {
        v44 = 0;
        *(_OWORD *)&v43[4] = 0LL;
        v42 = (__int64)(v3 - v39 + 0x98000000000LL) >> 3;
        v43[4] = (v13 & 4) != 0;
        if ( (v13 & 0x100) != 0 )
          v43[4] = ((v13 & 4) != 0) | 2;
        *(_DWORD *)v43 = 0x4000;
        v41 = v38;
        MiClearNonPagedPtes((__int64 *)&v41);
      }
    }
    v7 = -1073741670;
  }
  else
  {
    if ( (v13 & 0x104) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*(_QWORD *)a1, 0LL, 11LL, *(_QWORD *)(a1 + 8));
    v14 = *(_DWORD *)(a1 + 64);
    v15 = *(_QWORD *)(a1 + 48);
    switch ( v14 )
    {
      case 4:
        v16 = v15 + _InterlockedExchangeAdd64(&qword_140E2C708, v15);
        if ( (v16 >= *(_QWORD *)&MiState || *(_QWORD *)&MiState - v16 < 0x300)
          && qword_140E3D880 >= (unsigned __int64)qword_140E3C1A0 )
        {
          if ( (unsigned int)MiShouldTrimUnusedSegments(&MiSystemPartition) )
          {
            for ( i = PsGetNextPartition(0LL); i; i = PsGetNextPartition(i) )
            {
              if ( *(_QWORD *)(*(_QWORD *)i + 2440LL) )
                KeSetEvent((PRKEVENT)(*(_QWORD *)i + 2168LL), 0, 0);
            }
          }
        }
        break;
      case 5:
        _InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E366D8.ApcState.Process, v15);
        break;
      case 14:
        _InterlockedExchangeAdd64(&qword_140E2C710, v15);
        break;
      default:
        _InterlockedExchangeAdd64(0LL, v15);
        break;
    }
  }
  MiReturnExcessPoolCommit(a1);
  return v7;
}
