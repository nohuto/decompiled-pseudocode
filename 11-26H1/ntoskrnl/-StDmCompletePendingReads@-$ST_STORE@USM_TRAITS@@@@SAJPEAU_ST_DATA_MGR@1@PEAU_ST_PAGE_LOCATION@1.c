/*
 * XREFs of ?StDmCompletePendingReads@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@KPEAK@Z @ 0x140641514
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020F10C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x14027E6A0 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1403917A0 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140392300 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     SmStoreCompletePendingDecompress @ 0x14043C438 (SmStoreCompletePendingDecompress.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCompletePendingReads(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        _DWORD *a6)
{
  unsigned __int64 v7; // rsi
  struct VLOCK *v8; // rcx
  __int64 v9; // r12
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  _DWORD *v15; // r14
  __int64 v16; // rdi
  int v17; // r12d
  unsigned __int64 v18; // rbx
  int v19; // r9d
  int v20; // eax
  __int64 *v21; // rax
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rbx
  unsigned __int64 i; // rbx
  int v26; // eax
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF
  struct _KLOCK_ENTRIES *v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v7 = a3 + 24;
  v8 = (struct VLOCK *)(*(_QWORD *)(a1 + 792) + 2472LL);
  v9 = (__int64)a4;
  if ( a3 == -448 )
    StLockAcquireShared(v8, a2, -448LL, a4);
  else
    StLockReleaseShared((struct _KTHREAD *)v8);
  v15 = a6;
  v16 = 0LL;
  v28 = 0LL;
  *a6 = 0;
  if ( v7 <= a2 )
  {
    v17 = a5;
    v18 = v7 + 8;
    do
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x200000) != 0 )
        v19 = -1;
      else
        v19 = *(_DWORD *)(v18 + 8);
      v20 = SmStoreCompletePendingDecompress(*(_QWORD *)(a1 + 792), *(_QWORD *)v18, v16, v19);
      if ( v20 == 258 )
        break;
      *(_QWORD *)v18 = 0LL;
      if ( v20 < 0 )
      {
        if ( v20 == -1073741248 )
          *(_QWORD *)v18 = 2LL;
        else
          *(_DWORD *)(v18 + 12) = *(_DWORD *)(v18 + 12) & 0xFFFFFFE7 | 8;
        v16 = 0LL;
        v17 = 1;
      }
      ++*v15;
      v21 = &v28;
      if ( v17 )
        v21 = (__int64 *)v16;
      v18 += 24LL;
      v16 = (__int64)v21;
    }
    while ( v18 - 8 <= a2 );
    v9 = (__int64)v29;
  }
  v22 = StLockAcquireShared((struct VLOCK *)(*(_QWORD *)(a1 + 792) + 2472LL), v12, v13, v14);
  v23 = 0;
  v24 = (unsigned int)*v15 - 1LL;
  *(_DWORD *)(a3 + 448) = v22;
  for ( i = v7 + 24 * v24; i >= v7; i -= 24LL )
  {
    *(_DWORD *)(*(_QWORD *)(a3 + 416) + 16LL) = *(_DWORD *)(v9 + 24);
    *(_DWORD *)(*(_QWORD *)(a3 + 416) + 16LL) += *(unsigned __int16 *)(i + 6);
    v26 = ST_STORE<SM_TRAITS>::StDmFinishPageRetrieve(a1, i, a3, v9, 0);
    if ( v26 < 0 )
    {
      v23 = v26;
      **(_BYTE **)(a3 + 416) = *(_BYTE *)(i + 6);
    }
  }
  return v23;
}
