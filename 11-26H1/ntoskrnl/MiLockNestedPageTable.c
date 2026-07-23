/*
 * XREFs of MiLockNestedPageTable @ 0x14029E130
 * Callers:
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiEvictPageTableLock @ 0x14029DEE8 (MiEvictPageTableLock.c)
 *     MiDeleteEmptyPageTableWorker @ 0x14029E7D8 (MiDeleteEmptyPageTableWorker.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiResolvePageTablePage @ 0x1402CEAB0 (MiResolvePageTablePage.c)
 *     MiClearPteAccessed @ 0x1402E1A30 (MiClearPteAccessed.c)
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiGetNextPageTablePte @ 0x14032A730 (MiGetNextPageTablePte.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiCreateSystemPageTable @ 0x14033B880 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MiValidWriteFaultProcess @ 0x1403A9440 (MiValidWriteFaultProcess.c)
 *     MiMakeSystemLeavesNonZero @ 0x1405129C0 (MiMakeSystemLeavesNonZero.c)
 *     MiDeleteBootRange @ 0x1406E827C (MiDeleteBootRange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall MiLockNestedPageTable(signed __int64 a1, unsigned __int64 a2)
{
  signed __int64 Process; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned int v6; // edi
  signed __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // r8
  char v9; // al
  volatile __int64 *v10; // rdx
  unsigned int v11; // ebx
  _KSPIN_LOCK_QUEUE *volatile *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  signed __int64 v15; // rax
  unsigned __int64 v16; // rcx
  char v17; // si
  unsigned __int32 v18; // edx
  volatile signed __int32 *v19; // rdi
  int v20; // ebx
  bool v21; // zf
  signed __int32 v22; // eax
  int v23; // ecx
  signed __int32 v24; // eax
  int v25; // [rsp+48h] [rbp+10h] BYREF

  Process = a1;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v9 )
    {
      if ( v9 == 7 )
      {
        v11 = 1;
      }
      else
      {
        v11 = 3;
        if ( v9 == 5 )
          v11 = 0;
      }
      v10 = (volatile __int64 *)(&MiState + 2 * v11 + 2278);
    }
    else
    {
      v10 = (volatile __int64 *)(a1 + 176);
      v11 = 2;
    }
    v12 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v11 + v11;
    *((_QWORD *)v12 + 1) = v10;
    *v12 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64(v10, (__int64)v12) )
        KxWaitForLockOwnerShip(v12);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v12, v10);
    }
  }
  else
  {
    v4 = 0xFFFFF6FB7DBED000uLL;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
      || a2 < 0xFFFFF6FB7DBED000uLL
      || a2 > 0xFFFFF6FB7DBEDFFFuLL
      || (v13 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(Process + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v25 = 0;
        v16 = (unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5;
        v17 = (2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F;
        v18 = *(&MiState + v16 + 1467);
        v19 = (volatile signed __int32 *)(&MiState + v16 + 1467);
        v20 = 2 << v17;
        do
        {
          while ( ((v18 >> v17) & 1) != 0 )
          {
            if ( ((v18 >> v17) & 2) != 0 )
            {
              do
              {
                KeYieldProcessorEx(&v25);
                v18 = *v19;
              }
              while ( (((unsigned __int32)*v19 >> v17) & 1) != 0 );
            }
            else
            {
              v23 = v18 | v20;
              v24 = _InterlockedCompareExchange(v19, v18 | v20, v18);
              v21 = v18 == v24;
              v18 = v24;
              if ( v21 )
                v18 = v23;
            }
          }
          v22 = _InterlockedCompareExchange(v19, ~(2 << v17) & (v18 | (1 << v17)), v18);
          v21 = v18 == v22;
          v18 = v22;
        }
        while ( !v21 );
      }
      else
      {
        v5 = *(_QWORD *)a2;
        v6 = 0;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL
          && a2 <= 0xFFFFF6FB7DBED7F8uLL
          && (v5 & 1) != 0
          && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0)
          && (MiFlags & 0x1800000) != 0 )
        {
          Process = (signed __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 352) != 1 )
          {
            if ( Process )
            {
              v4 = *(_QWORD *)(Process + 1288);
              if ( v4 )
              {
                v14 = *(_QWORD *)(v4 + 8 * ((a2 >> 3) & 0x1FF));
                if ( (v14 & 0x20) != 0 )
                  v5 |= 0x20uLL;
                Process = v5;
                v5 |= 0x42uLL;
                if ( (v14 & 0x42) == 0 )
                  v5 = Process;
              }
            }
          }
        }
        while ( (v5 & 1) != 0 )
        {
          if ( (v5 & 0x1000000000000000LL) != 0 )
          {
            if ( ((v5 >> 60) & 2) != 0 )
            {
              do
              {
                if ( (++v6 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5, Process, v4) )
                {
                  HvlNotifyLongSpinWait(v6);
                }
                else
                {
                  _mm_pause();
                }
                v5 = *(_QWORD *)a2;
              }
              while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
            }
            else
            {
              Process = v5 | 0x2000000000000000LL;
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v15 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, Process, v5);
              if ( v5 == v15 )
                v5 |= 0x2000000000000000uLL;
              else
                v5 = v15;
            }
          }
          else
          {
            Process = v5 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
            if ( (MiFlags & 0x8000000) != 0 )
              _mm_lfence();
            v7 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, Process, v5);
            if ( v5 == v7 )
              return;
            v5 = v7;
          }
        }
      }
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v13 + 4 * ((a2 >> 3) & 0x1FF)));
    }
  }
}
