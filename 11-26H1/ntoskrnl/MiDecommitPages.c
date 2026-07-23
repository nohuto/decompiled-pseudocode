/*
 * XREFs of MiDecommitPages @ 0x140361EF0
 * Callers:
 *     MiDeleteKernelStackPages @ 0x14028DF2C (MiDeleteKernelStackPages.c)
 *     MiRemoveMappedPtes @ 0x140341C78 (MiRemoveMappedPtes.c)
 *     MiDecommitPagedPool @ 0x140353D78 (MiDecommitPagedPool.c)
 *     MiMapImageScpCfgPages @ 0x14036C1F0 (MiMapImageScpCfgPages.c)
 *     MmStoreDecommitVirtualMemory @ 0x1403969DC (MmStoreDecommitVirtualMemory.c)
 *     MiDeleteBootRange @ 0x1406E827C (MiDeleteBootRange.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409EE268 (MmStoreAllocateVirtualMemory.c)
 *     MiDecommitRegion @ 0x140A0567C (MiDecommitRegion.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x140B60320 (MmReturnChargesToLockPagedPool.c)
 *     MiFreeBootDriverPages @ 0x140D11120 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiDecommitFreePagesTail @ 0x1402BC510 (MiDecommitFreePagesTail.c)
 *     MiRemoveWsleList @ 0x1402CC5B0 (MiRemoveWsleList.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     EtwTraceShouldYieldProcessor @ 0x140316318 (EtwTraceShouldYieldProcessor.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiDecommitHandleTransitionPte @ 0x14033FE54 (MiDecommitHandleTransitionPte.c)
 *     MiDecommitLargePte @ 0x140340E3C (MiDecommitLargePte.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiDecommitHandleZeroPte @ 0x140362760 (MiDecommitHandleZeroPte.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140362970 (MiDecommitHandlePageFileFormatPte.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140362D00 (MiDecommitHandleProtoFormatPte.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiReducePteUseCount @ 0x1403631B0 (MiReducePteUseCount.c)
 *     MiDecommitLockNewPageTable @ 0x140363378 (MiDecommitLockNewPageTable.c)
 *     MiDecommitInitializePacket @ 0x140363928 (MiDecommitInitializePacket.c)
 *     MiReturnPagedPoolLockCharge @ 0x14042F7F4 (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitPagesTail @ 0x1404438DC (MiDecommitPagesTail.c)
 *     MiDecayPfnFullyInitialized @ 0x140491EA8 (MiDecayPfnFullyInitialized.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiDecommitPages(int a1, int a2, int a3, __int64 a4, __int64 a5, int a6, __int64 a7, __int64 a8)
{
  __int64 SchedulerAssist; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 KernelWaitTime; // rdx
  __int64 *v15; // rbx
  __int64 v16; // rbx
  char v17; // al
  unsigned int v18; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // esi
  _KTHREAD *NextThread; // rax
  __int64 *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // ebx
  _KPROCESS *Process; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edi
  __int64 *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // ebx
  unsigned __int8 v39; // cl
  __int64 *v40; // rax
  __int64 v41; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v43; // rax
  __int64 v44; // r10
  struct _KPRCB *v45; // rcx
  unsigned __int32 v46; // eax
  __int64 v47; // rdx
  unsigned __int32 v48; // ett
  char v49[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *ProcessorFlushList; // [rsp+68h] [rbp-A0h]
  __int64 v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+88h] [rbp-80h]
  unsigned __int64 v53; // [rsp+90h] [rbp-78h]
  unsigned __int64 v54; // [rsp+98h] [rbp-70h]
  unsigned __int64 v55; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-60h]
  int v57; // [rsp+B8h] [rbp-50h]
  unsigned int v58; // [rsp+BCh] [rbp-4Ch]
  PSLIST_ENTRY ListEntry; // [rsp+C0h] [rbp-48h]
  char v60; // [rsp+C8h] [rbp-40h]
  int v61; // [rsp+CCh] [rbp-3Ch]
  __int64 v62; // [rsp+E8h] [rbp-20h]

  memset_0(v49, 0, 0x98uLL);
  MiDecommitInitializePacket((unsigned int)v49, a1, a2, a3, a4, a5, a6, a7, a8);
  if ( v54 <= v55 )
  {
    KernelWaitTime = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      v15 = (__int64 *)v56;
      if ( (v58 & 0xFF00) == 0x1100 || (v56 & 0xFFF) == 0 )
      {
        if ( v57 )
        {
          KernelWaitTime = v56 - 8;
          if ( (v56 - 8 < 0xFFFFF6FB7DBED000uLL || KernelWaitTime > 0xFFFFF6FB7DBEDFFFuLL)
            && (unsigned int)MiReducePteUseCount(0xFFFFF6FB7DBEDFFFuLL) )
          {
            v58 |= 2u;
          }
          v57 = 0;
        }
        v34 = ProcessorFlushList;
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiDecommitFreePagesTail((__int64)v49);
          if ( *((_DWORD *)v34 + 4122) )
          {
            if ( (v61 & 0x100) == 0 )
              MiRemoveWsleList(v51, (__int64)v34);
            *((_DWORD *)v34 + 4122) = 0;
          }
          *((_DWORD *)v34 + 3094) = 0;
          MiReleaseProcessorFlushList(v36, v35, v37);
          ProcessorFlushList = 0LL;
          if ( ListEntry )
          {
            MiDecayPfnFullyInitialized(ListEntry);
            ListEntry = 0LL;
          }
        }
        v38 = v58 >> 8;
        if ( BYTE1(v58) != 17 )
        {
          if ( v53 )
          {
            MiUnlockPageTableInternal(v51, v53);
            v53 = 0LL;
          }
          MiUnlockWorkingSetShared(v51, (unsigned __int8)v38);
          v58 = v58 & 0xFFFF00FF | 0x1100;
        }
        if ( !(unsigned int)MiDecommitLockNewPageTable(v49, KernelWaitTime) )
          break;
        v15 = (__int64 *)v56;
        KernelWaitTime = 0xFFFFF6FB7DBED7F8uLL;
      }
      v16 = *v15;
      if ( v56 >= 0xFFFFF6FB7DBED000uLL
        && v56 <= 0xFFFFF6FB7DBED7F8uLL
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0)
        && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          if ( Process )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v31 = *(_QWORD *)(KernelWaitTime + 8 * ((v56 >> 3) & 0x1FF));
              if ( (v31 & 0x20) != 0 )
                v16 |= 0x20uLL;
              v32 = v16;
              v16 |= 0x42uLL;
              if ( (v31 & 0x42) == 0 )
                v16 = v32;
            }
          }
        }
      }
      if ( v16 )
      {
        if ( (v16 & 1) != 0 )
        {
          if ( (v60 & 8) != 0 )
          {
            MiReturnPagedPoolLockCharge(v49, v16, SchedulerAssist, v13);
          }
          else
          {
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList((_DWORD)ProcessorFlushList, v51, *((_DWORD *)ProcessorFlushList + 3), 0, 1);
            }
            if ( ((v16 & 0x80u) == 0LL || (v58 & 0x1C0000) == 0) && (v62 == 1 || (v58 & 0x1C0000) != 0) )
              MiDecommitAddToList((__int64)v49, v52);
            else
              MiDecommitLargePte((__int64)v49);
          }
        }
        else if ( (v16 & 0x400) != 0 )
        {
          MiDecommitHandleProtoFormatPte(v49, v16);
        }
        else if ( (v16 & 0x800) != 0 )
        {
          if ( !(unsigned int)MiDecommitHandleTransitionPte((__int64)v49, v16) )
            goto LABEL_22;
        }
        else
        {
          MiDecommitHandlePageFileFormatPte(v49, v16);
        }
      }
      else
      {
        MiDecommitHandleZeroPte(v49, KernelWaitTime);
      }
      v54 += 8 * MiPageSizes[HIWORD(v58) & 3];
      SchedulerAssist = v54;
      v13 = v54;
      v17 = 0;
      v52 = (__int64)(v54 << 25) >> 16;
      v18 = HIWORD(v58) & 3;
      if ( v18 <= 1 )
      {
        v17 = 2 - (BYTE2(v58) & 3);
        v44 = 2 - v18;
        do
        {
          v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v44;
        }
        while ( v44 );
      }
      v56 = v13;
      v58 = v58 & 0xFFE3FFFF | ((v17 & 7) << 18);
      if ( (v54 & 0x78) == 0 )
      {
        v39 = *(_DWORD *)(v51 + 184) & 0xF;
        if ( v39 == 5 || v39 <= 4u )
        {
          v40 = (*(_DWORD *)(v51 + 184) & 0xF) == 1 ? &qword_140E37980 : (__int64 *)(v51 + 192);
          v41 = *v40;
          MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
          v43 = MmInternal ? MmInternal[81] : 0LL;
          if ( (*(_DWORD *)((v43 << 6) + v41) & 0x40000000) != 0 )
            goto LABEL_59;
        }
      }
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = 0LL;
      v13 = 0LL;
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        SchedulerAssist = 1LL;
        if ( DpcTimeCount > 7 )
        {
          if ( !CurrentPrcb->QuantumEnd )
            goto LABEL_85;
          v33 = 1;
LABEL_56:
          if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            EtwTraceShouldYieldProcessor(v33, DpcWatchdogCount, DpcTimeCount);
          if ( !v33 )
            goto LABEL_22;
LABEL_59:
          MiDecommitPagesTail(v49, 0LL, SchedulerAssist, v13);
          goto LABEL_22;
        }
      }
      else
      {
        if ( CurrentPrcb->NestingLevel )
        {
          v13 = 1LL;
          if ( DpcWatchdogCount <= 7 )
            goto LABEL_22;
          if ( CurrentPrcb->QuantumEnd )
          {
            v33 = 7;
            goto LABEL_56;
          }
          goto LABEL_85;
        }
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v33 = 2;
          goto LABEL_56;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v33 = 3;
          goto LABEL_56;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v33 = 4;
          goto LABEL_56;
        }
      }
      if ( DpcWatchdogCount > 7 )
      {
        if ( !(_DWORD)SchedulerAssist )
        {
LABEL_115:
          _disable();
          CurrentPrcb->DpcWatchdogCount = 0;
          CurrentPrcb->DpcTimeCount = 0;
          v45 = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)v45->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw((const void *)SchedulerAssist);
            v46 = *(_DWORD *)SchedulerAssist;
            do
            {
              v47 = v46;
              LODWORD(v47) = v46 & 0xFFDFFFFF;
              v48 = v46;
              v46 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v46 & 0xFFDFFFFF, v46);
            }
            while ( v48 != v46 );
            if ( (v46 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v45, v47, SchedulerAssist, v13);
          }
          _enable();
          v33 = 0;
          goto LABEL_56;
        }
LABEL_85:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v33 = 5;
          goto LABEL_56;
        }
        if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
        {
          v33 = 6;
          goto LABEL_56;
        }
        goto LABEL_115;
      }
LABEL_22:
      KernelWaitTime = 0xFFFFF6FB7DBED7F8uLL;
    }
    while ( v54 <= v55 );
  }
  if ( v57 )
  {
    if ( (v56 - 8 < 0xFFFFF6FB7DBED000uLL || v56 - 8 > 0xFFFFF6FB7DBEDFFFuLL)
      && (unsigned int)MiReducePteUseCount(0xFFFFF6FB7DBEDFFFuLL) )
    {
      v58 |= 2u;
    }
    v57 = 0;
  }
  v24 = ProcessorFlushList;
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiDecommitFreePagesTail((__int64)v49);
    if ( *((_DWORD *)v24 + 4122) )
    {
      if ( (v61 & 0x100) == 0 )
        MiRemoveWsleList(v51, (__int64)v24);
      *((_DWORD *)v24 + 4122) = 0;
    }
    *((_DWORD *)v24 + 3094) = 0;
    MiReleaseProcessorFlushList(v26, v25, v27);
    ProcessorFlushList = 0LL;
    if ( ListEntry )
    {
      MiDecayPfnFullyInitialized(ListEntry);
      ListEntry = 0LL;
    }
  }
  v28 = v58 >> 8;
  if ( BYTE1(v58) != 17 )
  {
    if ( v53 )
    {
      MiUnlockPageTableInternal(v51, v53);
      v53 = 0LL;
    }
    MiUnlockWorkingSetShared(v51, (unsigned __int8)v28);
    v58 = v58 & 0xFFFF00FF | 0x1100;
  }
  return (v58 >> 1) & 1;
}
