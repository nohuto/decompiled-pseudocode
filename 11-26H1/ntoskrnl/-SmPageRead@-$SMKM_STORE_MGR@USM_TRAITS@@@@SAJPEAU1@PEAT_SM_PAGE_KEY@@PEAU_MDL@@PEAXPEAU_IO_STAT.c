/*
 * XREFs of ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140390CC0
 * Callers:
 *     MiIssueHardFaultIo @ 0x140390800 (MiIssueHardFaultIo.c)
 *     SmPageRead @ 0x140390C8C (SmPageRead.c)
 * Callees:
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140280D40 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmAcquireReleaseResAvailForRead @ 0x1402D6940 (SmAcquireReleaseResAvailForRead.c)
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140391040 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     SmpFpWaitForResource @ 0x14064358C (SmpFpWaitForResource.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  signed __int64 v5; // rsi
  unsigned __int64 v7; // r15
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int PickStore; // eax
  __int64 v11; // r13
  unsigned int v12; // ebp
  char v13; // r12
  unsigned __int64 v14; // rdx
  ULONG *v15; // r9
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v18; // ett
  int v19; // ebp
  __int64 v20; // rdx
  int v21; // ebp
  PSLIST_ENTRY Pool3; // rdi
  bool v23; // zf
  __int64 result; // rax
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+18h] BYREF
  int v28; // [rsp+98h] [rbp+20h] BYREF

  v5 = a5;
  v28 = 0;
  v7 = a3;
  v25 = 0LL;
  v8 = 0;
  if ( (a3 & 3) != 0 )
  {
    v8 = a3 & 1 | 2;
    if ( (a3 & 2) == 0 )
      v8 = a3 & 1;
    v7 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  *(_QWORD *)(a5 + 8) = 0LL;
  *(_QWORD *)v5 = a4;
  v9 = *(_DWORD *)(v7 + 40) >> 12;
  LODWORD(a5) = v9;
  v27 = v9;
  PickStore = SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
                a1,
                (_DWORD)a2,
                (unsigned int)&v27,
                (unsigned int)&v25,
                (__int64)&v28);
  v11 = v25;
  v12 = PickStore;
  if ( PickStore < 0 )
    goto LABEL_23;
  v13 = v27;
  *(_QWORD *)(v5 + 8) = v27;
  if ( v8 >= 2 && !*(_BYTE *)(v11 + 2468) )
  {
    v12 = -1073741791;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(a1 + 2120) & 0x10) != 0 )
  {
    v14 = v9 + 48LL;
    v15 = **(ULONG ***)(a1 + 2208);
    if ( v15 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( v14 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
      {
        v18 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - v14,
                                    CachedResidentAvailable);
        if ( v18 == CachedResidentAvailable )
          goto LABEL_10;
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v15, v14, 0LL)
      && (*(_QWORD *)(a1 + 2328)
       || v9 != 1LL
       || _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2328), v5, 0LL)) )
    {
      v12 = -1073741670;
      goto LABEL_23;
    }
LABEL_10:
    LOBYTE(v8) = v8 | 0xC;
  }
  if ( (v8 & 1) != 0 )
  {
    Pool3 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1088));
    if ( Pool3
      || (Pool3 = (PSLIST_ENTRY)ExAllocatePool3(64LL, 88LL, 1633119603LL, &stru_140E27C48.Header.WaitListHead.Blink, 1)) != 0LL )
    {
LABEL_14:
      v23 = (v28 & 1) == 0;
      *Pool3 = 0LL;
      Pool3[1] = 0LL;
      *((_DWORD *)&Pool3[1].Next + 2) = *a2;
      LODWORD(Pool3->Next) = 2;
      Pool3[1].Next = (_SLIST_ENTRY *)v7;
      *((_BYTE *)&Pool3->Next + 8) = v13;
      Pool3[2].Next = (_SLIST_ENTRY *)v5;
      if ( !v23 )
        *((_DWORD *)&Pool3->Next + 2) |= 0x100u;
      if ( (v8 & 1) != 0 )
        *((_DWORD *)&Pool3->Next + 2) |= 0x200u;
      if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(
                  (struct _MDL *)v5,
                  a1,
                  *(_DWORD *)(v11 + 2464) & 0x3FF,
                  (__int64)Pool3) >= 0 )
        return 259LL;
      v12 = -1073741670;
      SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a1, Pool3, v5);
      goto LABEL_22;
    }
    LOBYTE(v8) = v8 & 0xFE;
  }
  v19 = *(_DWORD *)(a1 + 2120);
  v20 = *(unsigned __int16 *)(a1 + 1922);
  v27 = 827485555;
  v21 = v19 & 1;
  Pool3 = (PSLIST_ENTRY)ExAllocatePool3(64LL, v20, 827485555LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
  if ( !Pool3 && v21 )
    Pool3 = (PSLIST_ENTRY)SmpFpWaitForResource((PEX_SPIN_LOCK)(a1 + 1824));
  if ( Pool3 )
    goto LABEL_14;
  v12 = -1073741670;
LABEL_22:
  v9 = a5;
LABEL_23:
  if ( v11 )
    SmKmStoreDereference(a1, *(_DWORD *)(v11 + 2464));
  if ( (v8 & 4) != 0 )
    SmAcquireReleaseResAvailForRead(a1, v5, v9, 1);
  result = v12;
  if ( v5 )
  {
    *(_OWORD *)v5 = 0LL;
    *(_DWORD *)v5 = v12;
  }
  return result;
}
