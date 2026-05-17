/*
 * XREFs of LdrpMergeNodes @ 0x1801194CC
 * Callers:
 *     LdrpCondenseGraphRecurse @ 0x1801191F0 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 */

_QWORD *__fastcall LdrpMergeNodes(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *result; // rax
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
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  _QWORD **v26; // r14
  _QWORD **v27; // rsi
  _QWORD *k; // rdi
  _QWORD **v29; // rax
  _QWORD *v30; // rdi
  _QWORD *v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  _QWORD **v35; // rcx
  _QWORD *m; // rdx
  _QWORD **v37; // rax
  _QWORD *v38; // rdx
  _QWORD *v39; // rcx

  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrddag.c",
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
            (int)"minkernel\\ldr\\ldrddag.c",
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
    result = v11;
    do
    {
      result = (_QWORD *)*result;
      *(result - 1) = a1;
    }
    while ( result != v11 );
    v4 = (_QWORD *)*v4;
  }
  while ( v4 );
  v13 = *(_QWORD **)(a1 + 40);
  v14 = v13;
  for ( i = (_QWORD *)*v13; ; i = (_QWORD *)*v14 )
  {
    if ( i[1] == a1 )
    {
      result = (_QWORD *)*i;
      *v14 = *i;
      if ( *(_QWORD **)(a1 + 40) == i )
      {
        result = 0LL;
        if ( v14 != i )
          result = v14;
        *(_QWORD *)(a1 + 40) = result;
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
      v24 = (_QWORD *)*(v16 - 3);
      if ( !v24 )
        break;
      v25 = (_QWORD *)*v24;
      if ( (_QWORD *)*v24 == v24 )
      {
        *(v16 - 3) = 0LL;
      }
      else
      {
        result = (_QWORD *)*v25;
        *v24 = *v25;
      }
      if ( !v25 )
        break;
      v17 = v25[1];
      if ( v17 == a1 )
      {
        *v25 = 0LL;
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
              result = (_QWORD *)*v18;
              *v25 = *v18;
              *v18 = v25;
              goto LABEL_36;
            }
          }
          v20 = *(_QWORD ***)(v17 + 48);
          v21 = v25 + 2;
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
          --*(_DWORD *)(v17 + 24);
          result = (_QWORD *)RtlFreeHeap_0();
        }
        else
        {
          *v25 = v25;
LABEL_36:
          *(_QWORD *)(a1 + 40) = v25;
        }
      }
    }
    v16 = (_QWORD *)*v16;
  }
  while ( v16 );
  v26 = *(_QWORD ***)(a1 + 48);
  v27 = v26;
  for ( k = *v26; ; k = *v27 )
  {
    if ( k[1] == a1 )
    {
      *v27 = (_QWORD *)*k;
      if ( *(_QWORD **)(a1 + 48) == k )
      {
        v29 = 0LL;
        if ( v27 != k )
          v29 = v27;
        *(_QWORD *)(a1 + 48) = v29;
      }
      --*(_DWORD *)(a1 + 24);
      result = (_QWORD *)RtlFreeHeap_0();
    }
    else
    {
      v27 = (_QWORD **)k;
    }
    if ( k == v26 )
      break;
  }
  v30 = *a2;
  do
  {
    while ( 1 )
    {
      v38 = (_QWORD *)*(v30 - 2);
      if ( !v38 )
        break;
      v39 = (_QWORD *)*v38;
      if ( (_QWORD *)*v38 == v38 )
      {
        *(v30 - 2) = 0LL;
      }
      else
      {
        result = (_QWORD *)*v39;
        *v38 = *v39;
      }
      if ( !v39 )
        break;
      v31 = v39 - 2;
      v32 = v39[1];
      if ( v32 == a1 )
        goto LABEL_55;
      v33 = *(_QWORD **)(a1 + 48);
      if ( v33 )
      {
        v34 = *(_QWORD **)(a1 + 48);
        while ( 1 )
        {
          v34 = (_QWORD *)*v34;
          if ( v34[1] == v32 )
            break;
          if ( v34 == v33 )
          {
            result = (_QWORD *)*v33;
            *v39 = *v33;
            *v33 = v39;
            goto LABEL_68;
          }
        }
        v35 = *(_QWORD ***)(v32 + 40);
        for ( m = *v35; m != v31; m = (_QWORD *)*m )
          v35 = (_QWORD **)m;
        *v35 = (_QWORD *)*v31;
        if ( *(_QWORD **)(v32 + 40) == v31 )
        {
          v37 = 0LL;
          if ( v35 != v31 )
            v37 = v35;
          *(_QWORD *)(v32 + 40) = v37;
        }
LABEL_55:
        --*(_DWORD *)(a1 + 24);
        result = (_QWORD *)RtlFreeHeap_0();
      }
      else
      {
        *v39 = v39;
LABEL_68:
        *(_QWORD *)(a1 + 48) = v39;
      }
    }
    v30 = (_QWORD *)*v30;
  }
  while ( v30 );
  return result;
}
