/*
 * XREFs of MiCommitVadGetCharges @ 0x140998630
 * Callers:
 *     MiCommitExistingVad @ 0x1409982E0 (MiCommitExistingVad.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14036FF88 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiVadLeafPagesPrecharged @ 0x140470BA4 (MiVadLeafPagesPrecharged.c)
 *     MiVadPageTableChargeLevel @ 0x140471E50 (MiVadPageTableChargeLevel.c)
 *     MiUpdateChargedWsles @ 0x140526724 (MiUpdateChargedWsles.c)
 *     MiGetVadLargePageMinimumIndex @ 0x140711D70 (MiGetVadLargePageMinimumIndex.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesSetBits @ 0x140998A2C (MiCommitPageTablesSetBits.c)
 *     MiMapPageTableCommit @ 0x140998B70 (MiMapPageTableCommit.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x140B3ED98 (MiChargeProcessPhysicalPages.c)
 */

__int64 __fastcall MiCommitVadGetCharges(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rsi
  __int64 Process; // r15
  __int64 v8; // r11
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbp
  int v11; // r8d
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  _KPROCESS *v14; // r12
  BOOL v15; // ebx
  unsigned __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r9
  __int64 result; // rax
  int v20; // r8d
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rbp
  volatile _KAFFINITY_EX *v23; // r11
  __int64 v24; // rbx
  unsigned __int64 i; // r10
  _BYTE *v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rax
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  ULONG **v32; // r12
  __int64 v33; // r9
  unsigned int VadFlags; // eax
  int VadLargePageMinimumIndex; // eax
  __int64 v36; // r8
  int v37; // r8d
  __int64 v38; // rsi
  __int64 v39; // [rsp+50h] [rbp-58h]
  _OWORD v40[5]; // [rsp+58h] [rbp-50h] BYREF
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+B0h] [rbp+8h]
  int LargePfnList; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v44; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 8);
  Process = (__int64)CurrentThread->ApcState.Process;
  v39 = *(_QWORD *)(a1 + 184);
  v44 = *(_QWORD *)(a1 + 200);
  if ( v39 == 1 )
    MiChargeFullProcessCommitment(Process, *(_QWORD *)(a1 + 200));
  *(_QWORD *)(a1 + 64) = MiGetProcessPartition(Process);
  v9 = (__int64)(*(_QWORD *)(a1 + 16) << 25) >> 16;
  v10 = (__int64)(*(_QWORD *)(a1 + 24) << 25) >> 16;
  if ( v11 >= 0 )
  {
    *(_DWORD *)(a1 + 196) |= 1u;
    goto LABEL_5;
  }
  v28 = (_QWORD *)(a1 + 176);
  if ( !v8 )
    v28 = 0LL;
  v29 = v44
      - MiComputePageCommitment(v9 & 0xFFFFFFFFFFFFF000uLL, (__int64)(*(_QWORD *)(a1 + 24) << 25) >> 16, v6, 0LL, v28);
  v44 = v29;
  if ( v39 != 1 && !*(_QWORD *)(a1 + 176) )
    return 3221225496LL;
  if ( !v29 )
    goto LABEL_5;
  if ( v39 == 1 )
  {
    result = MiChargeFullProcessCommitment(Process, v29);
    if ( (int)result < 0 )
      return result;
    goto LABEL_5;
  }
  *(_OWORD *)((char *)v40 + 8) = 0LL;
  if ( !(unsigned int)MiChargeProcessPhysicalPages(Process, v29) )
    return 3221225773LL;
  v32 = *(ULONG ***)(a1 + 168);
  if ( v32 )
  {
    if ( v32 != *(ULONG ***)(a1 + 48) && !PsReferencePartitionSafe(*(_QWORD *)(a1 + 168)) )
    {
      _InterlockedAdd64((volatile signed __int64 *)(Process + 1392), -v33);
      return 3221226656LL;
    }
    *(_QWORD *)(a1 + 64) = *v32;
  }
  else
  {
    result = MiChargeFullProcessCommitment(v31, v30);
    if ( (int)result < 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(Process + 1392), -(__int64)v44);
      return result;
    }
  }
  VadFlags = MiReadVadFlags(v6);
  *(_QWORD *)&v40[0] = v6;
  VadLargePageMinimumIndex = MiGetVadLargePageMinimumIndex(VadFlags);
  LargePfnList = MiCreateLargePfnList(
                   (__int64 *)v40,
                   v9,
                   v44,
                   MiPageSizes[VadLargePageMinimumIndex],
                   a2,
                   a3,
                   v32,
                   0,
                   v36);
  v37 = LargePfnList;
  if ( v32 && v32 != *(ULONG ***)(a1 + 48) )
  {
    PsDereferencePartition((__int64)v32);
    v37 = LargePfnList;
  }
  if ( v37 >= 0 )
  {
LABEL_5:
    if ( !MiVadPureReserve(v6) )
    {
      *(_QWORD *)(a1 + 208) = v13;
      return (unsigned int)v12;
    }
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process, v12, v13);
    memset(v40, 0, 24);
    v14 = KeGetCurrentThread()->ApcState.Process;
    if ( (int)MiMapPageTableCommit(v9, v10) >= 0 )
    {
      ActiveProcessors = v14[2].ActiveProcessors;
      DWORD1(v40[0]) = MiVadPageTableChargeLevel(v6);
      v15 = MiVadLeafPagesPrecharged(v6);
      MiCommitPageTablesSetBits(v40, v9, v10, 0LL);
      v16 = *(_QWORD *)&v40[1];
      v17 = *((_QWORD *)&v40[0] + 1);
      v18 = *(_QWORD *)&v40[1] + *((_QWORD *)&v40[0] + 1);
      if ( !v15
        && !MiVadPureReserve(v6)
        && (*(unsigned int *)(v6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 32)) != 0x7FFFFFFFELL )
      {
        v18 += *(unsigned int *)(v6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 32);
      }
      if ( !v18 )
        goto LABEL_14;
      if ( (int)MiChargeFullProcessCommitment(v14, v18) >= 0 )
      {
        v16 = *(_QWORD *)&v40[1];
        v17 = *((_QWORD *)&v40[0] + 1);
LABEL_14:
        if ( LODWORD(v40[0]) )
        {
          ActiveProcessors[4].StaticBitmap[9] += v17;
          if ( v16 )
            MiUpdateChargedWsles((__int64)&v14[2].ReadyListHead.Blink, v16);
          v20 = DWORD1(v40[0]);
          v21 = v9 >> 21;
          v22 = v10 >> 21;
          v23 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
          if ( SDWORD1(v40[0]) > 0 )
          {
            v27 = DWORD1(v40[0]);
            do
            {
              v21 >>= 9;
              v22 >>= 9;
              --v27;
            }
            while ( v27 );
          }
          if ( SDWORD1(v40[0]) < 3 )
          {
            do
            {
              v24 = 0LL;
              for ( i = v21; i <= v22; ++i )
              {
                if ( !_bittest64((const signed __int64 *)v23[5].StaticBitmap[2 * (unsigned int)(2 - v20) + 24], i) )
                {
                  ++v24;
                  v26 = (_BYTE *)(v23[5].StaticBitmap[2 * (unsigned int)(2 - v20) + 24] + (i >> 3));
                  *v26 |= 1 << (i & 7);
                }
              }
              v21 >>= 9;
              ++v20;
              v22 >>= 9;
            }
            while ( v20 < 3 );
          }
        }
        *(_DWORD *)(a1 + 196) |= 2u;
        result = 0LL;
        *(_QWORD *)(a1 + 208) = v44;
        return result;
      }
    }
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    if ( v44 )
    {
      if ( v39 == 1 )
      {
        MiReturnFullProcessCommitment(Process, v44);
      }
      else
      {
        v38 = *(_QWORD *)(a1 + 64);
        MiFreeLargeZeroPages(v38, a1 + 72, 1);
        MiReturnResident(v38, v44);
        if ( *(_QWORD *)(a1 + 168) )
        {
          MiReturnCommit(v38, v44, 0);
          MiReturnCrossPartitionCharges(v38, 2u, 1, v44);
        }
        else
        {
          MiReturnFullProcessCommitment(Process, v44);
        }
        _InterlockedAdd64((volatile signed __int64 *)(Process + 1392), -(__int64)v44);
      }
    }
    return 3221225773LL;
  }
  if ( !v32 )
  {
    MiReturnFullProcessCommitment(Process, v44);
    v37 = LargePfnList;
  }
  _InterlockedAdd64((volatile signed __int64 *)(Process + 1392), -(__int64)v44);
  return (unsigned int)v37;
}
