/*
 * XREFs of MiRemovePartitionPages @ 0x14070E330
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiUpdatePhysicalPages @ 0x14070EC74 (MiUpdatePhysicalPages.c)
 */

char __fastcall MiRemovePartitionPages(unsigned __int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r15
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // rsi
  _QWORD *v11; // r12
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rbp
  unsigned __int64 v14; // rdx
  _QWORD *v15; // r13
  _QWORD **v16; // rcx
  _QWORD *v17; // rax
  _QWORD *i; // rcx
  unsigned __int64 j; // rax
  unsigned __int64 v20; // rdx
  __int64 *v21; // rcx
  char v22; // r10
  __int64 v23; // r8
  __int64 *v24; // r9
  bool v25; // zf
  signed __int64 v26; // rdx
  _QWORD *v27; // rdx
  bool v28; // r8
  _QWORD *v29; // rax

  v6 = a4;
  MiUpdatePhysicalPages(*a1, -(__int64)a4, 0LL);
  *(_BYTE *)(*a1 + 12) = 1;
  v7 = *(_QWORD **)(*a1 + 24);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    do
    {
      v9 = v7[3] & 0x3FFFFFFFFFFFFFFFLL;
      if ( v8 < v9 )
      {
        v7 = (_QWORD *)*v7;
      }
      else
      {
        if ( v8 < v7[4] + v9 )
          goto LABEL_8;
        v7 = (_QWORD *)v7[1];
      }
    }
    while ( v7 );
  }
  do
  {
LABEL_8:
    v10 = v7 + 4;
    v11 = v7 + 3;
    v12 = v6;
    v13 = v7;
    v14 = a3 - (v7[3] & 0x3FFFFFFFFFFFFFFFLL);
    v15 = v7;
    if ( v7[4] - v14 <= v6 )
      v12 = v7[4] - v14;
    RtlClearBitsEx((__int64)(v7 + 4), v14, v12);
    a3 += v12;
    *v11 &= ~0x8000000000000000uLL;
    v6 -= v12;
    if ( v6 )
    {
      v16 = (_QWORD **)v7[1];
      v17 = v7;
      if ( v16 )
      {
        v7 = (_QWORD *)v7[1];
        for ( i = *v16; i; i = (_QWORD *)*i )
          v7 = i;
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v17 )
            break;
          v17 = v7;
        }
      }
    }
    j = *v10;
    v20 = *v10;
    if ( !*v10 )
      continue;
    if ( v20 <= 1 )
    {
      if ( v20 != 1 )
        continue;
      j = v13[5];
      if ( _bittest64((const signed __int64 *)j, 0) )
        continue;
LABEL_33:
      RtlAvlRemoveNode((unsigned __int64 *)(*a1 + 24), (__int64)v15);
      v27 = (_QWORD *)a1[4];
      v28 = 0;
      if ( !v27 )
        goto LABEL_40;
      while ( 1 )
      {
        if ( (*v11 & 0x3FFFFFFFFFFFFFFFuLL) < (v27[3] & 0x3FFFFFFFFFFFFFFFuLL) )
        {
          v29 = (_QWORD *)*v27;
          if ( !*v27 )
          {
            v28 = 0;
LABEL_40:
            LOBYTE(j) = RtlAvlInsertNodeEx(a1 + 4, (unsigned __int64)v27, v28, v15);
            goto LABEL_41;
          }
        }
        else
        {
          v29 = (_QWORD *)v27[1];
          if ( !v29 )
          {
            v28 = 1;
            goto LABEL_40;
          }
        }
        v27 = v29;
      }
    }
    if ( j < v20 )
      continue;
    v21 = (__int64 *)v10[1];
    v22 = v20 - 1;
    j = (v20 - 1) >> 6;
    v23 = *v21;
    v24 = &v21[j];
    if ( v21 == v24 )
    {
      v25 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20)) & v23) == 0;
    }
    else
    {
      if ( v23 )
        continue;
      for ( j = (unsigned __int64)(v21 + 1); ; j += 8LL )
      {
        v26 = *(_QWORD *)j;
        if ( (__int64 *)j == v24 )
          break;
        if ( v26 )
          goto LABEL_41;
      }
      v25 = ((0xFFFFFFFFFFFFFFFFuLL >> ~v22) & v26) == 0;
    }
    LOBYTE(j) = v25;
    if ( v25 )
      goto LABEL_33;
LABEL_41:
    ;
  }
  while ( v6 );
  return j;
}
