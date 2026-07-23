/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140394870
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1403953B0 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1403ECA98 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1403ED338 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        _DWORD *a1,
        __int64 *a2,
        unsigned int a3)
{
  int v4; // r12d
  unsigned int v5; // eax
  int v6; // r13d
  __int64 v7; // rdi
  unsigned int *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  unsigned int v11; // ebx
  unsigned int v12; // r9d
  __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned int v16; // r11d
  __int64 v17; // rcx
  int v18; // ebx
  unsigned int v20; // edx
  __int64 v21; // rcx
  unsigned int v22; // edi
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r11
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r11
  int v30; // r10d
  unsigned __int64 i; // r8
  _DWORD *v32; // r12
  unsigned __int64 v33; // rsi
  unsigned int *v34; // rsi
  _DWORD *v35; // rdi
  _DWORD **v36; // rax
  __int64 v37; // rax
  unsigned int v38; // ebx
  void **v39; // r13
  int v40; // r9d
  struct NP_CONTEXT::NP_CTX *v41; // rcx
  int *v42; // rax
  unsigned int *v43; // rdx
  int v44; // r15d
  int v45; // eax
  struct NP_CONTEXT::NP_CTX *v46; // rcx
  unsigned int v47; // ebx
  unsigned __int64 v48; // [rsp+20h] [rbp-58h]
  _DWORD *v49; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v50; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v51; // [rsp+90h] [rbp+18h] BYREF
  __int64 v52; // [rsp+98h] [rbp+20h]

  v49 = a1;
  v51 = *((_DWORD *)a2 + 6);
  v48 = *a2;
  v50 = 0;
  v4 = a1[98];
  v5 = a1[99];
  v6 = a1[100];
  v7 = (unsigned int)a1[102];
  v8 = *(unsigned int **)(v48 + 16LL * (v51 - 1) + 8);
  v9 = *(_QWORD *)(v48 + 16LL * (v51 - 1));
  v10 = a3 >> v4;
  v11 = *v8;
  v12 = *v8;
  _BitScanReverse((unsigned int *)&v13, v10);
  v52 = v6 * (a3 & v5);
  v14 = v12 >> v4;
  _BitScanReverse((unsigned int *)&v15, v14);
  v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a1[2 * v13 + 32] + 16 * (v10 ^ (unsigned int)(1 << v13))) + v52 + v7);
  v17 = *(_QWORD *)(16 * (v14 ^ (unsigned int)(1 << v15)) + *(_QWORD *)&a1[2 * v15 + 32]) + v6 * (v11 & v5);
  if ( v16 >= *(_DWORD *)(v17 + v7) )
  {
    if ( v16 > *(_DWORD *)(v17 + v7) )
    {
      if ( (unsigned __int64)v8 < v9 + 4 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v9 - 1) + 4) )
      {
        _mm_lfence();
        v20 = v8[1];
        LODWORD(v21) = v49[98];
        v22 = v49[99];
        v23 = v22 & v20;
        v24 = v20 >> v21;
        v25 = a3 >> v21;
        _BitScanReverse((unsigned int *)&v21, v24);
        _BitScanReverse((unsigned int *)&v26, v25);
        if ( *(_DWORD *)(*(_QWORD *)(16 * (v25 ^ (unsigned int)(1 << v26)) + *(_QWORD *)&v49[2 * v26 + 32])
                       + v49[100] * (a3 & v22)
                       + (unsigned int)v49[102]) >= *(_DWORD *)(*(_QWORD *)(16 * (v24 ^ (unsigned int)(1 << v21))
                                                                          + *(_QWORD *)&v49[2 * v21 + 32])
                                                              + (unsigned int)(v49[100] * v23)
                                                              + (unsigned int)v49[102]) )
          return 0LL;
LABEL_5:
        *v8 = a3;
        return 1LL;
      }
      v18 = 1;
      v30 = 1;
LABEL_13:
      for ( i = v48 + 16 * (v51 - 2LL); ; i -= 16LL )
      {
        if ( i < v48 )
          goto LABEL_5;
        if ( v30 )
        {
          if ( *(_QWORD *)(i + 8) < *(_QWORD *)i + 16 * ((unsigned __int64)(unsigned __int16)**(_DWORD **)i + 1) )
          {
            v34 = *(unsigned int **)(i + 8);
            v32 = *(_DWORD **)i;
LABEL_18:
            if ( v18 > 0 )
            {
              v35 = v49;
              v51 = *v34;
              v50 = a3;
              if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(v49, &v50, &v51) < 0 )
                goto LABEL_5;
              v36 = (_DWORD **)(v35 + 4);
              if ( !v35 )
                v36 = 0LL;
              if ( **v36 == -1 )
              {
                v37 = *(_QWORD *)(v9 + 8);
                LODWORD(v49) = a3;
                v38 = *(_DWORD *)(v37 + 16);
                v51 = v38;
                if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(v35, &v49, &v51) >= 0 )
                  return 0LL;
                *v34 = v38;
                goto LABEL_5;
              }
              v39 = (void **)(v34 + 2);
              v40 = 1;
            }
            else
            {
              if ( !v18 )
              {
                *v34 = a3;
                goto LABEL_5;
              }
              v35 = v49;
              v39 = (void **)(v34 - 2);
              v40 = 0;
              if ( v34 <= v32 + 4 )
                v39 = (void **)(v32 + 2);
            }
            while ( *((_BYTE *)v32 + 2) != 2 )
            {
              v32 = *v39;
              if ( v40 )
                v39 = (void **)(v32 + 2);
              else
                v39 = (void **)&v32[4 * (unsigned __int16)*v32 + 2];
            }
            v41 = (struct NP_CONTEXT::NP_CTX *)(v35 + 4);
            if ( !v35 )
              v41 = 0LL;
            if ( **(_DWORD **)v41 == -1 )
              v42 = (int *)*v39;
            else
              v42 = (int *)NP_CONTEXT::NpLeafRefInternal(v41, v39, 0);
            if ( !v42 )
              return 0xFFFFFFFFLL;
            v43 = (unsigned int *)(v42 + 4);
            v44 = 0;
            if ( v18 >= 0 )
            {
              v47 = *v43;
              v51 = *v43;
              LODWORD(v49) = a3;
              if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(v35, &v49, &v51) < 0 )
              {
                *v34 = v47;
LABEL_42:
                v44 = 1;
              }
            }
            else
            {
              v45 = *v42;
              v51 = a3;
              LODWORD(v49) = v43[(unsigned __int16)v45 - 1];
              if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(v35, &v49, &v51) < 0 )
              {
                *v34 = a3;
                goto LABEL_42;
              }
            }
            v46 = (struct NP_CONTEXT::NP_CTX *)(v35 + 4);
            if ( !v35 )
              v46 = 0LL;
            if ( **(_DWORD **)v46 != -1 )
              NP_CONTEXT::NpLeafDerefInternal(v46, v39);
            if ( v44 )
              goto LABEL_5;
            return 0LL;
          }
        }
        else
        {
          v32 = *(_DWORD **)i;
          v33 = *(_QWORD *)(i + 8);
          if ( v33 > *(_QWORD *)i + 16LL )
          {
            v34 = (unsigned int *)(v33 - 16);
            goto LABEL_18;
          }
        }
      }
    }
    v18 = 0;
  }
  else
  {
    v18 = -1;
  }
  if ( (unsigned __int64)v8 <= v9 + 16 )
  {
    v30 = 0;
    goto LABEL_13;
  }
  if ( !v18 )
    goto LABEL_5;
  v27 = *(v8 - 1) >> v4;
  _BitScanReverse((unsigned int *)&v28, v27);
  _BitScanReverse((unsigned int *)&v29, v10);
  if ( *(_DWORD *)(*(_QWORD *)(16 * (v27 ^ (unsigned int)(1 << v28)) + *(_QWORD *)&v49[2 * v28 + 32])
                 + v6 * (*(v8 - 1) & v5)
                 + v7) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v49[2 * v29 + 32] + 16 * (v10 ^ (unsigned int)(1 << v29)))
                                   + v52
                                   + v7) )
    goto LABEL_5;
  return 0LL;
}
