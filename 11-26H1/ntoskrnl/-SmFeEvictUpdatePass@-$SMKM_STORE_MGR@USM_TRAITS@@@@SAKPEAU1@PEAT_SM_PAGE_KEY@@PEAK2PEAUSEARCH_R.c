/*
 * XREFs of ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x14027FB90
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140441060 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        int *a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  int v6; // ebp
  int v7; // esi
  __int64 v8; // r10
  int v9; // r9d
  unsigned int v10; // r13d
  int v11; // eax
  unsigned int v12; // edi
  __int64 *v13; // rax
  __int64 v14; // r12
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r14
  unsigned int v17; // ecx
  unsigned int v19; // edx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rdx
  struct _EX_RUNDOWN_REF *v25; // r9
  unsigned __int64 v26; // rtt
  __int64 v27; // rcx
  int v30; // [rsp+90h] [rbp+8h]
  unsigned int v31; // [rsp+98h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v32; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+B0h] [rbp+28h]

  v5 = *a2;
  v6 = 0;
  v7 = 0;
  v8 = a1;
  v9 = *a3;
  v10 = 1024;
  v11 = *(_DWORD *)(a5 + 24);
  v12 = *a3 + *a2 - 1;
  v30 = *a3;
  if ( v11 == -1 || !v11 )
    v13 = (__int64 *)(a5 + 8);
  else
    v13 = (__int64 *)(*(_QWORD *)a5 + 16LL * (unsigned int)(v11 - 1));
  v14 = *v13;
  v15 = v13[1] - 8;
  while ( 1 )
  {
    if ( !v14 )
      goto LABEL_20;
    v15 += 8LL;
    if ( v15 >= v14 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v14 + 2) )
    {
      v27 = *(_QWORD *)(v14 + 8);
      if ( v27 )
      {
        v14 = *(_QWORD *)(v14 + 8);
        v15 = v27 + 16;
      }
      v16 = 0LL;
      if ( v27 )
        v16 = v27 + 16;
    }
    else
    {
      v16 = v15;
    }
    if ( !v16 )
      goto LABEL_20;
    v17 = *(_DWORD *)v16;
    if ( v5 < *(_DWORD *)v16 || (*(_BYTE *)(v16 + 7) & 1) != 0 )
      break;
    if ( v10 != 1024 && v10 != *(unsigned __int16 *)(v16 + 4) )
      goto LABEL_21;
    if ( *(_BYTE *)(v16 + 6) == 2 )
    {
      if ( v10 != 1024 )
        goto LABEL_21;
    }
    else
    {
      if ( v7 && v10 == 1024 )
        goto LABEL_21;
      if ( !v6 )
      {
        v19 = *(unsigned __int16 *)(v16 + 4);
        if ( v19 >= 0x400 )
          goto LABEL_39;
        v20 = *(_QWORD *)(v8 + 8 * ((unsigned __int64)*(unsigned __int16 *)(v16 + 4) >> 5));
        if ( !v20 )
          goto LABEL_39;
        v21 = v20 + 40LL * (v19 & 0x1F);
        if ( !v21 )
          goto LABEL_39;
        v22 = v19 | ((*(_WORD *)(v21 + 32) & 0x3F) << 10);
        v31 = v22;
        v23 = *(_QWORD *)(v8 + 8 * ((unsigned __int64)(v19 & 0x3FF) >> 5));
        if ( !v23 )
          goto LABEL_39;
        v24 = v23 + 40LL * (*(_WORD *)(v16 + 4) & 0x1F);
        v34 = v24;
        if ( !v24 )
          goto LABEL_39;
        v25 = (struct _EX_RUNDOWN_REF *)(v24 + 8);
        v32 = (struct _EX_RUNDOWN_REF *)(v24 + 8);
        _m_prefetchw((const void *)(v24 + 8));
        v26 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v26 != _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 8), v26 + 2, v26) )
        {
          if ( !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v24 + 8)) )
            goto LABEL_39;
          v24 = v34;
          v22 = v31;
          v25 = v32;
          v8 = a1;
        }
        if ( (*(_WORD *)(v24 + 32) & 0x3F) != v22 >> 10 )
        {
          ExReleaseRundownProtection_0(v25);
LABEL_39:
          ++v7;
          goto LABEL_21;
        }
        if ( !*(_QWORD *)v24 )
          goto LABEL_39;
        v10 = *(unsigned __int16 *)(v16 + 4);
        v9 = v30;
      }
      *(_BYTE *)(v16 + 6) = 2;
      ++v6;
    }
    if ( ++v7 == v9 )
      goto LABEL_21;
    ++v5;
  }
  if ( v12 < v17 )
  {
LABEL_20:
    v7 = v7 - v5 + v12 + 1;
    goto LABEL_21;
  }
  v7 += v17 - v5;
  if ( (*(_BYTE *)(v16 + 7) & 1) != 0 )
    ++v7;
LABEL_21:
  *a3 = v6;
  *a4 = v7;
  return v10;
}
