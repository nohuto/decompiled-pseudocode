/*
 * XREFs of ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14063FB74
 * Callers:
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140462248 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 * Callees:
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140470A30 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x14063FB18 (-BTreeDescendToSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
        __int64 a1,
        __int64 a2)
{
  struct B_TREE_NODE_HDR *v4; // rbx
  __int64 v5; // rdx
  void **v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  void **v9; // rdx
  unsigned __int64 v10; // rax
  void **v11; // rcx
  struct NP_CONTEXT::NP_CTX *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  *(_OWORD *)v16 = 0LL;
  if ( (unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindSeperatorIndexEntry(
                       a2,
                       1,
                       (__int64)v16) )
  {
    v6 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                    v16,
                    v5,
                    0LL);
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      v4 = (struct B_TREE_NODE_HDR *)*v6;
    else
      v4 = NP_CONTEXT::NpLeafRefInternal(
             (struct NP_CONTEXT **)((a1 + 16) & -(__int64)(a1 != 0)),
             v6,
             2 * (*(_BYTE *)(a2 + 32) & 1u));
    if ( v4 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 2) + 8);
      v8 = *(_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 2));
      v9 = (void **)(v7 - 8);
      v10 = v8 + 16;
      v11 = (void **)(v8 + 8);
      if ( v7 <= v10 )
        v9 = v11;
      v12 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
      if ( **(_DWORD **)v12 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v12, v9);
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDescendToSibling(
        v16,
        (__int64)v9,
        a2);
      v13 = *(_QWORD *)a2;
      v14 = 2LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      *(_QWORD *)(v13 + 8 * v14) = v4;
      *(_QWORD *)(v13 + 8 * v14 + 8) = (char *)v4 + 16;
    }
    else
    {
      return -1LL;
    }
  }
  return (__int64)v4;
}
