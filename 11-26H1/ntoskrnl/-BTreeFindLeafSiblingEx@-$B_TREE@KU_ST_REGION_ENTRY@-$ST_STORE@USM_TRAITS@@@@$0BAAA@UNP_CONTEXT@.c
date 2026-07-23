/*
 * XREFs of ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403ED018
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140211C90 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403ECE60 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1404743C4 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 * Callees:
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x1403ED1B0 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x1403ED29C (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
        __int64 a1,
        __int64 *a2,
        unsigned int a3)
{
  int v5; // esi
  char *v7; // rbx
  char *v8; // r8
  char *v9; // rdx
  void **v10; // rbx
  struct NP_CONTEXT::NP_CTX *v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  void **v14; // rdx
  unsigned __int64 v15; // rax
  void **v16; // rcx
  struct NP_CONTEXT::NP_CTX *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  __int128 v21; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3 & 1;
  v7 = 0LL;
  v21 = 0LL;
  if ( (unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindSeperatorIndexEntry(
                       a2,
                       a3 & 1,
                       &v21) )
  {
    v8 = (char *)*((_QWORD *)&v21 + 1);
    v9 = (char *)v21;
    if ( v5 )
      goto LABEL_18;
    v10 = (void **)(*((_QWORD *)&v21 + 1) - 8LL);
    if ( *((_QWORD *)&v21 + 1) <= (unsigned __int64)(v21 + 16) )
      v10 = (void **)(v21 + 8);
    while ( v9[2] != 2 )
    {
      v9 = (char *)*v10;
      if ( v5 )
      {
        v10 = (void **)(v9 + 8);
      }
      else
      {
        v8 = &v9[16 * (unsigned __int16)*(_DWORD *)v9];
LABEL_18:
        v10 = (void **)(v8 + 8);
      }
    }
    v11 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v11 == -1 )
      v7 = (char *)*v10;
    else
      v7 = (char *)NP_CONTEXT::NpLeafRefInternal(v11, v10, 2 * ((_DWORD)a2[4] & 1u));
    if ( v7 )
    {
      if ( (a3 & 2) != 0 )
      {
        v12 = *(_QWORD *)(*a2 + 16LL * (unsigned int)(*((_DWORD *)a2 + 6) - 2) + 8);
        v13 = *(_QWORD *)(*a2 + 16LL * (unsigned int)(*((_DWORD *)a2 + 6) - 2));
        v14 = (void **)(v12 - 8);
        v15 = v13 + 16;
        v16 = (void **)(v13 + 8);
        if ( v12 <= v15 )
          v14 = v16;
        v17 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
        if ( **(_DWORD **)v17 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v17, v14);
      }
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
        &v21,
        a3,
        a2);
      v18 = *a2;
      v19 = 2LL * (unsigned int)(*((_DWORD *)a2 + 6) - 1);
      *(_QWORD *)(v18 + 8 * v19) = v7;
      *(_QWORD *)(v18 + 8 * v19 + 8) = v7 + 16;
    }
    else
    {
      return -1LL;
    }
  }
  return (__int64)v7;
}
