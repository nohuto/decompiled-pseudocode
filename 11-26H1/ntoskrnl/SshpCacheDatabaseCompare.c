/*
 * XREFs of SshpCacheDatabaseCompare @ 0x140A89C50
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall SshpCacheDatabaseCompare(_RTL_AVL_TABLE *a1, _QWORD *a2, _QWORD *a3)
{
  _DWORD *TableContext; // rbx
  unsigned int v4; // edi
  int v5; // ecx
  __int128 *v6; // r15
  __int128 *v7; // r14
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // ebx
  unsigned int v15; // r12d
  int v16; // esi
  bool v17; // sf
  unsigned __int16 *v19; // rax
  unsigned __int16 *v20; // rcx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rsi
  const void *v23; // rdx
  const void *v24; // r9
  SIZE_T v25; // rbx
  SIZE_T v26; // rax
  int *v27; // r9
  __int64 v28; // rdx
  unsigned __int16 v29; // ax
  bool v30; // cf
  unsigned int v31; // ecx
  unsigned int v32; // r8d
  unsigned int v33; // r10d
  unsigned int v34; // r11d
  __int64 v35; // [rsp+20h] [rbp-49h]
  __int64 v36; // [rsp+28h] [rbp-41h]
  __int128 v37; // [rsp+30h] [rbp-39h] BYREF
  __int128 v38; // [rsp+40h] [rbp-29h]
  __int128 v39; // [rsp+50h] [rbp-19h]
  __int128 v40; // [rsp+60h] [rbp-9h] BYREF
  __int128 v41; // [rsp+70h] [rbp+7h]
  __int128 v42; // [rsp+80h] [rbp+17h]

  TableContext = a1->TableContext;
  v4 = 0;
  v5 = *(_DWORD *)a2;
  v6 = 0LL;
  v7 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = &v37;
      v8 = *(_QWORD *)(a2[1] + 304LL);
      v9 = *(_OWORD *)(v8 + 64);
      v10 = *(_OWORD *)(v8 + 48);
      *(_QWORD *)&v39 = v8 + 80;
      *((_QWORD *)&v39 + 1) = *(_QWORD *)(v8 + 96);
      v37 = v9;
      v38 = v10;
    }
  }
  else
  {
    v6 = (__int128 *)a2[1];
  }
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      v7 = &v40;
      v11 = *(_QWORD *)(a3[1] + 304LL);
      v12 = *(_OWORD *)(v11 + 64);
      v13 = *(_OWORD *)(v11 + 48);
      *(_QWORD *)&v42 = v11 + 80;
      *((_QWORD *)&v42 + 1) = *(_QWORD *)(v11 + 96);
      v40 = v12;
      v41 = v13;
    }
  }
  else
  {
    v7 = (__int128 *)a3[1];
  }
  v14 = TableContext[11];
  v15 = 16;
  if ( (v14 & 1) != 0 && (v16 = memcmp(v6, v7, 0x10uLL)) != 0
    || (v14 & 2) != 0 && (v16 = memcmp(v6 + 1, v7 + 1, 0x10uLL)) != 0 )
  {
LABEL_10:
    v17 = v16 < 0;
    goto LABEL_11;
  }
  if ( (v14 & 4) == 0 )
    return 2;
  v19 = (unsigned __int16 *)*((_QWORD *)v7 + 4);
  v20 = (unsigned __int16 *)*((_QWORD *)v6 + 4);
  v21 = (unsigned __int64)*v19 >> 1;
  v36 = *((_QWORD *)v19 + 1);
  v22 = (unsigned __int64)*v20 >> 1;
  v35 = *((_QWORD *)v20 + 1);
  PsGetCurrentServerSiloGlobals();
  v25 = v22;
  if ( v22 > v21 )
    v25 = v21;
  v26 = RtlCompareMemory(v24, v23, 2 * v25) >> 1;
  if ( v26 >= v25 )
    v16 = v22 - v21;
  else
    v16 = *(unsigned __int16 *)(v35 + 2 * v26) - *(unsigned __int16 *)(v36 + 2 * v26);
  v17 = v16 < 0;
  if ( !v16 )
  {
    v27 = (int *)*((_QWORD *)v6 + 5);
    v28 = *((_QWORD *)v7 + 5);
    if ( !v27 )
    {
      if ( v28 )
        return 1;
      return 2;
    }
    if ( !v28 )
      return v4;
    v29 = *(_WORD *)(v28 + 4);
    v30 = *((_WORD *)v27 + 2) < v29;
    if ( *((_WORD *)v27 + 2) != v29
      || (v31 = *v27, v30 = (unsigned int)*v27 < *(_DWORD *)v28, *v27 != *(_DWORD *)v28)
      || (v32 = v27[2], v30 = v32 < *(_DWORD *)(v28 + 8), v32 != *(_DWORD *)(v28 + 8)) )
    {
LABEL_41:
      if ( v30 )
        return v4;
      return 1;
    }
    v33 = 0;
    if ( 4 * v31 + 12 > 0x10 )
      v15 = 4 * v31 + 12;
    while ( v33 < v31 )
    {
      v34 = v27[v33 + 3];
      v30 = v34 < *(_DWORD *)(v28 + 4LL * v33 + 12);
      if ( v34 != *(_DWORD *)(v28 + 4LL * v33 + 12) )
        goto LABEL_41;
      v32 += v34;
      ++v33;
    }
    v16 = memcmp((char *)v27 + v15, (const void *)(v15 + v28), 2 * v32);
    if ( !v16 )
      return 2;
    goto LABEL_10;
  }
LABEL_11:
  if ( !v17 )
  {
    if ( v16 > 0 )
      return 1;
    return 2;
  }
  return v4;
}
