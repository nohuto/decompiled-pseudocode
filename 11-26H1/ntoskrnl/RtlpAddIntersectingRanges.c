/*
 * XREFs of RtlpAddIntersectingRanges @ 0x1408062AC
 * Callers:
 *     RtlpAddRange @ 0x140B124BC (RtlpAddRange.c)
 * Callees:
 *     RtlpAddToMergedRange @ 0x1408064E0 (RtlpAddToMergedRange.c)
 *     RtlpCopyRangeListEntry @ 0x140AE2B30 (RtlpCopyRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x140AE2D28 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpAddIntersectingRanges(__int64 *a1, __int64 a2, unsigned __int64 *a3, unsigned int a4)
{
  char v4; // r10
  __int64 v7; // rdi
  unsigned __int64 v9; // r9
  unsigned __int64 i; // rcx
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  bool v14; // cf
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _DWORD *v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rsi
  __int64 *v22; // rbx
  __int64 *v23; // rsi
  _QWORD *v24; // rcx
  __int64 *v25; // rax
  __int64 *v26; // rdx
  __int64 v27; // rbp
  __int64 *v28; // rcx
  __int64 **v29; // r8
  __int64 v30; // rdx
  __int64 **v31; // rcx
  __int64 v32; // rdx
  _QWORD *v33; // rax

  v4 = *((_BYTE *)a3 + 33) & 1;
  v7 = a2;
  if ( (a4 & 1) == 0 )
  {
    while ( 1 )
    {
      if ( a1 == (__int64 *)(a2 + 40) )
        goto LABEL_19;
      v9 = a3[1];
      if ( v9 < *(_QWORD *)a2 )
        goto LABEL_19;
      if ( (*(_BYTE *)(a2 + 34) & 1) != 0 )
        break;
      if ( !v4 || (*(_BYTE *)(a2 + 33) & 1) == 0 )
        return 3221226114LL;
LABEL_17:
      a2 = *(_QWORD *)(a2 + 40) - 40LL;
    }
    for ( i = *(_QWORD *)(a2 + 16); ; i = v11[5] )
    {
      v11 = (unsigned __int64 *)(i - 40);
      if ( (unsigned __int64 *)a2 == v11 + 3 )
        goto LABEL_17;
      v12 = *a3;
      v13 = *v11;
      v14 = *a3 < *v11;
      if ( *a3 > *v11 )
      {
        if ( v11[1] < v12 )
          continue;
        v14 = v12 < v13;
      }
      if ( (!v14 || v9 >= v13) && (!v4 || (*((_BYTE *)v11 + 33) & 1) == 0) )
        return 3221226114LL;
    }
  }
LABEL_19:
  if ( (*(_BYTE *)(v7 + 34) & 1) == 0 )
  {
    v16 = RtlpCopyRangeListEntry(v7);
    if ( !v16 )
      return 3221225626LL;
    v17 = v7 + 16;
    if ( (*(_BYTE *)(v7 + 33) & 0x10) != 0 )
    {
      --**(_DWORD **)v17;
      *(_BYTE *)(v7 + 33) &= ~0x10u;
    }
    *(_QWORD *)(v7 + 24) = v7 + 16;
    v18 = (_QWORD *)(v16 + 40);
    *(_QWORD *)v17 = v17;
    *(_WORD *)(v7 + 34) = 1;
    v19 = *(_DWORD **)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
      goto LABEL_42;
    *v18 = v19;
    v18[1] = v17;
    *((_QWORD *)v19 + 1) = v18;
    *(_QWORD *)v17 = v18;
  }
  v20 = *(__int64 **)(v7 + 40);
  v21 = *v20;
  v22 = v20 - 5;
  while ( 1 )
  {
    v23 = (__int64 *)(v21 - 40);
    v24 = v22 + 5;
    if ( a1 == v22 + 5 || a3[1] < *v22 )
      return RtlpAddToMergedRange(v7, a3, a4);
    if ( (*((_BYTE *)v22 + 34) & 1) != 0 )
    {
      v25 = (__int64 *)v22[2];
      v26 = v25 - 5;
      v27 = *v25 - 40;
      if ( v22 + 2 != v25 )
      {
        v28 = (__int64 *)*v25;
        while ( (__int64 *)v28[1] == v25 )
        {
          v29 = (__int64 **)v26[6];
          if ( *v29 != v25 )
            break;
          *v29 = v28;
          v28[1] = (__int64)v29;
          RtlpAddToMergedRange(v7, v26, a4);
          v25 = (__int64 *)(v27 + 40);
          v26 = (__int64 *)v27;
          v28 = *(__int64 **)(v27 + 40);
          v27 = (__int64)(v28 - 5);
          if ( v22 + 2 == v25 )
            goto LABEL_35;
        }
LABEL_42:
        __fastfail(3u);
      }
LABEL_35:
      v30 = v22[5];
      if ( *(__int64 **)(v30 + 8) != v22 + 5 )
        goto LABEL_42;
      v31 = (__int64 **)v22[6];
      if ( *v31 != v22 + 5 )
        goto LABEL_42;
      *v31 = (__int64 *)v30;
      *(_QWORD *)(v30 + 8) = v31;
      RtlpFreeRangeListEntry(v22);
    }
    else
    {
      v32 = *v24;
      if ( *(_QWORD **)(*v24 + 8LL) != v24 )
        goto LABEL_42;
      v33 = (_QWORD *)v22[6];
      if ( (_QWORD *)*v33 != v24 )
        goto LABEL_42;
      *v33 = v32;
      *(_QWORD *)(v32 + 8) = v33;
      RtlpAddToMergedRange(v7, v22, a4);
    }
    v22 = v23;
    v21 = v23[5];
  }
}
