/*
 * XREFs of MmOutSwapWorkingSet @ 0x1404BC104
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140ADB89C (PspChangeProcessExecutionState.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiGetWorkingSetSwapSupport @ 0x14036A16C (MiGetWorkingSetSwapSupport.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiVadSupportsPrivateCommit @ 0x1403C5E14 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1403C5E74 (MiVadMapsLargeImage.c)
 *     MiUnlockWsSwapExclusive @ 0x1403FE2C8 (MiUnlockWsSwapExclusive.c)
 *     MiOutSwapWorkingSet @ 0x1403FE6E0 (MiOutSwapWorkingSet.c)
 *     MiFindBestOutswapPagefile @ 0x1403FE7B0 (MiFindBestOutswapPagefile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockWsSwapExclusive @ 0x1403FE9A4 (MiLockWsSwapExclusive.c)
 *     MiGetKernelStackSwapSupport @ 0x1403FEB9C (MiGetKernelStackSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1403FECF8 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1403FED50 (MiAllocateWorkingSetSwapSupport.c)
 *     MiGetFirstVad @ 0x1404B1910 (MiGetFirstVad.c)
 *     SmStoreExistsForProcess @ 0x14050D5B8 (SmStoreExistsForProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VmCheckLargePageInswap @ 0x140821D78 (VmCheckLargePageInswap.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140AC3C54 (MiReserveWorkingSetSwapSpace.c)
 *     MiFreeWorkingSetSwapContext @ 0x140AC3DE4 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x140AC3E50 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x140AF673C (EtwTraceWorkingSetSwap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x140B6F150 (MiExtendWorkingSetSwapPagefile.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _LIST_ENTRY **p_Blink; // r14
  unsigned int v6; // ebx
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // eax
  int v10; // edi
  __int64 PoolMm; // rsi
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  volatile LONG *v14; // r15
  __int64 WorkingSetSwapSupport; // rax
  KIRQL v16; // dl
  _QWORD *v17; // rax
  volatile LONG *v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // r15d
  _QWORD *v21; // rax
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  unsigned __int64 v24; // r15
  _QWORD *v25; // rax
  bool v26; // zf
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rdi
  __int64 v30; // r8
  struct _KLOCK_ENTRIES *v31; // r9
  __int64 i; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rdi
  volatile LONG *v38; // r15
  KIRQL v39; // dl
  __int64 *v40; // r14
  _QWORD *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v45; // [rsp+38h] [rbp-D0h]
  unsigned int v46; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int BestOutswapPagefile; // [rsp+44h] [rbp-C4h]
  __int64 v48; // [rsp+48h] [rbp-C0h]
  struct _KTHREAD *v49; // [rsp+50h] [rbp-B8h]
  _QWORD v50[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v51; // [rsp+78h] [rbp-90h]
  _BYTE v52[80]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53; // [rsp+D0h] [rbp-38h]
  __int128 v54; // [rsp+D8h] [rbp-30h]
  int v55; // [rsp+E8h] [rbp-20h]
  __int128 v56; // [rsp+F8h] [rbp-10h]
  __int128 v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+118h] [rbp+10h]

  LODWORD(v48) = a2;
  v46 = 0;
  v56 = 0LL;
  v58 = 0LL;
  v57 = 0LL;
  CurrentThread = KeGetCurrentThread();
  p_Blink = &Process[2].ReadyListHead.Blink;
  v49 = CurrentThread;
  v6 = 0;
  v7 = 0LL;
  memset_0(v50, 0, 0x98uLL);
  v8 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)p_Blink + 87));
  v9 = v56;
  if ( a2 )
    v9 = 1;
  v45 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)p_Blink + 87));
  LODWORD(v56) = v9;
  v50[3] = v8;
  if ( (unsigned int)SmStoreExistsForProcess(Process) )
  {
    LODWORD(v56) = v56 | 4;
    v6 = 2;
    v51 = -1;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v8, &v46);
  if ( BestOutswapPagefile != 16 || v6 == 2 )
  {
    PoolMm = ExAllocatePoolMm(
               64LL,
               0x50uLL,
               1129540941,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( PoolMm )
    {
      v6 |= 1u;
      MiLockWsSwapExclusive((__int64)CurrentThread, v8, v12, v13);
      v14 = (volatile LONG *)(v8 + 1288);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 1288));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)p_Blink);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v10 = -1073740682;
        }
        else
        {
          v10 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v10 = -1073741558;
        }
        if ( v16 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v14);
        else
          ExReleaseSpinLockExclusive(v14, v16);
      }
      else
      {
        v17 = &unk_140E37998;
        if ( ((_DWORD)p_Blink[23] & 0xF) != 1 )
          v17 = p_Blink + 27;
        *v17 = 1LL;
        v18 = (volatile LONG *)(v8 + 1288);
        if ( v16 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v18);
        else
          ExReleaseSpinLockExclusive(v18, v16);
        v20 = v46;
        while ( 1 )
        {
          v7 = (unsigned __int64)p_Blink[18];
          if ( !v7 )
          {
            v10 = -1073741779;
            goto LABEL_60;
          }
          if ( v51 == -1 )
            break;
          v10 = MiReserveWorkingSetSwapSpace(v8, v52, v19, BestOutswapPagefile, v20, p_Blink[18]);
          if ( v10 >= 0 )
            break;
          if ( v20 >= 0x10 )
            goto LABEL_60;
          BestOutswapPagefile = v20;
          v10 = MiExtendWorkingSetSwapPagefile(v45, v7, v20);
          if ( v10 < 0 )
            goto LABEL_60;
          v8 = v45;
        }
        v21 = MiAllocateWorkingSetSwapSupport(v7);
        *(_QWORD *)PoolMm = v21;
        if ( !v21 )
          goto LABEL_31;
        if ( v51 != -1 )
          *((_DWORD *)v21 + 8) |= 1u;
        v24 = 0LL;
        if ( !(_DWORD)v48 )
          goto LABEL_39;
        v24 = (char *)p_Blink[19] - (char *)p_Blink[20];
        if ( v24 > (unsigned __int64)p_Blink[19] )
          v24 = (unsigned __int64)p_Blink[19];
        if ( v24 && (v25 = MiAllocateWorkingSetSwapSupport(v24), (*(_QWORD *)(PoolMm + 8) = v25) == 0LL) )
        {
LABEL_31:
          v10 = -1073741670;
        }
        else
        {
LABEL_39:
          v26 = Process[3].ProcessListEntry.Blink == 0LL;
          v50[0] = *(_QWORD *)PoolMm;
          v50[1] = *(_QWORD *)(PoolMm + 8);
          v50[2] = p_Blink;
          if ( !v26 )
          {
            v27 = VmCheckLargePageInswap(Process);
            v28 = v55;
            if ( v27 )
              v28 = 1;
            v55 = v28;
          }
          v29 = (__int64)v49;
          LOCK_ADDRESS_SPACE_SHARED((__int64)v49, (__int64)Process, v22, v23);
          if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(v29, (__int64)Process);
            v10 = -1073741558;
          }
          else
          {
            LOCK_PAGE_TABLE_COMMITMENT(v29, (__int64)Process, v30, v31);
            for ( i = (__int64)MiGetFirstVad((__int64)Process); ; i = MiGetNextVad(v34) )
            {
              v34 = i;
              if ( !i )
                break;
              if ( !(unsigned int)MiVadMapsLargeImage(i) && (unsigned int)MiVadSupportsPrivateCommit(v33) )
                MiOutSwapWorkingSet(
                  (__int64)p_Blink,
                  v34,
                  (*(unsigned int *)(v34 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 32) << 32)) << 12,
                  ((*(unsigned int *)(v34 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 33) << 32)) << 12) | 0xFFF,
                  (__int64)v50);
            }
            UNLOCK_PAGE_TABLE_COMMITMENT((__int64)v49, (__int64)Process);
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v49, (__int64)Process);
            if ( *(_QWORD *)(*(_QWORD *)PoolMm + 16LL) < v7 )
            {
              v35 = MiReAllocateWorkingSetSwapSupport(*(_QWORD *)PoolMm);
              if ( v35 )
              {
                ExFreePoolWithTag(*(PVOID *)PoolMm, 0);
                *(_QWORD *)PoolMm = v35;
              }
            }
            v36 = *(_QWORD *)(PoolMm + 8);
            if ( v36 )
            {
              if ( *(_QWORD *)(v36 + 16) < v24 )
              {
                v37 = MiReAllocateWorkingSetSwapSupport(v36);
                if ( v37 )
                {
                  ExFreePoolWithTag(*(PVOID *)(PoolMm + 8), 0);
                  *(_QWORD *)(PoolMm + 8) = v37;
                }
              }
            }
            v7 = *(_QWORD *)(*(_QWORD *)PoolMm + 24LL);
            MiGetKernelStackSwapSupport(PoolMm, (__int64)Process);
            v6 |= 4u;
            v10 = 0;
          }
        }
LABEL_60:
        v38 = (volatile LONG *)(v45 + 1288);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v45 + 1288));
        if ( MiGetWorkingSetSwapSupport((__int64)p_Blink) == 1 )
        {
          if ( v6 < 4 )
          {
            if ( ((_DWORD)p_Blink[23] & 0xF) == 1 )
              v41 = &unk_140E37998;
            else
              v41 = p_Blink + 27;
            *v41 = 0LL;
          }
          else
          {
            if ( ((_DWORD)p_Blink[23] & 0xF) == 1 )
              v40 = (__int64 *)&unk_140E37998;
            else
              v40 = (__int64 *)(p_Blink + 27);
            *v40 = PoolMm;
            PoolMm = 0LL;
            v10 = 0;
          }
        }
        else
        {
          v10 = -1073741558;
        }
        if ( v39 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v38);
        else
          ExReleaseSpinLockExclusive(v38, v39);
        MiFreeReservationRuns(v45, v52);
        if ( !PoolMm )
        {
          CurrentThread = v49;
          goto LABEL_77;
        }
      }
      v42 = PoolMm;
      v43 = v45;
      MiFreeWorkingSetSwapContext(v45, v42);
      CurrentThread = v49;
      goto LABEL_78;
    }
    v10 = -1073741670;
  }
  else
  {
    v10 = -1073741497;
  }
LABEL_77:
  v43 = v45;
LABEL_78:
  if ( (v6 & 1) != 0 )
    MiUnlockWsSwapExclusive((__int64)CurrentThread, v43);
  *((_QWORD *)&v56 + 1) = v53;
  v57 = v54;
  LODWORD(v58) = v10;
  *(_QWORD *)&v56 = v7;
  EtwTraceWorkingSetSwap(Process);
  return (unsigned int)v10;
}
