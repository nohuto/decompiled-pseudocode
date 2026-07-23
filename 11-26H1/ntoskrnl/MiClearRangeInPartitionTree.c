/*
 * XREFs of MiClearRangeInPartitionTree @ 0x14070D5EC
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x14070CDE4 (MiAddMdlToPartitionTree.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiDeletePartitionPageNode @ 0x14070D788 (MiDeletePartitionPageNode.c)
 */

void __fastcall MiClearRangeInPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // rbx
  __int64 v11; // r8
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 *v14; // rcx
  char v15; // r10
  __int64 v16; // r8
  __int64 *v17; // r9
  bool v18; // zf
  __int64 *i; // rax
  __int64 v20; // rdx

  if ( a3 )
  {
    v3 = a2 & 0x3FFFFFFFFFFC0000LL;
    v4 = a3;
    v5 = a2;
    do
    {
      v7 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v8 = v3 & 0x3FFFFFFFFFFFFFFFLL;
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
              break;
            v7 = (_QWORD *)v7[1];
          }
        }
        while ( v7 );
      }
      v10 = v7 + 4;
      v11 = v7[3] & 0x3FFFFFFFFFFFFFFFLL;
      v12 = v4;
      if ( v11 + v7[4] - v5 <= v4 )
        v12 = v11 + v7[4] - v5;
      RtlClearBitsEx((__int64)(v7 + 4), v5 - v11, v12);
      v7[3] &= ~0x8000000000000000uLL;
      v13 = *v10;
      if ( !*v10 )
        goto LABEL_27;
      if ( v13 <= 1 )
      {
        if ( v13 != 1 || _bittest64((const signed __int64 *)v7[5], 0) )
          goto LABEL_27;
LABEL_26:
        RtlAvlRemoveNode(a1, (__int64)v7);
        MiDeletePartitionPageNode(v7);
        goto LABEL_27;
      }
      v14 = (__int64 *)v7[5];
      v15 = v13 - 1;
      v16 = *v14;
      v17 = &v14[(v13 - 1) >> 6];
      if ( v14 == v17 )
      {
        v18 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v13)) & v16) == 0;
      }
      else
      {
        if ( v16 )
          goto LABEL_27;
        for ( i = v14 + 1; ; ++i )
        {
          v20 = *i;
          if ( i == v17 )
            break;
          if ( v20 )
            goto LABEL_27;
        }
        v18 = ((0xFFFFFFFFFFFFFFFFuLL >> ~v15) & v20) == 0;
      }
      if ( v18 )
        goto LABEL_26;
LABEL_27:
      v5 += v12;
      v3 = v5 ^ (v5 ^ v3) & 0xC000000000000000uLL;
      v4 -= v12;
    }
    while ( v4 );
  }
}
