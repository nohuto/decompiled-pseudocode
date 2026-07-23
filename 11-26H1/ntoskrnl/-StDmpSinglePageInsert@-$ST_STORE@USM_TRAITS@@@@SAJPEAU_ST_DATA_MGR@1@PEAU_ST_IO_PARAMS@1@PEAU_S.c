/*
 * XREFs of ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140211560
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14020DDD0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020DFF0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14020E100 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EB30 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020ECD0 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14020F9A0 (-BTreeInsert@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140210350 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402104F0 (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140211938 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1403EC1D0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // r15d
  __int64 result; // rax
  char v10; // bl
  unsigned __int16 v11; // cx
  int v12; // esi
  int v13; // edx
  __int64 v14; // r8
  __int16 v15; // cx
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ebx
  unsigned __int16 v19; // cx
  _WORD *v20; // r9
  unsigned int v21; // ebx
  unsigned __int64 v22; // rdx
  unsigned __int16 v23; // r10
  _DWORD *v24; // r11
  unsigned int v25; // eax
  unsigned int v26; // ecx
  __int16 v27; // ax
  __int64 v28; // r8
  int v29; // [rsp+40h] [rbp-69h] BYREF
  __int16 v30; // [rsp+48h] [rbp-61h] BYREF
  __int64 v31; // [rsp+50h] [rbp-59h] BYREF
  int v32; // [rsp+58h] [rbp-51h] BYREF
  __int64 v33; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  __int64 *v35; // [rsp+80h] [rbp-29h]
  __int64 v36; // [rsp+88h] [rbp-21h]
  int *v37; // [rsp+90h] [rbp-19h]
  __int64 v38; // [rsp+98h] [rbp-11h]
  __int16 *v39; // [rsp+A0h] [rbp-9h]
  __int64 v40; // [rsp+A8h] [rbp-1h]
  unsigned int *v41; // [rsp+B0h] [rbp+7h]
  __int64 v42; // [rsp+B8h] [rbp+Fh]

  if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (char **)a1,
      (__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 56) &= ~1u;
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (char **)(a1 + 64),
      (__int64 *)(a1 + 88));
  *(_DWORD *)(a1 + 120) &= ~1u;
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (char **)(a1 + 128),
      (__int64 *)(a1 + 152));
  *(_DWORD *)(a1 + 184) &= ~1u;
  v6 = *(_DWORD *)(a1 + 456);
  v7 = a3 - *(_DWORD *)(a1 + 472) - (a3 & 0xFFFFF000);
  v31 = 0LL;
  v8 = v7 / *(_DWORD *)(a1 + 464) + (*(_DWORD *)((a3 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << v6);
  LODWORD(v31) = *(_DWORD *)(a2 + 16);
  HIDWORD(v31) = v8;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (char **)a1,
    v31,
    a1 + 24);
  result = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
             a1,
             a1 + 24,
             &v31);
  if ( (int)result >= 0 )
  {
    v10 = 1;
    if ( (*(_DWORD *)(a1 + 776) & 0x100000) != 0 )
    {
      v11 = *(_WORD *)(a3 + 6) + 1;
      *(_WORD *)(a3 + 6) = v11;
      if ( v11 > 1u )
        return 0LL;
      if ( !v11 )
        NT_ASSERT("PageRecordEx->RefCount != 0");
    }
    v29 = v8;
    v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
            (char **)(a1 + 64),
            (unsigned int *)&v29,
            a1 + 88);
    if ( v12 >= 0 )
    {
      v10 = 3;
      if ( (*(_DWORD *)(a1 + 776) & 0x100000) == 0
        || (v29 = v8,
            v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsert(
                    (char **)(a1 + 128),
                    (unsigned int *)&v29,
                    a1 + 152),
            v12 >= 0) )
      {
        v13 = *(_DWORD *)(a1 + 816);
        v14 = (unsigned int)(*(_DWORD *)a3 >> *(_DWORD *)(a1 + 804));
        v15 = *(_WORD *)(a3 + 4);
        if ( (v15 & 0xFFF) != 0 )
        {
          v16 = v15 & 0xFFF;
        }
        else
        {
          v16 = 4096;
          v13 = 0;
        }
        v17 = *(_QWORD *)(a1 + 1368);
        v18 = v16 + 15;
        v19 = *(_WORD *)(v17 + 2 * v14);
        v20 = (_WORD *)(v17 + 2 * v14);
        v21 = (unsigned int)(v13 + v18) >> 4;
        v22 = (unsigned __int64)v19 >> 13;
        v23 = v19 & 0x1FFF;
        *v20 = v21 + v19;
        v24 = (_DWORD *)(a1 + 16 * (v22 + 89));
        *(_DWORD *)(a1 + 8 * v22 + 1996) += v21;
        if ( (_DWORD)v14 == *v24 )
          goto LABEL_20;
        v25 = (unsigned int)(*(_DWORD *)(a1 + 800) + 1) >> 1;
        v26 = *v20 & 0x1FFF;
        if ( v23 < v25 && v23 )
        {
          if ( v26 >= v25 || (*v20 & 0x1FFF) == 0 )
          {
            --*(_DWORD *)(a1 + 1408);
            *(_BYTE *)(*(_QWORD *)(a1 + 1400) + ((unsigned __int64)(unsigned int)v14 >> 3)) |= 1 << (v14 & 7);
          }
        }
        else if ( v26 < v25 && (*v20 & 0x1FFF) != 0 )
        {
          *(_BYTE *)(*(_QWORD *)(a1 + 1400) + ((unsigned __int64)(unsigned int)v14 >> 3)) &= ~(1 << (v14 & 7));
          ++*(_DWORD *)(a1 + 1408);
        }
        if ( (_DWORD)v14 == *v24 )
LABEL_20:
          v24[1] += v21;
        if ( (BYTE4(stru_140E27C48.InitialStack) & 0x10) != 0 )
        {
          LOWORD(v29) = *(_WORD *)a2 & 7;
          v27 = *(_WORD *)(a3 + 4) & 0xFFF;
          v33 = a1;
          v30 = v27;
          v32 = *(_DWORD *)a3;
          UserData.Ptr = (ULONGLONG)&v31;
          v35 = &v33;
          v37 = &v32;
          v39 = &v30;
          v41 = (unsigned int *)&v29;
          *(_QWORD *)&UserData.Size = 4LL;
          v36 = 8LL;
          v38 = 4LL;
          v40 = 2LL;
          v42 = 2LL;
          EtwWriteEx(stru_140E27C48.QuantumTarget, SmEtwDescriptorPtrs, 0LL, 1u, 0LL, 0LL, 5u, &UserData);
        }
        return 0LL;
      }
    }
    if ( (int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
                a1,
                a1 + 24) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status2)) >= 0)");
    if ( (v10 & 2) != 0
      && (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
                a1 + 64,
                a1 + 88,
                v28) < 0 )
    {
      NT_ASSERT("(((NTSTATUS)(Status2)) >= 0)");
    }
    return (unsigned int)v12;
  }
  return result;
}
