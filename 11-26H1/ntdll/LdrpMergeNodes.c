/*
 * XREFs of LdrpMergeNodes @ 0x18011927C
 * Callers:
 *     LdrpCondenseGraphRecurse @ 0x180118FA0 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 */

int __fastcall LdrpMergeNodes(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  _QWORD *v14; // rdx
  _QWORD *i; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  _QWORD *v18; // r8
  _QWORD *v19; // rax
  _QWORD **v20; // r8
  _QWORD *v21; // r9
  _QWORD *j; // r10
  _QWORD **v23; // rax
  void *v24; // r8
  PVOID v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _QWORD **v28; // r14
  _QWORD **v29; // rsi
  _QWORD *k; // rdi
  _QWORD **v31; // rax
  PVOID v32; // rcx
  _QWORD *v33; // rdi
  _QWORD *v34; // r8
  __int64 v35; // r9
  PVOID v36; // rcx
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  _QWORD **v39; // rcx
  _QWORD *m; // rdx
  _QWORD **v41; // rax
  _QWORD *v42; // rdx
  _QWORD *v43; // rcx

  LdrpLogInternal(
    "minkernel\\ldr\\ldrddag.c",
    1032,
    (__int64)"LdrpMergeNodes",
    2,
    "Merging a cycle rooted at %wZ.\n",
    *(_QWORD *)a1 - 72LL);
  v4 = *a2;
  do
  {
    v5 = (_QWORD *)*(v4 - 8);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5
      || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5)
      || (*v7 = v6,
          *(_QWORD *)(v6 + 8) = v7,
          LdrpLogInternal(
            "minkernel\\ldr\\ldrddag.c",
            1068,
            (__int64)"LdrpMergeNodes",
            2,
            "Adding cyclic module %wZ.\n",
            v5 - 9),
          *(v5 - 1) = a1,
          v8 = *(_QWORD **)(a1 + 8),
          *v8 != a1) )
    {
      __fastfail(3u);
    }
    v5[1] = v8;
    *v5 = a1;
    *v8 = v5;
    *(_QWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 24) += *((_DWORD *)v4 - 10);
    *((_DWORD *)v4 - 10) = 0;
    *((_DWORD *)v4 - 2) = -5;
    v9 = (_QWORD *)*(v4 - 3);
    v10 = v9;
    do
    {
      v10 = (_QWORD *)*v10;
      v10[3] = a1;
    }
    while ( v10 != v9 );
    v11 = (_QWORD *)*(v4 - 2);
    v12 = v11;
    do
    {
      v12 = (_QWORD *)*v12;
      *(v12 - 1) = a1;
    }
    while ( v12 != v11 );
    v4 = (_QWORD *)*v4;
  }
  while ( v4 );
  v13 = *(_QWORD **)(a1 + 40);
  v14 = v13;
  for ( i = (_QWORD *)*v13; ; i = (_QWORD *)*v14 )
  {
    if ( i[1] == a1 )
    {
      v12 = (_QWORD *)*i;
      *v14 = *i;
      if ( *(_QWORD **)(a1 + 40) == i )
      {
        v12 = 0LL;
        if ( v14 != i )
          v12 = v14;
        *(_QWORD *)(a1 + 40) = v12;
      }
      *i = 0LL;
    }
    else
    {
      v14 = i;
    }
    if ( i == v13 )
      break;
  }
  v16 = *a2;
  do
  {
    while ( 1 )
    {
      v26 = (_QWORD *)*(v16 - 3);
      if ( !v26 )
        break;
      v27 = (_QWORD *)*v26;
      if ( (_QWORD *)*v26 == v26 )
      {
        *(v16 - 3) = 0LL;
      }
      else
      {
        v12 = (_QWORD *)*v27;
        *v26 = *v27;
      }
      if ( !v27 )
        break;
      v17 = v27[1];
      if ( v17 == a1 )
      {
        *v27 = 0LL;
      }
      else
      {
        v18 = *(_QWORD **)(a1 + 40);
        if ( v18 )
        {
          v19 = *(_QWORD **)(a1 + 40);
          while ( 1 )
          {
            v19 = (_QWORD *)*v19;
            if ( v19[1] == v17 )
              break;
            if ( v19 == v18 )
            {
              v12 = (_QWORD *)*v18;
              *v27 = *v18;
              *v18 = v27;
              goto LABEL_36;
            }
          }
          v20 = *(_QWORD ***)(v17 + 48);
          v21 = v27 + 2;
          for ( j = *v20; j != v21; j = (_QWORD *)*j )
            v20 = (_QWORD **)j;
          *v20 = (_QWORD *)*v21;
          if ( *(_QWORD **)(v17 + 48) == v21 )
          {
            v23 = 0LL;
            if ( v20 != v21 )
              v23 = v20;
            *(_QWORD *)(v17 + 48) = v23;
          }
          v24 = v27;
          v25 = LdrpHeap;
          --*(_DWORD *)(v17 + 24);
          LODWORD(v12) = RtlFreeHeap_0(v25, 0, v24);
        }
        else
        {
          *v27 = v27;
LABEL_36:
          *(_QWORD *)(a1 + 40) = v27;
        }
      }
    }
    v16 = (_QWORD *)*v16;
  }
  while ( v16 );
  v28 = *(_QWORD ***)(a1 + 48);
  v29 = v28;
  for ( k = *v28; ; k = *v29 )
  {
    if ( k[1] == a1 )
    {
      *v29 = (_QWORD *)*k;
      if ( *(_QWORD **)(a1 + 48) == k )
      {
        v31 = 0LL;
        if ( v29 != k )
          v31 = v29;
        *(_QWORD *)(a1 + 48) = v31;
      }
      v32 = LdrpHeap;
      --*(_DWORD *)(a1 + 24);
      LODWORD(v12) = RtlFreeHeap_0(v32, 0, k - 2);
    }
    else
    {
      v29 = (_QWORD **)k;
    }
    if ( k == v28 )
      break;
  }
  v33 = *a2;
  do
  {
    while ( 1 )
    {
      v42 = (_QWORD *)*(v33 - 2);
      if ( !v42 )
        break;
      v43 = (_QWORD *)*v42;
      if ( (_QWORD *)*v42 == v42 )
      {
        *(v33 - 2) = 0LL;
      }
      else
      {
        v12 = (_QWORD *)*v43;
        *v42 = *v43;
      }
      if ( !v43 )
        break;
      v34 = v43 - 2;
      v35 = v43[1];
      if ( v35 == a1 )
        goto LABEL_55;
      v37 = *(_QWORD **)(a1 + 48);
      if ( v37 )
      {
        v38 = *(_QWORD **)(a1 + 48);
        while ( 1 )
        {
          v38 = (_QWORD *)*v38;
          if ( v38[1] == v35 )
            break;
          if ( v38 == v37 )
          {
            v12 = (_QWORD *)*v37;
            *v43 = *v37;
            *v37 = v43;
            goto LABEL_68;
          }
        }
        v39 = *(_QWORD ***)(v35 + 40);
        for ( m = *v39; m != v34; m = (_QWORD *)*m )
          v39 = (_QWORD **)m;
        *v39 = (_QWORD *)*v34;
        if ( *(_QWORD **)(v35 + 40) == v34 )
        {
          v41 = 0LL;
          if ( v39 != v34 )
            v41 = v39;
          *(_QWORD *)(v35 + 40) = v41;
        }
LABEL_55:
        v36 = LdrpHeap;
        --*(_DWORD *)(a1 + 24);
        LODWORD(v12) = RtlFreeHeap_0(v36, 0, v34);
      }
      else
      {
        *v43 = v43;
LABEL_68:
        *(_QWORD *)(a1 + 48) = v43;
      }
    }
    v33 = (_QWORD *)*v33;
  }
  while ( v33 );
  return (int)v12;
}
