/*
 * XREFs of ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140280DD0
 * Callers:
 *     SmWorkItemQueue @ 0x14028056C (SmWorkItemQueue.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1403EDE88 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14047F5D0 (-SmAsyncReadQueueWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1404D1B14 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14030FDD0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(__int64 a1, unsigned __int64 a2, char a3)
{
  KSPIN_LOCK *v3; // rdi
  int v4; // r12d
  _DWORD *v5; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // esi
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v15; // rax
  KPRIORITY v16; // r15d
  KPRIORITY PriorityThread; // edi
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  KSPIN_LOCK *v20; // rcx
  unsigned __int64 v21; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (KSPIN_LOCK *)(a1 + 2496);
  v4 = *(_DWORD *)a2 & 7;
  v5 = (_DWORD *)(a1 + 2556);
  if ( v4 == 2 && (*(_BYTE *)(a1 + 2469) & 4) != 0 )
  {
    if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStDirectRead() )
    {
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 3024));
      v20 = (KSPIN_LOCK *)(a1 + 3024);
      *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(a1 + 3016) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(a1 + 3016) = a2 | **(_DWORD **)(a1 + 3016) & 7;
      *(_QWORD *)(a1 + 3016) = a2;
      if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        KxReleaseSpinLock(v20);
        KeSetEvent((PRKEVENT)(a1 + 2984), 0, 0);
      }
      else
      {
        KxReleaseSpinLock(v20);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
      __writecr8(v19);
    }
    return;
  }
  if ( (*(_BYTE *)(a1 + 2469) & 1) != 0 )
    return;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 3224));
  if ( (a3 & 1) != 0 )
  {
    v9 = a1 + 2536;
  }
  else if ( v4 != 2 || (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
  {
    v9 = a1 + 2520;
  }
  else
  {
    v9 = a1 + 2504;
    v5 = (_DWORD *)(a1 + 2552);
  }
  v10 = KeAcquireSpinLockRaiseToDpc(v3);
  v11 = *(_DWORD *)a2 & 7;
  v12 = **(_QWORD **)(v9 + 8);
  if ( (a3 & 2) != 0 )
  {
    *(_QWORD *)a2 = *(_QWORD *)v9 | v11;
    v21 = v12 >> 3;
    *(_QWORD *)v9 = a2;
    if ( *(_QWORD *)(v9 + 8) == v9 )
      *(_QWORD *)(v9 + 8) = a2;
    **(_QWORD **)(v9 + 8) = **(_DWORD **)(v9 + 8) & 7 | (8 * v21 + 8);
  }
  else
  {
    *(_QWORD *)a2 = v11 | ((v12 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
    **(_QWORD **)(v9 + 8) = a2 | **(_DWORD **)(v9 + 8) & 7;
    *(_QWORD *)(v9 + 8) = a2;
  }
  v13 = (*v5)++;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  else
    KiReleaseSpinLockInstrumented(v3, retaddr);
  CurrentThread = KeGetCurrentThread();
  v15 = *(unsigned __int8 *)(a1 + 2470);
  if ( (_BYTE)v15 == 4
    || (v16 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v15),
        v16 < *(_DWORD *)(a1 + 3208)) )
  {
    v16 = *(_DWORD *)(a1 + 3208);
  }
  if ( (a3 & 1) != 0 )
  {
    PriorityThread = 12;
    goto LABEL_26;
  }
  if ( v4 == 2 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    PriorityThread = KeQueryPriorityThread(CurrentThread);
LABEL_26:
    if ( PriorityThread > v16 )
      goto LABEL_16;
  }
  PriorityThread = v16;
LABEL_16:
  if ( PriorityThread > KeQueryPriorityThread(*(PKTHREAD *)(a1 + 2632)) )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 2632), (unsigned int)PriorityThread, v18);
  if ( !v13 )
    KeSetEvent((PRKEVENT)(a1 + 2560), 0, 0);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 3224));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  __writecr8(v10);
}
