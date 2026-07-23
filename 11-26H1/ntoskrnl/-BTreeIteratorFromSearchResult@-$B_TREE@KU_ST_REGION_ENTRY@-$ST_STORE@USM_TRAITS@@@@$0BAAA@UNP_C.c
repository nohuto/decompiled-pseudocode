/*
 * XREFs of ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140394DA0
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140641974 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14020E640 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x140481C78 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 */

_OWORD *__fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // edx
  _OWORD *result; // rax
  _DWORD **v7; // rcx
  char *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  void **v11; // r9
  unsigned __int64 v12; // rax
  void **v13; // rcx
  unsigned int v14; // edi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  __int64 v20; // r9
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  __int64 v24; // rbx
  __int128 v25; // [rsp+20h] [rbp+0h] BYREF
  __int128 v26; // [rsp+30h] [rbp+10h]
  __int64 v27; // [rsp+40h] [rbp+20h]

  v5 = *(_DWORD *)(a3 + 24);
  if ( v5 == -1 || !v5 )
    result = (_OWORD *)(a3 + 8);
  else
    result = (_OWORD *)(*(_QWORD *)a3 + 16LL * (unsigned int)(v5 - 1));
  v7 = (_DWORD **)(a1 + 16);
  *(_OWORD *)a2 = *result;
  if ( !a1 )
    v7 = 0LL;
  if ( **v7 != -1 )
  {
    if ( *(_QWORD *)a2 )
    {
      v8 = *(char **)a1;
      if ( *(_QWORD *)a2 != *(_QWORD *)a1 )
      {
        if ( v5 == -1 )
        {
          v14 = 0;
          v27 = 0LL;
          v25 = 0LL;
          v26 = 0LL;
          if ( v8 )
            v14 = (unsigned __int8)v8[2];
          v15 = 16LL * v14;
          v16 = v15 + 15;
          if ( v15 + 15 < v15 )
            v16 = 0xFFFFFFFFFFFFFF0LL;
          v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
          v18 = alloca(v17);
          v19 = alloca(v17);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
            &v25,
            2LL);
          v21 = *(_DWORD *)(v20 + 16);
          *(_QWORD *)&v25 = &v25;
          DWORD2(v26) = 0;
          HIDWORD(v26) = v14;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
            (char **)a1,
            v21,
            (__int64)&v25);
          v22 = 2LL * (v14 - 2);
          v23 = *((_QWORD *)&v25 + 2 * v14 - 3);
          v24 = *((_QWORD *)&v25 + v22);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
            (char **)a1,
            (__int64 *)&v25);
          v11 = (void **)(v23 - 8);
          if ( v23 <= v24 + 16 )
            v11 = (void **)(v24 + 8);
        }
        else
        {
          v9 = *((_QWORD *)result - 1);
          v10 = *((_QWORD *)result - 2);
          v11 = (void **)(v9 - 8);
          v12 = v10 + 16;
          v13 = (void **)(v10 + 8);
          if ( v9 <= v12 )
            v11 = v13;
        }
        result = *(_OWORD **)(a1 + 16);
        if ( *(_DWORD *)result != -1 )
          result = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v11, 3u);
      }
    }
  }
  *(_QWORD *)(a2 + 8) -= 4LL;
  return result;
}
