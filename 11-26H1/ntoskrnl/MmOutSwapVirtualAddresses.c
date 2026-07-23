/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x1403FE41C
 * Callers:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403EA9E4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiUnlockWsSwapExclusive @ 0x1403FE2C8 (MiUnlockWsSwapExclusive.c)
 *     MiOutSwapWorkingSet @ 0x1403FE6E0 (MiOutSwapWorkingSet.c)
 *     MiFindBestOutswapPagefile @ 0x1403FE7B0 (MiFindBestOutswapPagefile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockWsSwapExclusive @ 0x1403FE9A4 (MiLockWsSwapExclusive.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1403FECF8 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1403FED50 (MiAllocateWorkingSetSwapSupport.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiValidateMemoryRangeEntries @ 0x140A898A8 (MiValidateMemoryRangeEntries.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140AC3C54 (MiReserveWorkingSetSwapSpace.c)
 *     MiFreeReservationRuns @ 0x140AC3E50 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x140AF673C (EtwTraceWorkingSetSwap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x140B6F150 (MiExtendWorkingSetSwapPagefile.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Blink_high; // rcx
  __int64 v9; // r13
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned int v12; // r15d
  int v13; // ebx
  __int64 WorkingSetSwapSupport; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  _QWORD *v18; // rbx
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  unsigned __int64 *i; // r12
  struct _LIST_ENTRY *Address; // rax
  int Flink; // ecx
  unsigned __int64 v24; // r9
  __int64 v25; // rdi
  unsigned int v27; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int BestOutswapPagefile; // [rsp+34h] [rbp-CCh]
  struct _KTHREAD *v29; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v31; // [rsp+48h] [rbp-B8h]
  _QWORD v32[5]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v33[80]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-38h]
  __int128 v35; // [rsp+D0h] [rbp-30h]
  __int128 v36; // [rsp+F0h] [rbp-10h]
  __int128 v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+10h]

  v31 = a4;
  v30 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink_high = HIWORD(Process[2].ProcessListEntry.Blink);
  v27 = 0;
  v29 = CurrentThread;
  v9 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, &v27);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v36) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v30);
  memset_0(v32, 0, 0x98uLL);
  MiLockWsSwapExclusive(CurrentThread, v9);
  v11 = v30;
  v12 = v27;
  while ( 1 )
  {
    v13 = MiReserveWorkingSetSwapSpace(v9, v33, v10, BestOutswapPagefile, v12, v11);
    if ( v13 >= 0 )
      break;
    if ( v12 < 0x10 )
    {
      BestOutswapPagefile = v12;
      v13 = MiExtendWorkingSetSwapPagefile(v9, v11, v12);
      if ( v13 >= 0 )
        continue;
    }
    v17 = (__int64)v29;
    goto LABEL_18;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v11);
  v17 = (__int64)v29;
  v18 = (_QWORD *)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    v32[0] = WorkingSetSwapSupport;
    v32[3] = v9;
    v32[2] = (char *)Process + 1024;
    LOCK_ADDRESS_SPACE_SHARED(v29, Process, v15, v16);
    LOCK_PAGE_TABLE_COMMITMENT(v17, (__int64)Process, v19, v20);
    for ( i = &a2[2 * a3]; a2 < i; a2 += 2 )
    {
      Address = MiLocateAddress(*a2);
      if ( Address )
      {
        Flink = (int)Address[3].Flink;
        if ( (Flink & 0x1C) == 0 && (Flink & 0x80000) != 0 && (Flink & 0x200000) == 0 && (Flink & 0x60000u) < 0x40000 )
        {
          v24 = a2[1] - 1 + *a2;
          if ( (HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) >= v24 >> 12 )
            MiOutSwapWorkingSet((_DWORD)Process + 1024, (_DWORD)Address, *a2, v24, (__int64)v32);
        }
      }
    }
    UNLOCK_PAGE_TABLE_COMMITMENT(v17, (__int64)Process);
    UNLOCK_ADDRESS_SPACE_SHARED(v17, Process);
    if ( v18[2] < v11 )
    {
      v25 = MiReAllocateWorkingSetSwapSupport(v18);
      if ( v25 )
      {
        ExFreePoolWithTag(v18, 0);
        v18 = (_QWORD *)v25;
      }
    }
    v11 = v18[3];
    *v31 = v18;
    v13 = 0;
  }
  else
  {
    v13 = -1073741670;
  }
LABEL_18:
  MiFreeReservationRuns(v9, v33);
  MiUnlockWsSwapExclusive(v17, v9);
  *((_QWORD *)&v36 + 1) = v34;
  v37 = v35;
  LODWORD(v38) = v13;
  *(_QWORD *)&v36 = v11;
  EtwTraceWorkingSetSwap(Process);
  return (unsigned int)v13;
}
