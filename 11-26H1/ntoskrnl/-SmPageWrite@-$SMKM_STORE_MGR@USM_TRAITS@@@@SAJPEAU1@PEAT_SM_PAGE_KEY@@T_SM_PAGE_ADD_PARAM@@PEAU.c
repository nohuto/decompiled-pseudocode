/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402800C0
 * Callers:
 *     SmPageWrite @ 0x140402BD4 (SmPageWrite.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x14027EE40 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14028050C (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 *     ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x140404388 (-SmCompressCtxQueueEntries@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        int *a2,
        unsigned __int64 a3,
        __int64 a4,
        _SLIST_ENTRY *a5,
        _SLIST_ENTRY *a6,
        __int64 a7)
{
  struct _EX_RUNDOWN_REF *v8; // r13
  unsigned int v9; // edx
  PSLIST_ENTRY Pool3; // rdi
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // ebp
  char v16; // cl
  __int64 v17; // rdx
  __int64 v18; // r14
  unsigned __int64 v19; // rtt
  _DWORD *v20; // r14
  int *v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // r8
  int v25; // ecx
  int v26; // r9d
  int v27; // ecx
  int v28; // eax
  int v29; // edx
  __int64 result; // rax
  int v31; // ebx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  unsigned int v36; // eax
  struct _LIST_ENTRY **p_Blink; // r9
  int v38; // ecx
  unsigned int v39; // edx
  int v40; // ecx
  unsigned int v41; // eax
  PSLIST_ENTRY v42; // [rsp+30h] [rbp-68h] BYREF
  int v43; // [rsp+38h] [rbp-60h]
  __int16 v44; // [rsp+3Ch] [rbp-5Ch]
  __int16 v45; // [rsp+3Eh] [rbp-5Ah]
  __int128 v46; // [rsp+40h] [rbp-58h] BYREF
  __int128 v47; // [rsp+50h] [rbp-48h]
  int v50; // [rsp+C8h] [rbp+30h]

  v8 = 0LL;
  v9 = a3 & 0x7FF;
  Pool3 = 0LL;
  *((_QWORD *)&a6->Next + 1) = 0LL;
  a6->Next = a5;
  v50 = *(_DWORD *)(a4 + 40) >> 12;
  if ( v9 >= 0x400 )
    goto LABEL_35;
  v13 = *(_QWORD *)(a1 + 8 * ((a3 & 0x7FF) >> 5));
  if ( !v13 )
    goto LABEL_35;
  v14 = v13 + 40LL * (v9 & 0x1F);
  if ( !v14 )
    goto LABEL_35;
  v15 = v9 | ((*(_WORD *)(v14 + 32) & 0x3F) << 10);
  v16 = v9;
  v17 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(v9 & 0x3FF) >> 5));
  if ( v17 )
  {
    v18 = v17 + 40LL * (v16 & 0x1F);
    if ( v18 )
    {
      _m_prefetchw((const void *)(v18 + 8));
      v19 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v19 == _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 8), v19 + 2, v19)
        || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v18 + 8)) )
      {
        if ( (*(_WORD *)(v18 + 32) & 0x3F) == v15 >> 10 )
        {
          v20 = *(_DWORD **)v18;
          goto LABEL_10;
        }
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v18 + 8));
      }
    }
  }
  v20 = 0LL;
LABEL_10:
  if ( v20 )
  {
    v21 = v20 + 514;
    v22 = 0;
    v23 = (unsigned __int16)a3 >> 13;
    v24 = 8LL;
    do
    {
      v25 = *v21;
      v21 += 2;
      v22 += v25;
      --v24;
    }
    while ( v24 );
    if ( v20[228] <= v22 )
    {
      v39 = v20[2 * v23 + 515];
      v40 = v20[2 * v23 + 514];
      v41 = v40 * (v20[212] >> 4);
      if ( v41 >= v39 && v41 - v39 < v40 << 8 )
      {
        v31 = -1073741110;
        goto LABEL_28;
      }
    }
    if ( (a3 & 0x20000) != 0 && (unsigned int)(v23 - 5) <= 1 )
    {
      LODWORD(v23) = 6;
    }
    else if ( (_DWORD)v23 != 6 )
    {
LABEL_17:
      if ( (*(_DWORD *)(a1 + 2120) & 0x20) == 0 || (*v20 & 0x400) != 0 )
      {
        v36 = -1;
        v35 = 40LL;
        v34 = 1767337331LL;
      }
      else
      {
        Pool3 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1136) + 16 * ((a3 >> 18) & 0x3F)));
        if ( Pool3 )
          goto LABEL_20;
        v34 = 2002218355LL;
        v35 = 4096LL;
        v36 = ((unsigned int)a3 >> 18) & 0x3F | 0x80000000;
      }
      p_Blink = &stru_140E27C48.Header.WaitListHead.Blink;
      v38 = 1;
      if ( v36 != -1 )
      {
        p_Blink = (struct _LIST_ENTRY **)&v46;
        v38 = 2;
        v47 = 0LL;
        LOBYTE(v47) = 3;
        v46 = *(_OWORD *)&stru_140E27C48.Header.WaitListHead.Blink;
        DWORD2(v47) = v36;
      }
      Pool3 = (PSLIST_ENTRY)ExAllocatePool3(64LL, v35, v34, p_Blink, v38);
      if ( !Pool3 )
      {
        v31 = -1073741670;
        goto LABEL_28;
      }
LABEL_20:
      *(_SLIST_ENTRY **)((char *)&Pool3->Next + 4) = 0LL;
      *((_DWORD *)&Pool3->Next + 3) = 0;
      *((_DWORD *)&Pool3[1].Next + 3) = 0;
      v26 = v23 | *(_DWORD *)(&Pool3->Next + 1) & 0xFFFFFFF8;
      Pool3[1].Next = (_SLIST_ENTRY *)a4;
      v27 = *((_DWORD *)&Pool3->Next + 3);
      v28 = *a2;
      LODWORD(Pool3->Next) = 0;
      *((_DWORD *)&Pool3[1].Next + 2) = v28;
      *((_DWORD *)&Pool3->Next + 2) = v26;
      *((_DWORD *)&Pool3->Next + 3) = v27 ^ ((unsigned __int8)((unsigned int)a3 >> 18) ^ (unsigned __int8)v27) & 0x3F;
      if ( (a3 & 0x10000) != 0 )
        *((_DWORD *)&Pool3->Next + 2) = v26 | 0x80000000;
      Pool3[2].Next = a6;
      v29 = v20[616] & 0x3FF;
      if ( (*(_DWORD *)(a1 + 2120) & 0x20) != 0 && (*v20 & 0x400) == 0 )
      {
        memset_0(&Pool3[2].Next + 1, 0, 0x58uLL);
        *((_QWORD *)&Pool3[7].Next + 1) = Pool3;
        *((_QWORD *)&Pool3[6].Next + 1) = v20;
        if ( (((unsigned int)a3 >> 18) & 0x3F) != *(_DWORD *)(a7 + 16) )
        {
          if ( *(_QWORD *)(a7 + 8) != a7 )
            SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxQueueEntries((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 1120)
                                                                               + 176 * ((a3 >> 18) & 0x3F)));
          *(_DWORD *)(a7 + 16) = ((unsigned int)a3 >> 18) & 0x3F;
        }
        Pool3[7].Next = (_SLIST_ENTRY *)(**(_QWORD **)(a7 + 8) + 1LL);
        **(_QWORD **)(a7 + 8) = Pool3 + 7;
        *(_QWORD *)(a7 + 8) = Pool3 + 7;
        return 259LL;
      }
      v43 = v28;
      v45 = v29;
      v44 = v50;
      v42 = Pool3;
      v31 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, (unsigned __int16 *)&v42, 1u);
      if ( v31 >= 0 )
        return 259LL;
LABEL_28:
      v32 = v20[616] & 0x3FF;
      v33 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)v32 >> 5));
      if ( v33 )
        v8 = (struct _EX_RUNDOWN_REF *)(v33 + 40LL * (v32 & 0x1F));
      ExReleaseRundownProtection_0(v8 + 1);
      if ( Pool3 )
        ExFreePoolWithTag(Pool3, 0);
      goto LABEL_32;
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityTimerStart(a1);
    goto LABEL_17;
  }
LABEL_35:
  v31 = -1073741811;
LABEL_32:
  result = (unsigned int)v31;
  if ( a6 )
  {
    *a6 = 0LL;
    LODWORD(a6->Next) = v31;
  }
  return result;
}
