/*
 * XREFs of ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140641BA8
 * Callers:
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x140641F60 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14020DDD0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     SmHpChunkUnprotect @ 0x14024EF10 (SmHpChunkUnprotect.c)
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x14027E6A0 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140392300 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     SmStoreDecompressBuffer @ 0x140392390 (SmStoreDecompressBuffer.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403EA24C (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14047B6F0 (-ST_PAGE_RECORD_GET@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_.c)
 *     ?BTreeSearchResultInit@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1404CA89C (-BTreeSearchResultInit@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ?StDmFixSingleBitCorruption@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEADKK@Z @ 0x14064189C (-StDmFixSingleBitCorruption@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEADKK@Z.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x140641F60 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x140642260 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140642BD8 (SmRecordDecompressionFailureDumpPayload.c)
 *     MmStoreLogDecompressionFailure @ 0x14070FC70 (MmStoreLogDecompressionFailure.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(
        __int64 a1,
        __int64 a2,
        void *a3,
        ULONG_PTR a4,
        __int64 a5)
{
  unsigned int v7; // ebx
  _DWORD *v8; // rdi
  char *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int16 v13; // cx
  int v14; // ecx
  unsigned __int16 *v15; // r12
  __int64 v16; // rdi
  struct VLOCK *v17; // rcx
  void *v18; // r12
  size_t v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  ULONG v24; // eax
  __int64 v25; // r15
  int v26; // eax
  int v27; // edx
  int v29; // [rsp+54h] [rbp-84h]
  int v30; // [rsp+60h] [rbp-78h]
  __int128 v32; // [rsp+70h] [rbp-68h] BYREF
  __int128 v33; // [rsp+80h] [rbp-58h]
  __int64 v34; // [rsp+90h] [rbp-48h]

  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v7 = 0;
  v29 = *(_DWORD *)a4 >> *(_DWORD *)(a1 + 804);
  v30 = a2 - 16 * (*(_DWORD *)a4 & *(_DWORD *)(a1 + 800));
  v8 = 0LL;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultInit(
    (__int64)&v32,
    2);
  if ( (int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              (char **)a1,
              *(_DWORD *)(*(_QWORD *)(a5 + 416) + 16LL),
              (__int64)&v32) >= 0 )
  {
    if ( DWORD2(v33) == -1 || !DWORD2(v33) )
      v9 = (char *)&v32 + 8;
    else
      v9 = (char *)(v32 + 16LL * (unsigned int)(DWORD2(v33) - 1));
    v8 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET((_DWORD *)a1, *((_QWORD *)v9 + 1));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    (char **)a1,
    (__int64)&v32,
    0);
  if ( v8 )
  {
    if ( *(_DWORD *)a4 != *v8
      || ((v13 = *((_WORD *)v8 + 2), (v13 & 0xFFF) == 0) ? (v14 = 4096) : (v14 = v13 & 0xFFF),
          v15 = (unsigned __int16 *)(a4 + 4),
          *(unsigned __int16 *)(a4 + 4) != v14) )
    {
      KeBugCheckEx(0x1C7u, 3uLL, a4, (ULONG_PTR)v8, 0LL);
    }
    SmHpChunkUnprotect(a1 + 192, (__int64)v8, 2, 2u);
  }
  else
  {
    v15 = (unsigned __int16 *)(a4 + 4);
  }
  v16 = a5;
  if ( (*(_DWORD *)(a1 + 776) & 0x200000) != 0 )
  {
    v17 = (struct VLOCK *)(*(_QWORD *)(a1 + 792) + 2472LL);
    if ( a5 == -448 )
      StLockAcquireShared(v17, v10, v11, v12);
    else
      StLockReleaseShared((struct _KTHREAD *)v17);
    v18 = *(void **)(a5 + 408);
    v19 = *(unsigned __int16 *)(a4 + 4);
    v20 = 0;
    if ( (_WORD)v19 != 4096 )
      v20 = *(_DWORD *)(a1 + 816);
    memmove(v18, (const void *)(a2 + v20), v19);
    if ( v18 )
      v7 = ST_STORE<SM_TRAITS>::StDmFixSingleBitCorruption(
             a1,
             (__int64)v18,
             *(unsigned __int16 *)(a4 + 4),
             *(_DWORD *)(a4 + 16)) & 1;
    if ( v7 )
    {
      v24 = *(unsigned __int16 *)(a4 + 4);
      if ( (unsigned __int16)v24 >= 0x1000u )
      {
        memmove(a3, v18, 0x1000uLL);
        v26 = 0;
        v25 = (__int64)a3;
      }
      else
      {
        *(_QWORD *)(a4 + 8) = 2LL;
        v25 = (__int64)a3;
        v26 = SmStoreDecompressBuffer(
                *(_QWORD *)(a1 + 792),
                (UCHAR *)a3,
                v22,
                (__int64)v18,
                v24,
                *(PVOID *)(a5 + 16),
                (PSLIST_ENTRY *)(a4 + 8));
        *(_QWORD *)(a4 + 8) = 0LL;
      }
      if ( v26 >= 0 )
        v7 |= 2u;
    }
    else
    {
      v25 = (__int64)a3;
    }
    v16 = a5;
    *(_DWORD *)(a5 + 448) = StLockAcquireShared((struct VLOCK *)(*(_QWORD *)(a1 + 792) + 2472LL), v21, v22, v23);
    v15 = (unsigned __int16 *)(a4 + 4);
  }
  else
  {
    v25 = (__int64)a3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2076));
  v27 = *v15;
  _InterlockedIncrement((_DWORD *)&stru_140E27C48.CycleTime + 1);
  if ( v7 >= 2 )
    _InterlockedIncrement((volatile signed __int32 *)&stru_140E27C48.CycleTime);
  MmStoreLogDecompressionFailure(a2, v27, v7 >> 1, stru_140E27C48.CycleTime, HIDWORD(stru_140E27C48.CycleTime));
  SmRecordDecompressionFailureDumpPayload(
    v30,
    *(_DWORD *)(a1 + 784),
    *v15,
    v29,
    *(_DWORD *)(a1 + 1360),
    *(_DWORD *)(a4 + 16),
    a2,
    v25,
    *(_QWORD *)(v16 + 416) + 16LL);
  if ( v7 < 2 )
    return 3221226720LL;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2072));
  return 0LL;
}
