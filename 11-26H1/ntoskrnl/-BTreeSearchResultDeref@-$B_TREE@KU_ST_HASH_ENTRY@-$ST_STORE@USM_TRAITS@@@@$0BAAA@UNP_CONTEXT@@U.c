/*
 * XREFs of ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140210350
 * Callers:
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14020F6E0 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14020F9A0 (-BTreeInsert@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENT.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020FE40 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140210350 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD_EX@1@@Z @ 0x140210840 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140211560 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020FE40 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140210350 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 */

void __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        char **a1,
        __int64 *a2)
{
  struct NP_CONTEXT::NP_CTX *v2; // rbx
  bool v3; // zf
  unsigned int v5; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  void **v13; // rdx
  void **v14; // rax
  char *v15; // rax
  unsigned int v16; // r15d
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  unsigned int v21; // edx
  void *v22; // rsp
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  void **v26; // rax
  void **v27; // rdi
  __int64 v28; // [rsp+20h] [rbp+0h] BYREF
  __int128 v29; // [rsp+28h] [rbp+8h]
  int v30; // [rsp+38h] [rbp+18h]
  unsigned int v31; // [rsp+3Ch] [rbp+1Ch]
  __int64 v32; // [rsp+40h] [rbp+20h]

  v2 = (struct NP_CONTEXT::NP_CTX *)(a1 + 2);
  v3 = a1 == 0LL;
  v5 = *((_DWORD *)a2 + 6);
  if ( v3 )
    v2 = 0LL;
  if ( **(_DWORD **)v2 == -1 )
  {
    if ( v5 == -1 )
      a2[1] = 0LL;
    else
      *((_DWORD *)a2 + 6) = 0;
  }
  else if ( v5 == -1 )
  {
    v7 = a2[1];
    if ( v7 )
    {
      v15 = *a1;
      if ( (char *)v7 != *a1 )
      {
        v16 = 0;
        if ( v15 )
          v16 = (unsigned __int8)v15[2];
        v17 = 16LL * v16;
        v18 = v17 + 15;
        if ( v17 + 15 < v17 )
          v18 = 0xFFFFFFFFFFFFFF0LL;
        v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
        v20 = alloca(v19);
        v21 = *(_DWORD *)(v7 + 16);
        v22 = alloca(v19);
        v32 = 1LL;
        v30 = 0;
        v31 = v16;
        v29 = 0LL;
        v28 = (__int64)&v28;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          a1,
          v21,
          (__int64)&v28);
        v23 = *(&v28 + 2 * v16 - 4);
        v24 = *(&v28 + 2 * v16 - 3);
        v25 = v23 + 16;
        v26 = (void **)(v23 + 8);
        v27 = (void **)(v24 - 8);
        if ( v24 <= v25 )
          v27 = v26;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          a1,
          &v28);
        if ( **(_DWORD **)v2 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v2, v27);
      }
    }
    a2[1] = 0LL;
  }
  else
  {
    if ( v5 > 1 )
    {
      v8 = *a2;
      v9 = 2LL * (v5 - 2);
      v10 = *(_QWORD *)(*a2 + 8 * v9);
      v11 = *(_QWORD *)(v8 + 8 * v9 + 8);
      v12 = v10 + 16;
      v13 = (void **)(v10 + 8);
      v14 = (void **)(v11 - 8);
      if ( v11 <= v12 )
        v14 = v13;
      NP_CONTEXT::NpLeafDerefInternal(v2, v14);
    }
    *((_DWORD *)a2 + 6) = 0;
  }
}
