/*
 * XREFs of ?Clear@?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ @ 0x180136754
 * Callers:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1801370A8 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 * Callees:
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800C4514 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 */

CBatchCommand *__fastcall ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Clear(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  CBatchCommand *result; // rax
  CBatchCommand *v5; // rcx

  if ( *(_DWORD *)(a1 + 24) )
  {
    v2 = *(unsigned int *)(a1 + 24);
    v3 = 0LL;
    do
    {
      result = *(CBatchCommand **)a1;
      v5 = *(CBatchCommand **)(v3 + *(_QWORD *)a1);
      if ( v5 )
        result = CBatchCommand::`scalar deleting destructor'(v5);
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
