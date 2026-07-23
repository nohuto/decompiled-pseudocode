/*
 * XREFs of MiAddMdlToPartitionTree @ 0x14070CDE4
 * Callers:
 *     MiPartitionTransferAllocateSmallPages @ 0x140882FB4 (MiPartitionTransferAllocateSmallPages.c)
 * Callees:
 *     MiAddRangeToPartitionTree @ 0x14070CED0 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x14070D5EC (MiClearRangeInPartitionTree.c)
 */

__int64 __fastcall MiAddMdlToPartitionTree(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rsi
  BOOL v4; // r13d
  __int64 v5; // rbx
  __int64 v6; // r15
  unsigned int v7; // ebp
  __int64 v8; // rdi
  bool v10; // zf
  __int64 v11; // rax
  unsigned int v12; // r14d

  v3 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v4 = (a3 & 1) == 0;
  v5 = 0LL;
  v6 = -1LL;
  v7 = 0;
  v8 = 0LL;
  v10 = v3 == 0;
  v11 = a1;
  v12 = 1;
  do
  {
    if ( v10 )
    {
      if ( !v5 )
        return v12;
LABEL_4:
      if ( v12 )
      {
        if ( !(unsigned int)MiAddRangeToPartitionTree(v11, v6, v5, v4) )
        {
          v7 = -1;
          v3 = v8 - v5;
          v5 = 0LL;
          v12 = 0;
LABEL_8:
          v11 = a1;
          goto LABEL_9;
        }
      }
      else
      {
        MiClearRangeInPartitionTree(v11, v6, v5);
      }
      if ( v8 == v3 )
        return v12;
      v5 = 0LL;
      --v7;
      goto LABEL_8;
    }
    if ( v5 )
    {
      v11 = a1;
      if ( *(_QWORD *)(a2 + 8 * v8 + 40) + 1LL != *(_QWORD *)(a2 + 8 * v8 + 48) )
        goto LABEL_4;
      ++v5;
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 8 * v8 + 48);
      v5 = 1LL;
    }
LABEL_9:
    v8 = ++v7;
    v10 = v7 == v3;
  }
  while ( v7 <= v3 );
  return v12;
}
