/*
 * XREFs of build_tree @ 0x18011E880
 * Callers:
 *     _tr_flush_block @ 0x180156884 (_tr_flush_block.c)
 * Callees:
 *     pqdownheap @ 0x18011EAE8 (pqdownheap.c)
 *     gen_bitlen @ 0x18011EBA0 (gen_bitlen.c)
 */

__int64 __fastcall build_tree(int *a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // r14
  int v4; // esi
  int v7; // r8d
  __int64 v8; // rbp
  __int64 v9; // r11
  __int64 i; // rdx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // r10
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r9d
  int v18; // r8d
  int v19; // ebx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rcx
  unsigned __int8 v24; // cl
  __int64 v25; // rcx
  __int64 v26; // r8

  v2 = *(__int64 **)(a2 + 16);
  v3 = *(_QWORD *)a2;
  v4 = -1;
  v7 = 0;
  v8 = *((int *)v2 + 5);
  v9 = *v2;
  a1[1339] = 0;
  a1[1340] = 573;
  if ( (int)v8 > 0 )
  {
    for ( i = 0LL; i < v8; ++i )
    {
      if ( *(_WORD *)(v3 + 4 * i) )
      {
        v11 = a1[1339];
        v4 = v7;
        a1[1339] = v11 + 1;
        a1[v11 + 767] = v7;
        *((_BYTE *)a1 + i + 5364) = 0;
      }
      else
      {
        *(_WORD *)(v3 + 4 * i + 2) = 0;
      }
      ++v7;
    }
  }
  v12 = a1[1339];
  if ( v12 < 2 )
  {
    v13 = v4;
    do
    {
      v14 = v13 + 1;
      v15 = v13 + 1;
      v16 = v4 + 1;
      if ( v4 >= 2 )
      {
        v15 = v13;
        v14 = 0LL;
      }
      v13 = v15;
      v17 = v4 + 1;
      if ( v4 >= 2 )
        v16 = 0;
      a1[1339] = v12 + 1;
      if ( v4 >= 2 )
        v17 = v4;
      a1[v12 + 767] = v16;
      *(_WORD *)(v3 + 4 * v14) = 1;
      *((_BYTE *)a1 + v14 + 5364) = 0;
      --a1[1491];
      if ( v9 )
        a1[1492] -= *(unsigned __int16 *)(v9 + 4 * v14 + 2);
      v12 = a1[1339];
      v4 = v17;
    }
    while ( v12 < 2 );
  }
  *(_DWORD *)(a2 + 8) = v4;
  v18 = a1[1339];
  v19 = v18 / 2;
  if ( v18 / 2 >= 1 )
  {
    do
      pqdownheap(a1, v3, (unsigned int)v19--);
    while ( v19 >= 1 );
    v18 = a1[1339];
  }
  do
  {
    v20 = a1[767];
    a1[767] = a1[v18 + 766];
    a1[1339] = v18 - 1;
    pqdownheap(a1, v3, 1LL);
    v21 = a1[1340];
    v22 = a1[767];
    a1[1340] = v21 - 1;
    a1[v21 + 765] = v20;
    v23 = a1[1340];
    a1[1340] = v23 - 1;
    a1[v23 + 765] = v22;
    *(_WORD *)(v3 + 4LL * (int)v8) = *(_WORD *)(v3 + 4 * v20) + *(_WORD *)(v3 + 4 * v22);
    v24 = *((_BYTE *)a1 + v20 + 5364);
    if ( v24 < *((_BYTE *)a1 + v22 + 5364) )
      v24 = *((_BYTE *)a1 + v22 + 5364);
    *((_BYTE *)a1 + (int)v8 + 5364) = v24 + 1;
    *(_WORD *)(v3 + 4 * v22 + 2) = v8;
    *(_WORD *)(v3 + 4 * v20 + 2) = v8;
    a1[767] = v8;
    LODWORD(v8) = v8 + 1;
    pqdownheap(a1, v3, 1LL);
    v18 = a1[1339];
  }
  while ( v18 >= 2 );
  v26 = a1[1340];
  a1[1340] = v26 - 1;
  a1[v26 + 765] = a1[767];
  gen_bitlen(v25, a2);
  return gen_codes(v3, v4, (__int64)(a1 + 758));
}
