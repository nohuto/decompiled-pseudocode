/*
 * XREFs of MiDuplicatePartitionNodeTree @ 0x14070D848
 * Callers:
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 * Callees:
 *     MiAddRangeToPartitionTree @ 0x14070CED0 (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x14070D7B4 (MiDeletePartitionPageNodes.c)
 */

__int64 __fastcall MiDuplicatePartitionNodeTree(unsigned __int64 *a1, _QWORD **a2)
{
  _QWORD *v2; // rax
  _QWORD *v4; // rbx
  _QWORD **v5; // rcx
  _QWORD *v6; // r8
  _QWORD *v7; // rax
  _QWORD *i; // rcx

  v2 = *a2;
  v4 = 0LL;
  while ( v2 )
  {
    v4 = v2;
    v2 = (_QWORD *)*v2;
  }
  while ( v4 )
  {
    v5 = (_QWORD **)v4[1];
    v6 = v4;
    v7 = v4;
    if ( v5 )
    {
      v4 = (_QWORD *)v4[1];
      for ( i = *v5; i; i = (_QWORD *)*i )
        v4 = i;
    }
    else
    {
      while ( 1 )
      {
        v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v4 || (_QWORD *)*v4 == v7 )
          break;
        v7 = v4;
      }
    }
    if ( !(unsigned int)MiAddRangeToPartitionTree(a1, v6[3] & 0x3FFFFFFFFFFFFFFFLL, v6[4], 4) )
    {
      MiDeletePartitionPageNodes(a1);
      return 0LL;
    }
  }
  return 1LL;
}
