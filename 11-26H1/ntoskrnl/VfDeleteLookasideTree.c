/*
 * XREFs of VfDeleteLookasideTree @ 0x140C3EC28
 * Callers:
 *     VfMiscPluginUnload @ 0x140648190 (VfMiscPluginUnload.c)
 * Callees:
 *     VfAvlDeleteAllTreeNodes @ 0x140C21FA0 (VfAvlDeleteAllTreeNodes.c)
 */

__int64 VfDeleteLookasideTree()
{
  __int64 result; // rax

  VfAvlDeleteAllTreeNodes(Table);
  result = (unsigned int)_InterlockedExchange(&ViLookasideInitialized, 0);
  _InterlockedExchange(&ViLookasideAllocationFailures, 0);
  return result;
}
