/*
 * XREFs of ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140441060
 * Callers:
 *     MiStoreEvictPageFile @ 0x140404A30 (MiStoreEvictPageFile.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x14027DA80 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x14027FB90 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140280D40 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140640858 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r15
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // ecx
  char *v10; // r10
  __int64 v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  bool v16; // zf
  unsigned int v17; // r14d
  int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // r13d
  unsigned int v21; // ebx
  __int64 v22; // r14
  unsigned __int8 v23; // si
  unsigned int v24; // r15d
  _BYTE *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // r13
  __int64 v30; // rbx
  int v31; // r15d
  __int64 Pool3; // rdi
  struct _KTHREAD *v33; // rdi
  KIRQL v34; // al
  _QWORD *v35; // rdx
  unsigned __int64 i; // rsi
  __int64 v37; // rdx
  KIRQL v38; // al
  _QWORD *v39; // rdx
  unsigned __int64 j; // rsi
  __int64 v41; // r15
  unsigned int v42; // esi
  unsigned int *v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rsi
  KIRQL v48; // al
  _QWORD *v49; // rdx
  unsigned __int64 v50; // rsi
  __int64 v51; // r8
  int v52; // r15d
  KIRQL v54; // [rsp+30h] [rbp-D0h]
  unsigned int v55; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v56; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v57; // [rsp+3Ch] [rbp-C4h]
  __int64 v58; // [rsp+40h] [rbp-C0h]
  unsigned int updated; // [rsp+48h] [rbp-B8h]
  __int64 v60; // [rsp+50h] [rbp-B0h]
  unsigned int *v61; // [rsp+58h] [rbp-A8h]
  __int128 v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  const void *v64[3]; // [rsp+80h] [rbp-80h] BYREF
  int v65; // [rsp+98h] [rbp-68h]
  unsigned int v66; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-60h]
  _OWORD v68[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 retaddr; // [rsp+178h] [rbp+78h]

  v58 = a1;
  v61 = a2;
  v56 = 0;
  v63 = 0LL;
  v4 = a1;
  v55 = a3;
  v64[0] = v68;
  v64[1] = 0LL;
  v62 = 0LL;
  v64[2] = 0LL;
  memset(v68, 0, sizeof(v68));
  v67 = 0LL;
  v65 = 0;
  v66 = 8;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 280), (__int64)a2, a3, a4);
  v7 = *a2;
  v8 = *(_QWORD *)(v4 + 288);
  v65 = 0;
  if ( !v8 || (v9 = *(unsigned __int8 *)(v8 + 2), v66 >= v9) || (unsigned int)SmArrayGrow(v9, v6, &v66, v64) )
  {
    v10 = (char *)v64[0];
    v11 = *(_QWORD *)(v4 + 288);
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = -1;
        v13 = (unsigned __int16)*(_DWORD *)v11;
        if ( HIBYTE(*(_DWORD *)v11) )
          break;
        if ( (unsigned __int16)*(_DWORD *)v11 )
        {
          do
          {
            if ( *(_DWORD *)(v11 + 16LL * (((unsigned int)v13 + v12) >> 1) + 16) <= v7 )
              v12 = ((unsigned int)v13 + v12) >> 1;
            else
              LODWORD(v13) = ((unsigned int)v13 + v12) >> 1;
          }
          while ( v12 + 1 != (_DWORD)v13 );
        }
        *(_QWORD *)v10 = v11;
        *((_QWORD *)v10 + 1) = v11 + 16 * ((unsigned int)v13 + 1LL);
        v10 += 16;
        if ( (_DWORD)v13 )
          v11 = *(_QWORD *)(16LL * (unsigned int)(v13 - 1) + v11 + 24);
        else
          v11 = *(_QWORD *)(v11 + 8);
      }
      if ( (unsigned __int16)*(_DWORD *)v11 )
      {
        do
        {
          if ( *(_DWORD *)(v11 + 8LL * (((unsigned int)v13 + v12) >> 1) + 16) < v7 )
            v12 = ((unsigned int)v13 + v12) >> 1;
          else
            v13 = ((unsigned int)v13 + v12) >> 1;
        }
        while ( v12 + 1 != (_DWORD)v13 );
      }
      *(_QWORD *)v10 = v11;
      *((_QWORD *)v10 + 1) = v11 + 8 * (v13 + 2);
      v65 = ((v10 - (char *)v64[0]) >> 4) + 1;
    }
  }
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(v4, a2, (int *)&v55, (int *)&v56, (__int64)v64);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 280), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 280));
  KeAbPostRelease(v4 + 280);
  CurrentThread = KeGetCurrentThread();
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)CurrentThread, v14);
  v17 = v56;
  v57 = v56;
  if ( v56 > v55 )
  {
    v18 = 0;
    v19 = *(_QWORD *)(v4 + 2208);
    v21 = v55 + *a2;
    v56 -= v55;
    v20 = v56;
    v22 = *(_QWORD *)(*(_QWORD *)v19 + 8LL * *(unsigned int *)(*(_QWORD *)v19 + 1300LL) + 22304);
    v54 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v22 + 200));
    v23 = v54;
    v24 = v20;
    if ( v20 )
    {
      v25 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 80) + 16LL) + ((unsigned __int64)v21 >> 3));
      v26 = v21 & 7;
      if ( (unsigned int)v26 + v20 > 8 )
      {
        if ( (v21 & 7) != 0 )
        {
          v24 = v26 + v20 - 8;
          *v25++ &= byte_1400327C0[v26];
        }
        if ( v24 > 8 )
        {
          RtlSetVolatileMemory(v25, 0, (unsigned __int64)v24 >> 3);
          v25 += (unsigned __int64)v24 >> 3;
          v18 = 0;
          v24 &= 7u;
        }
        if ( v24 )
          *v25 &= byte_140018470[v24];
        v20 = v56;
      }
      else
      {
        *v25 &= ~(byte_1400327C0[v20] << v26);
      }
      v23 = v54;
    }
    if ( *(_DWORD *)(v22 + 88) > v21 )
      *(_DWORD *)(v22 + 88) = v21;
    if ( !*(_DWORD *)(v22 + 12) && (*(_BYTE *)(v22 + 174) & 1) != 0 )
      v18 = 1;
    *(_DWORD *)(v22 + 12) += v20;
    if ( v23 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v22 + 200) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v22 + 200), retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v22 + 200) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v22 + 200), retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
      __writecr8(v23);
    }
    if ( v18 )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(v22 + 224) + 1008LL), 0, 0);
    v4 = v58;
    v17 = v57;
  }
  if ( updated == 1024 )
    return v17;
  v27 = *(_QWORD *)(v4 + 8 * ((unsigned __int64)(updated & 0x3FF) >> 5));
  if ( v27 )
    v28 = (__int64 *)(v27 + 40LL * (updated & 0x1F));
  else
    v28 = 0LL;
  v29 = *v28;
  v30 = v58 + 1704;
  v31 = *(_DWORD *)(v4 + 2120) & 1;
  Pool3 = ExAllocatePool3(
            64LL,
            *(unsigned __int16 *)(v58 + 1800),
            810708339LL,
            &stru_140E27C48.Header.WaitListHead.Blink,
            1);
  if ( !Pool3 )
  {
    if ( !v31 )
      goto LABEL_96;
    v33 = KeGetCurrentThread();
    while ( v33 != *(struct _KTHREAD **)(v30 + 112) )
    {
      if ( !*(_QWORD *)(v30 + 112)
        && !_InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 112), (signed __int64)v33, 0LL) )
      {
        break;
      }
      KeWaitForSingleObject((PVOID)(v30 + 8), Executive, 0, 0, 0LL);
    }
    v34 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v30);
    v35 = *(_QWORD **)(v30 + 40);
    for ( i = v34; (v35[1] & 1) != 0; v35 = (_QWORD *)*v35 )
      ;
    Pool3 = v35[1];
    *((_DWORD *)v35 + 2) = Pool3 | 1;
    ++*(_BYTE *)(v30 + 88);
    ++*(_BYTE *)(v30 + 94);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)v30 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)v30, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), i);
    __writecr8(i);
    _InterlockedExchange64((volatile __int64 *)(v30 + 112), Pool3);
  }
  if ( Pool3 )
  {
    *(_QWORD *)(Pool3 + 8) = 0LL;
    v57 = 810708339;
    *(_QWORD *)Pool3 = 0LL;
    v37 = *(unsigned __int16 *)(v30 + 98);
    HIBYTE(v57) = 49;
    v60 = ExAllocatePool3(64LL, v37, v57, &stru_140E27C48.Header.WaitListHead.Blink, 1);
    if ( v60 || !v31 )
    {
      v41 = v60;
    }
    else
    {
      while ( Pool3 != *(_QWORD *)(v30 + 112) )
      {
        if ( !*(_QWORD *)(v30 + 112)
          && !_InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 112), Pool3, 0LL) )
        {
          break;
        }
        KeWaitForSingleObject((PVOID)(v30 + 8), Executive, 0, 0, 0LL);
      }
      v38 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v30);
      v39 = *(_QWORD **)(v30 + 48);
      for ( j = v38; (v39[1] & 1) != 0; v39 = (_QWORD *)*v39 )
        ;
      v41 = v39[1];
      *((_DWORD *)v39 + 2) = v41 | 1;
      ++*(_BYTE *)(v30 + 89);
      ++*(_BYTE *)(v30 + 94);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)v30 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)v30, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), j);
      __writecr8(j);
    }
    v42 = v55;
    if ( v41 )
    {
      v43 = v61;
      v44 = updated;
      v45 = v58;
      *(_OWORD *)v41 = 0LL;
      *(_OWORD *)(v41 + 16) = 0LL;
      *(_QWORD *)(v41 + 32) = 0LL;
      *(_DWORD *)v41 = 1;
      *(_DWORD *)(v41 + 8) = *v43;
      *(_DWORD *)(v41 + 12) = v42;
      *(_QWORD *)(v41 + 32) = Pool3;
      if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork((struct _MDL *)Pool3, v45, v44, v41) >= 0 )
        return v17;
    }
    goto LABEL_97;
  }
LABEL_96:
  v42 = v55;
  v41 = 0LL;
LABEL_97:
  if ( v29 )
  {
    v46 = v42;
    v47 = v58;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(v58, v61, v46);
    SmKmStoreDereference(v47, *(_DWORD *)(v29 + 2464));
  }
  else
  {
    v47 = v58;
  }
  if ( v41 )
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(v47, (_DWORD *)v41, Pool3);
  if ( Pool3 )
  {
    if ( *(_QWORD *)(v30 + 112) != Pool3 )
      goto LABEL_118;
    v48 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v30);
    v49 = *(_QWORD **)(v30 + 40);
    v50 = v48;
    if ( v49 )
    {
      while ( 1 )
      {
        v51 = v49[1];
        if ( (v51 & 0xFFFFFFFFFFFFFFF8uLL) == Pool3 )
          break;
        v49 = (_QWORD *)*v49;
        if ( !v49 )
          goto LABEL_107;
      }
      v52 = 1;
      *((_DWORD *)v49 + 2) = v51 & 0xFFFFFFFE;
      --*(_BYTE *)(v30 + 88);
      --*(_BYTE *)(v30 + 94);
    }
    else
    {
LABEL_107:
      v52 = 0;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)v30 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)v30, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v50);
    __writecr8(v50);
    if ( v52 )
    {
      if ( !*(_BYTE *)(v30 + 94) )
      {
        _InterlockedExchange64((volatile __int64 *)(v30 + 112), 0LL);
        KeSetEvent((PRKEVENT)(v30 + 8), 0, 0);
      }
    }
    else
    {
LABEL_118:
      ExFreePoolWithTag((PVOID)Pool3, 0);
    }
  }
  return v17;
}
