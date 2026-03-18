/*
 * XREFs of ?BTreeDescendToSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x14063BF3C
 * Callers:
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14063BF98 (-BTreeFindLeafSiblingEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDescendToSibling(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *i; // rdx

  v3 = a1[1];
  v4 = *a1;
  if ( a3 )
    v5 = (_QWORD *)(*(_QWORD *)a3 + 16LL * (*(_DWORD *)(a3 + 24) - (unsigned int)*(unsigned __int8 *)(v4 + 2)));
  else
    v5 = 0LL;
  v6 = (_QWORD *)(v3 + 8);
  for ( i = (_QWORD *)(v3 + 16); ; i = v6 + 1 )
  {
    if ( v5 )
    {
      *v5 = v4;
      v5[1] = i;
      v5 += 2;
    }
    if ( *(_BYTE *)(v4 + 2) == 2 )
      break;
    v4 = *v6;
    v6 = (_QWORD *)(*v6 + 8LL);
  }
  return v6;
}
