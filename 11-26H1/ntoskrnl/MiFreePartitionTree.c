/*
 * XREFs of MiFreePartitionTree @ 0x14070DA30
 * Callers:
 *     MiHotAddPartitionMemory @ 0x140882270 (MiHotAddPartitionMemory.c)
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 *     MiPartitionTransferAllocateFinish @ 0x140882BEC (MiPartitionTransferAllocateFinish.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiDeletePartitionPageNode @ 0x14070D788 (MiDeletePartitionPageNode.c)
 *     MiFreePartitionNodePages @ 0x14070D8F4 (MiFreePartitionNodePages.c)
 */

__int64 __fastcall MiFreePartitionTree(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  bool v4; // bl
  int v6; // ebp
  __int64 v10; // rdi
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  v4 = 0;
  v6 = 0;
  while ( 1 )
  {
    v10 = *a2;
    if ( !*a2 )
      return (unsigned int)v6;
    RtlAvlRemoveNode(a2, *a2);
    if ( a4 )
    {
      v6 = MiFreePartitionNodePages(a1, v10, a3);
      if ( v6 < 0 )
        break;
    }
    MiDeletePartitionPageNode((PVOID *)v10);
  }
  v11 = (_QWORD *)*a2;
  if ( !*a2 )
    goto LABEL_10;
  while ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < (v11[3] & 0x3FFFFFFFFFFFFFFFuLL) )
  {
    v12 = (_QWORD *)*v11;
    if ( !*v11 )
      goto LABEL_10;
LABEL_13:
    v11 = v12;
  }
  v12 = (_QWORD *)v11[1];
  if ( v12 )
    goto LABEL_13;
  v4 = 1;
LABEL_10:
  RtlAvlInsertNodeEx(a2, (unsigned __int64)v11, v4, (_QWORD *)v10);
  return (unsigned int)v6;
}
