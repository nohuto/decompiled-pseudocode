/*
 * XREFs of ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1403947C0
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140641974 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020E640 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x140481C78 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 */

void __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
        char **a1,
        char **a2)
{
  struct NP_CONTEXT::NP_CTX *v2; // rbx
  char *v4; // rax
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  __int64 v11; // r9
  unsigned int v12; // edx
  unsigned int v13; // r8d
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  void **v17; // rax
  void **v18; // rdi
  __int128 v19; // [rsp+20h] [rbp+0h] BYREF
  __int128 v20; // [rsp+30h] [rbp+10h]
  __int64 v21; // [rsp+40h] [rbp+20h]

  v2 = (struct NP_CONTEXT::NP_CTX *)(a2 + 2);
  if ( !a2 )
    v2 = 0LL;
  if ( **(_DWORD **)v2 != -1 )
  {
    if ( *a1 )
    {
      v4 = *a2;
      if ( *a1 != *a2 )
      {
        v21 = 0LL;
        v5 = 0;
        v19 = 0LL;
        v20 = 0LL;
        if ( v4 )
          v5 = (unsigned __int8)v4[2];
        v6 = 16LL * v5;
        v7 = v6 + 15;
        if ( v6 + 15 < v6 )
          v7 = 0xFFFFFFFFFFFFFF0LL;
        v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
        v9 = alloca(v8);
        v10 = alloca(v8);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
          &v19,
          2LL);
        v12 = *(_DWORD *)(v11 + 16);
        *((_QWORD *)&v20 + 1) = __PAIR64__(v5, v13);
        *(_QWORD *)&v19 = &v19;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          a2,
          v12,
          (__int64)&v19);
        v14 = *((_QWORD *)&v19 + 2 * v5 - 4);
        v15 = *((_QWORD *)&v19 + 2 * v5 - 3);
        v16 = v14 + 16;
        v17 = (void **)(v14 + 8);
        v18 = (void **)(v15 - 8);
        if ( v15 <= v16 )
          v18 = v17;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          a2,
          (__int64 *)&v19);
        if ( **(_DWORD **)v2 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v2, v18);
      }
    }
  }
}
