/*
 * XREFs of MiAdvanceToLeapAddress @ 0x140436B90
 * Callers:
 *     MiWalkPageTablesEvaluatePte @ 0x140329B60 (MiWalkPageTablesEvaluatePte.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAdvanceToLeapAddress(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned __int64 v6; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  int i; // edi
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 result; // rax
  __int64 j; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // [rsp+0h] [rbp-28h]
  unsigned __int64 v21; // [rsp+8h] [rbp-20h]
  unsigned __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]

  v6 = *(_QWORD *)(a1 + 80);
  if ( a3 && a5 != 3 )
    return a2;
  v9 = 4096LL;
  v10 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = a3; i; --i )
  {
    v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 <<= 9;
  }
  if ( a2 == v10 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    v12 = a3;
LABEL_11:
    if ( v6 )
    {
      v20 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v21 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v22 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      for ( j = v12; ; --j )
      {
        v19 = *(&v20 + j);
        *(_QWORD *)(a1 + 8 * j + 96) = v19;
        if ( j != v12 )
          v19 = a2;
        a2 = v19;
        if ( !j )
          break;
      }
    }
    return a2;
  }
  if ( a2 <= v10 )
  {
    if ( v10 > a4 )
    {
      a2 = a4 + 8;
      v6 = 0LL;
    }
    else
    {
      a2 = v10;
      if ( ((v9 - 1) & v6) == 0 )
        *(_QWORD *)(a1 + 80) = 0LL;
    }
    v12 = a3;
    v13 = a2;
    v14 = a3 + 12LL;
    *(_QWORD *)(a1 + 8 * v14) = a2;
    v15 = (__int64 *)(a1 + 8 * v14);
    if ( a3 )
    {
      v16 = a3;
      do
      {
        --v15;
        v13 = v13 << 25 >> 16;
        *v15 = v13;
        --v16;
      }
      while ( v16 );
    }
    goto LABEL_11;
  }
  result = a2;
  *(_QWORD *)(a1 + 80) = 0LL;
  return result;
}
