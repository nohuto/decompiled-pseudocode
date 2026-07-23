/*
 * XREFs of ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403EA560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1406420B0 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14020D3C8 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140210350 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     SmHpChunkFree @ 0x140211300 (SmHpChunkFree.c)
 *     SmHpChunkHeapProtect @ 0x1402510C4 (SmHpChunkHeapProtect.c)
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14039547C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmHpChunkHeapCleanup @ 0x1403E9DB0 (SmHpChunkHeapCleanup.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x1403EA1EC (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403EA24C (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EA290 (-BTreeNodeFree@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403EA3A8 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1403ECA14 (-BTreeNodeFree@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x140464990 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     SmHpChunkHeapInitialize @ 0x140492670 (SmHpChunkHeapInitialize.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1404C6C64 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmCleanup(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned __int64 v5; // rdx
  PVOID *v6; // r15
  _QWORD *v7; // rsi
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rsi
  __int16 v10; // r8
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  unsigned int i; // esi
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 192;
  SmHpChunkHeapProtect(a1 + 192, 1, 0);
  v5 = *(_QWORD *)(a1 + 760);
  if ( v5 )
  {
    SmHpChunkFree(v2, v5);
    if ( a2 )
    {
      *(_QWORD *)(a1 + 760) = 0LL;
      *(_DWORD *)(a1 + 768) = 0;
    }
  }
  v18 = *(_QWORD *)(a1 + 464);
  SmHpChunkHeapCleanup(v2);
  if ( a2 )
    SmHpChunkHeapInitialize(v2, &v18);
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    a1,
    a1 + 24,
    a2);
  if ( *(_QWORD *)a1 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFree(a1);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    a1 + 64,
    a1 + 88,
    a2);
  if ( *(_QWORD *)(a1 + 64) )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(a1 + 64);
  v6 = (PVOID *)(a1 + 152);
  v7 = (_QWORD *)(a1 + 128);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    (char **)(a1 + 128),
    (__int64 *)(a1 + 152));
  if ( *(_DWORD *)(a1 + 176) != -1 && *v6 && !a2 )
    ExFreePoolWithTag(*v6, 0);
  if ( *v7 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFree(a1 + 128);
  if ( a2 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_OWORD *)v7 = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1552), a2);
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1688), a2);
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1824), a2);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 16) = a1 + 1552;
    *(_QWORD *)(a1 + 80) = a1 + 1688;
    *(_QWORD *)(a1 + 144) = a1 + 1824;
  }
  if ( !*(_QWORD *)(a1 + 1368) )
    goto LABEL_17;
  for ( i = 0; i < 8; ++i )
    ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, i, 0xFFFFFFFFLL, v8);
  v9 = 0LL;
  if ( *(_DWORD *)(a1 + 788) )
  {
    do
    {
      v10 = *(_WORD *)(*(_QWORD *)(a1 + 1368) + 2 * v9);
      if ( (v10 & 0x1FFF) != 0 )
        ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, (unsigned int)v9, -(v10 & 0x1FFF), 0LL);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (_DWORD)v9 != *(_DWORD *)(a1 + 788) );
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0 )
  {
    if ( a2 )
      return;
    if ( *(_DWORD *)(a1 + 832) != RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 832)) )
      ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 1LL, a1 + 856);
  }
  else
  {
LABEL_17:
    if ( a2 )
      return;
  }
  v11 = *(void **)(a1 + 1376);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = *(void **)(a1 + 840);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = *(void **)(a1 + 1400);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = *(void **)(a1 + 1968);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = *(void **)(a1 + 1976);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v16 = *(void **)(a1 + 1984);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
}
