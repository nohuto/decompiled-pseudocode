/*
 * XREFs of ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020D410
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14020CC1C (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14020D4D4 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020DFF0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout(_QWORD *Parameter)
{
  __int64 v1; // r8
  __int64 v3; // rdx
  unsigned int Issue; // eax
  _SLIST_HEADER *v5; // rdi
  unsigned int v6; // r14d
  __int64 v7; // rbp

  v1 = Parameter[2];
  v3 = Parameter[1];
  *((_DWORD *)Parameter + 6) = 0;
  Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(*Parameter, v3, v1);
  v5 = (_SLIST_HEADER *)*Parameter;
  v6 = Issue;
  v7 = Parameter[2];
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    *Parameter + 64LL,
    *(_QWORD *)(v7 + 424));
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    &v5[8],
    *(_QWORD *)(v7 + 432));
  if ( LOWORD(v5[137].Alignment) >= 0x10u )
    ExFreePoolWithTag((PVOID)v7, 0);
  else
    RtlpInterlockedPushEntrySList(v5 + 137, (PSLIST_ENTRY)v7);
  if ( v6 != -1073741550 )
  {
    SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(*Parameter, (_SLIST_ENTRY *)Parameter[1], v6);
    *((_DWORD *)Parameter + 6) = 1;
  }
}
