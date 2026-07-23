/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1404D8420 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14020B514 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020C608 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CE80 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14027EAF0 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140384E10 (PsSetPagePriorityThread.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403E9E98 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmpFpReleaseResource @ 0x1403FEA14 (SmpFpReleaseResource.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 *a1)
{
  __int64 v1; // rbx
  signed int LowPart; // r13d
  struct _KTHREAD *CurrentThread; // rdi
  int v5; // esi
  struct _KTHREAD *v6; // rsi
  NTSTATUS v7; // eax
  unsigned __int64 *v8; // r14
  int v9; // ebp
  KIRQL v10; // al
  __int64 *v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 *v13; // rdi
  unsigned __int64 *v14; // rcx
  unsigned __int64 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  unsigned int v19; // r12d
  __int128 v20; // xmm1
  __int64 v21; // r14
  unsigned int v22; // ebp
  void *v23; // r15
  __int64 v24; // rsi
  BOOL v25; // esi
  unsigned int v26; // ecx
  __int64 v27; // rdx
  struct _EX_RUNDOWN_REF *v28; // rcx
  _SLIST_HEADER *v29; // rcx
  __int64 result; // rax
  __int64 v31; // r11
  __int64 WaitMode; // [rsp+20h] [rbp-88h]
  __int64 Alertable; // [rsp+28h] [rbp-80h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-78h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-70h]
  PVOID Object[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v38; // [rsp+50h] [rbp-58h] BYREF
  __int128 v39; // [rsp+60h] [rbp-48h]
  __int64 v40; // [rsp+70h] [rbp-38h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  LARGE_INTEGER Interval; // [rsp+B0h] [rbp+8h] BYREF

  v1 = *a1;
  LowPart = 0;
  Interval.LowPart = 0;
  _interlockedbittestandset((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 4u);
  CurrentThread = KeGetCurrentThread();
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread);
  v5 = 0;
  if ( (*(_BYTE *)(v1 + 2469) & 4) != 0 )
  {
    if ( !CurrentThread )
      CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)PsGetPagePriorityThread(CurrentThread) )
      PsSetPagePriorityThread(CurrentThread, 0LL);
    v6 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(
                         *(_QWORD *)(stru_140E2ED08.ThreadLock
                                   + 8LL * HIWORD(v6->ApcState.Process[2].ProcessListEntry.Blink)),
                         26LL,
                         1024LL) )
    {
      --v6->SpecialApcDisable;
      LOBYTE(v6[1].Queue) |= 4u;
    }
    else
    {
      LowPart = -1073741670;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
    v5 = LowPart;
    LowPart = LowPart >= 0;
    Interval.LowPart = LowPart;
  }
  *((_DWORD *)a1 + 8) = v5;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v5 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 2560);
    Object[1] = (PVOID)(v1 + 2584);
    do
    {
LABEL_11:
      while ( 1 )
      {
        v7 = KeWaitForMultipleObjects(
               2u,
               Object,
               WaitAny,
               Executive,
               0,
               0,
               (PLARGE_INTEGER)((v1 + 3072) & -(__int64)(*(_QWORD *)(v1 + 3072) != 0LL)),
               0LL);
        if ( v7 < 2 )
          break;
        if ( v7 == 258 )
        {
          SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
          ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
          *(_QWORD *)(v1 + 2352) += *(_QWORD *)(v1 + 2344);
          ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(
            v1 + 2216,
            MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
          SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(v1);
LABEL_13:
          KeResetEvent((PRKEVENT)Object[0]);
LABEL_14:
          v8 = (unsigned __int64 *)(v1 + 2536);
          while ( 1 )
          {
            v9 = 0;
            v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 2496));
            v11 = *(__int64 **)(v1 + 2544);
            v12 = v10;
            if ( v11 != (__int64 *)v8
              && ((v13 = (__int64 *)*v8, *v8 = *(_QWORD *)*v8 & 0xFFFFFFFFFFFFFFF8uLL, v13 == v11)
                ? (*(_QWORD *)(v1 + 2544) = v1 + 2536, *v8 = 0LL)
                : (*v11 = *v11 & 7 | (8 * ((unsigned __int64)*v11 >> 3) - 8)),
                  v13) )
            {
              v9 = 1;
              --*(_DWORD *)(v1 + 2556);
            }
            else
            {
              v11 = *(__int64 **)(v1 + 2512);
              v14 = (unsigned __int64 *)(v1 + 2504);
              if ( v11 != (__int64 *)(v1 + 2504)
                && ((v13 = (__int64 *)*v14, *v14 = *(_QWORD *)*v14 & 0xFFFFFFFFFFFFFFF8uLL, v13 == v11)
                  ? (*(_QWORD *)(v1 + 2512) = v1 + 2504, *v14 = 0LL)
                  : (*v11 = *v11 & 7 | (8 * ((unsigned __int64)*v11 >> 3) - 8)),
                    v13) )
              {
                --*(_DWORD *)(v1 + 2552);
              }
              else
              {
                v11 = *(__int64 **)(v1 + 2528);
                v15 = (unsigned __int64 *)(v1 + 2520);
                if ( v11 == (__int64 *)(v1 + 2520)
                  || ((v13 = (__int64 *)*v15, *v15 = *(_QWORD *)*v15 & 0xFFFFFFFFFFFFFFF8uLL, v13 == v11)
                    ? (*(_QWORD *)(v1 + 2528) = v1 + 2520, *v15 = 0LL)
                    : (*v11 = *v11 & 7 | (8 * ((unsigned __int64)*v11 >> 3) - 8)),
                      !v13) )
                {
                  v13 = 0LL;
                }
                else if ( !--*(_DWORD *)(v1 + 2556)
                       && (*(_BYTE *)v13 & 7) == 6
                       && *(_BYTE *)(v1 + 2470)
                       && KeQueryPriorityThread(*(PKTHREAD *)(v1 + 2632)) > 4 )
                {
                  KeSetActualBasePriorityThread(*(_QWORD *)(v1 + 2632));
                }
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              _InterlockedAnd64((volatile signed __int64 *)(v1 + 2496), 0LL);
            else
              KiReleaseSpinLockInstrumented(v1 + 2496, retaddr);
            if ( KiIrqlFlags )
            {
              LOBYTE(v11) = v12;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
            }
            __writecr8(v12);
            if ( !v13 )
              goto LABEL_11;
            SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
            v18 = *(_BYTE *)(v1 + 2469);
            if ( (v18 & 1) == 0 || v9 )
            {
              if ( (v18 & 2) != 0 && (*(_DWORD *)v13 & 7) == 0 )
              {
                v19 = -1073741058;
LABEL_36:
                SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(v1);
                v20 = *((_OWORD *)v13 + 1);
                v21 = *(_QWORD *)(v1 + 3200);
                v22 = *(_DWORD *)v13 & 7;
                v23 = (void *)v13[4];
                v38 = *(_OWORD *)v13;
                v40 = v13[4];
                v39 = v20;
                if ( v22 >= 4 )
                {
                  v25 = 0;
                  if ( v22 == 5 )
                    ExFreePoolWithTag(v13, 0);
                  else
                    v13[4] = 0LL;
                  goto LABEL_44;
                }
                if ( v22 == 2 )
                {
                  if ( (v13[1] & 0x200) == 0 )
                  {
                    v24 = v21 + 1824;
                    goto LABEL_41;
                  }
                  v29 = (_SLIST_HEADER *)(v21 + 1088);
                  if ( *(_WORD *)(v21 + 1088) >= 0x1000u )
                    goto LABEL_42;
                }
                else
                {
                  if ( v22 )
                  {
                    if ( v22 == 1 )
                    {
                      v24 = v21 + 1704;
LABEL_41:
                      if ( *(void **)(v24 + 112) == v23 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)v24) )
                      {
                        if ( !*(_BYTE *)(v24 + 94) )
                        {
                          _InterlockedExchange64((volatile __int64 *)(v24 + 112), 0LL);
                          KeSetEvent((PRKEVENT)(v24 + 8), 0, 0);
                        }
LABEL_43:
                        v25 = v22 == 1;
LABEL_44:
                        if ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(
                                             &v38,
                                             *(_QWORD *)(v1 + 3200),
                                             v1,
                                             v19)
                          && v25 )
                        {
                          if ( *(void **)(v21 + 1816) == v23
                            && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)(v21 + 1704)) )
                          {
                            if ( !*(_BYTE *)(v21 + 1798) )
                            {
                              _InterlockedExchange64((volatile __int64 *)(v21 + 1816), 0LL);
                              KeSetEvent((PRKEVENT)(v21 + 1712), 0, 0);
                            }
                          }
                          else
                          {
                            ExFreePoolWithTag(v23, 0);
                          }
                        }
                        v26 = *(_DWORD *)(v1 + 2464) & 0x3FF;
                        v27 = *(_QWORD *)(v21 + 8 * ((unsigned __int64)v26 >> 5));
                        if ( v27 )
                          v28 = (struct _EX_RUNDOWN_REF *)(v27 + 40LL * (v26 & 0x1F));
                        else
                          v28 = 0LL;
                        ExReleaseRundownProtection_0(v28 + 1);
                        goto LABEL_14;
                      }
                    }
LABEL_42:
                    ExFreePoolWithTag(v13, 0);
                    goto LABEL_43;
                  }
                  if ( (v13[1] & 0x40000000) == 0 )
                    goto LABEL_42;
                  *(_QWORD *)&v39 = *(_QWORD *)v13[2];
                  v29 = (_SLIST_HEADER *)(*(_QWORD *)(v21 + 1136) + 16LL * (*((_DWORD *)v13 + 3) & 0x3F));
                }
                RtlpInterlockedPushEntrySList(v29, (PSLIST_ENTRY)v13);
                goto LABEL_43;
              }
              v19 = ST_STORE<SM_TRAITS>::StWorkItemProcess(
                      v1,
                      v13,
                      v16,
                      v17,
                      WaitMode,
                      Alertable,
                      Timeout,
                      WaitBlockArray);
              if ( v19 != 259 )
                goto LABEL_36;
            }
            SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(v1);
          }
        }
      }
      if ( !v7 )
        goto LABEL_13;
    }
    while ( v7 != 1 );
    LowPart = Interval.LowPart;
  }
  if ( LowPart )
  {
    MiReturnResident(
      *(_QWORD *)(stru_140E2ED08.ThreadLock
                + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)),
      26LL);
    *(_BYTE *)(v31 + 1448) &= ~4u;
    if ( (*(_WORD *)(v31 + 486))++ == 0xFFFF && *(_QWORD *)(v31 + 152) != v31 + 152 )
      KiCheckForKernelApcDelivery();
  }
  Interval.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 3224);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
