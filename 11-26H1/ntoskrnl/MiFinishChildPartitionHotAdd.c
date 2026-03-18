/*
 * XREFs of MiFinishChildPartitionHotAdd @ 0x14087BDA0
 * Callers:
 *     MiCompleteMemoryAddition @ 0x140865B8C (MiCompleteMemoryAddition.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     MiComputeCommitThresholds @ 0x1404FA2DC (MiComputeCommitThresholds.c)
 *     MiDeletePartitionPageNode @ 0x140708AD4 (MiDeletePartitionPageNode.c)
 *     MiMergePageNodes @ 0x1407090F4 (MiMergePageNodes.c)
 *     MiMakePartitionMemoryBlock @ 0x14087C5D4 (MiMakePartitionMemoryBlock.c)
 */

void __fastcall MiFinishChildPartitionHotAdd(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rax
  _QWORD *v5; // rbx
  _QWORD **v6; // rcx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  _QWORD *i; // rcx
  __int64 v10; // rax

  v2 = (_QWORD *)*a2;
  v5 = 0LL;
  while ( v2 )
  {
    v5 = v2;
    v2 = (_QWORD *)*v2;
  }
  while ( v5 )
  {
    v6 = (_QWORD **)v5[1];
    v7 = (__int64)v5;
    v8 = v5;
    if ( v6 )
    {
      v5 = (_QWORD *)v5[1];
      for ( i = *v6; i; i = (_QWORD *)*i )
        v5 = i;
    }
    else
    {
      while ( 1 )
      {
        v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v5 || (_QWORD *)*v5 == v8 )
          break;
        v8 = v5;
      }
    }
    RtlAvlRemoveNode(a2, v7);
    v10 = RtlNumberOfSetBitsEx((__int64 *)(v7 + 32));
    if ( (unsigned int)MiMergePageNodes(a1, v7, 0LL, v10) )
      MiDeletePartitionPageNode((PVOID *)v7);
  }
  MiMakePartitionMemoryBlock(a1);
  MiComputeCommitThresholds(a1, 0);
}
