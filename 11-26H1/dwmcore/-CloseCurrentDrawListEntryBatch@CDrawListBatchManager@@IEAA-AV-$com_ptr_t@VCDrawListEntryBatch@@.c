/*
 * XREFs of ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180070EC0
 * Callers:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1801370A8 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 * Callees:
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x1800701A0 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 */

_QWORD *__fastcall CDrawListBatchManager::CloseCurrentDrawListEntryBatch(__int64 a1, _QWORD *a2)
{
  CBatchOptimizer *v4; // rcx
  __int64 v5; // rcx
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 128) )
  {
    v4 = *(CBatchOptimizer **)(a1 + 136);
    if ( v4 )
      CBatchOptimizer::Flush(v4);
    v5 = *(_QWORD *)(a1 + 128);
    *(_DWORD *)(v5 + 44) = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(v5 + 32) = 0LL;
    *a2 = *(_QWORD *)(a1 + 128);
    result = a2;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  else
  {
    result = a2;
    *a2 = 0LL;
  }
  return result;
}
