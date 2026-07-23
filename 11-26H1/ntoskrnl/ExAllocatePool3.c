/*
 * XREFs of ExAllocatePool3 @ 0x140C16010
 * Callers:
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14020E100 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020E640 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020FE40 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140211C90 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmHpBufferProtectEx @ 0x14024E610 (SmHpBufferProtectEx.c)
 *     SmHpChunkUnprotect @ 0x14024EF10 (SmHpChunkUnprotect.c)
 *     SmHpBufferAlloc @ 0x14024F2BC (SmHpBufferAlloc.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140250D94 (SmPrepareForFatalHeapCorruption.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402800C0 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14030FF4C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     SmFpAllocate @ 0x14035EF20 (SmFpAllocate.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140390CC0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140393390 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     SmKmAllocateMdlForLock @ 0x140396230 (SmKmAllocateMdlForLock.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403EA9E4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x1403EB618 (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     SmArrayGrow @ 0x1403EBBF8 (SmArrayGrow.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403ED790 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z @ 0x1403EDA98 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1403EDE88 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403EE060 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1403EE368 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     SmpKeyedStoreEntryGet @ 0x140402EE0 (SmpKeyedStoreEntryGet.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140441060 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ExAllocatePoolWithTagPriority @ 0x14045ECF0 (ExAllocatePoolWithTagPriority.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404932FC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x1404935CC (ExpSaBinaryArrayInsert.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1404AE360 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     SmBinaryArrayGrow @ 0x1404D236C (SmBinaryArrayGrow.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404E0B10 (ExAllocateCacheAwarePushLock.c)
 *     ExpAllocatePoolTrackTableSnapshot @ 0x140530FF8 (ExpAllocatePoolTrackTableSnapshot.c)
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405EB654 (KeEtwInitializeCpuStarvationProvider.c)
 *     KiAllocateIdleSearchStructures @ 0x1405EC5B4 (KiAllocateIdleSearchStructures.c)
 *     KiAllocateProcessorSchedulerStructures @ 0x1405EC84C (KiAllocateProcessorSchedulerStructures.c)
 *     KiAllocateKNode @ 0x1405F19B8 (KiAllocateKNode.c)
 *     KiAllocateSchedulerSubNode @ 0x1405F1CFC (KiAllocateSchedulerSubNode.c)
 *     KiAllocateForceParkingData @ 0x1405FB2A0 (KiAllocateForceParkingData.c)
 *     VfIoPendingEntry @ 0x140649020 (VfIoPendingEntry.c)
 *     ExpSaInitialize @ 0x1406D7200 (ExpSaInitialize.c)
 *     PpmIdleInitializeConcurrency @ 0x1407CC980 (PpmIdleInitializeConcurrency.c)
 *     ?ExpLookasideMgrAllocatePoolOnNode@@YAPEAXK_K@Z @ 0x140840B08 (-ExpLookasideMgrAllocatePoolOnNode@@YAPEAXK_K@Z.c)
 *     ExpWorkQueueHealthMetricsAllocate @ 0x1408461B8 (ExpWorkQueueHealthMetricsAllocate.c)
 *     AstLogDeviceCreated @ 0x14091C31C (AstLogDeviceCreated.c)
 *     IopAllocateMiniCompletionPacket @ 0x140A893B0 (IopAllocateMiniCompletionPacket.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A925D0 (AlpcpAllocateCompletionPacketLookaside.c)
 *     IoAllocateMiniCompletionPacket @ 0x140A96230 (IoAllocateMiniCompletionPacket.c)
 *     AstLogDeviceSDDLUpdated @ 0x140AA717C (AstLogDeviceSDDLUpdated.c)
 *     KiInitializeThreadCycleTable @ 0x140BFA0D8 (KiInitializeThreadCycleTable.c)
 *     VmInitializeProcessor @ 0x140C13BAC (VmInitializeProcessor.c)
 *     IoVerifierCheckForSettingsChange @ 0x140C26984 (IoVerifierCheckForSettingsChange.c)
 *     ViPtInitCircularPoolTrace @ 0x140C30678 (ViPtInitCircularPoolTrace.c)
 *     VerifierExAllocatePool3 @ 0x140C358C0 (VerifierExAllocatePool3.c)
 *     VfKeCheckForChanges @ 0x140C3A1BC (VfKeCheckForChanges.c)
 *     VfFaultsInitPhase0 @ 0x140C3A594 (VfFaultsInitPhase0.c)
 *     ViIrqlInit @ 0x140C425D4 (ViIrqlInit.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x14039A460 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x1404795B4 (MmResourcesAvailable.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140C169D0 (ExpAllocatePoolWithQuotaTag.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall ExAllocatePool3(__int64 a1, struct _KLOCK_ENTRIES *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rsi
  char v6; // r11
  __int64 v7; // rdi
  __int64 v11; // rbx
  _QWORD *v12; // r12
  int v13; // r10d
  __int64 v14; // r14
  unsigned int v15; // ecx
  NTSTATUS v16; // ecx
  unsigned int v17; // edx
  _QWORD *v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rax
  bool v22; // zf
  __int64 PoolWithQuotaTag; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v5 = 0LL;
  *(_OWORD *)v27 = 0LL;
  v6 = 0;
  v7 = a1;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 16;
  LODWORD(v14) = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000;
  v15 = a1 & 0x1C0;
  if ( !v15 || ((v15 - 1LL) & v15) != 0 || (v7 & 0xFFFFF000) != 0 || (v7 & 0x10) != 0 || (v7 & 0x800) != 0 || !a3 )
    goto LABEL_6;
  v17 = 0;
  while ( v17 < a5 )
  {
    v18 = (_QWORD *)(a4 + 16LL * v17);
    v19 = (unsigned __int8)*v18;
    if ( v19 == 4 )
    {
      if ( v11 )
        goto LABEL_6;
      v20 = v18[1];
      v11 = 0LL;
      if ( v20 )
      {
        v21 = (_DWORD *)((unsigned __int64)&dword_140E6BF60 ^ qword_140E6BFA8 ^ v20);
        if ( *v21 == -1347437123 )
          v11 = (__int64)v21;
      }
      v22 = v11 == 0;
LABEL_18:
      if ( v22 )
        goto LABEL_6;
      goto LABEL_19;
    }
    v25 = v19 - 1;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 == 1 )
        {
          v14 = *((unsigned int *)v18 + 2);
          if ( ((_DWORD)v18[1] & 0x7FFFFFFFu) >= (unsigned __int16)KeNumberNodes || v14 != v18[1] )
            goto LABEL_6;
          v22 = (v7 & 0x40) == 0;
        }
        else
        {
          v22 = (*v18 & 0x100LL) == 0;
        }
        goto LABEL_18;
      }
      if ( v7 != 64 )
        goto LABEL_6;
      v12 = (_QWORD *)v18[1];
      if ( !v12 || a5 != 1 )
        goto LABEL_6;
LABEL_19:
      ++v17;
    }
    else
    {
      if ( (v7 & 1) != 0 )
      {
        if ( (*v18 & 0x100) == 0 )
          goto LABEL_6;
        goto LABEL_19;
      }
      v13 = *((_DWORD *)v18 + 2);
      if ( v13 && ((v13 - 16) & 0xFFFFFFEF) != 0 )
        goto LABEL_6;
      v6 = 1;
      ++v17;
    }
  }
  if ( v11 && ((unsigned int)v7 & *(_QWORD *)(v11 + 64)) != (unsigned int)v7 )
    goto LABEL_6;
  if ( v12 )
  {
    if ( *v12 && *(_DWORD *)((unsigned __int64)&dword_140E6BF60 ^ qword_140E6BFA8 ^ *v12) == -1381122884 )
    {
      v16 = -1073741670;
LABEL_7:
      if ( (v7 & 0x20) != 0 )
        RtlRaiseStatus(v16);
      return v5;
    }
LABEL_6:
    v16 = -1073741811;
    goto LABEL_7;
  }
  if ( (ExpPoolFlags & 8) == 0 )
    goto LABEL_24;
  if ( (v7 & 0x200) != 0 )
  {
    v7 &= ~0x200uLL;
LABEL_24:
    if ( (v7 & 1) != 0 )
    {
      PoolWithQuotaTag = ExpAllocatePoolWithQuotaTag(v11, v7, a2, a3, v14);
    }
    else
    {
      if ( v6 && v13 != 32 && !(unsigned int)MmResourcesAvailable(v7 & 0xFFFB, a2, v13) && (unsigned __int64)a2 > 0xFE0 )
      {
LABEL_36:
        v16 = -1073741670;
        goto LABEL_7;
      }
      PoolWithQuotaTag = ExpAllocatePoolWithTagFromNode(v11, v7, (__int64)a2, a3, v14);
    }
    v5 = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
      return v5;
    goto LABEL_36;
  }
  LODWORD(v27[1]) = 32;
  v27[0] = v27[0] & 0xFFFFFFFFFFFFFF00uLL | 1;
  return VfHandlePoolAlloc(
           NonPagedPool,
           v7 & 0xFFFFFFFFFFFFFFFEuLL,
           (ULONG_PTR)a2,
           a3,
           LowPoolPriority,
           (__int64)v27,
           1,
           retaddr);
}
