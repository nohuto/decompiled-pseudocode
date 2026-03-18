/*
 * XREFs of VfDeleteLookasideTree @ 0x140B8FE38
 * Callers:
 *     VfMiscPluginUnload @ 0x140609080 (VfMiscPluginUnload.c)
 * Callees:
 *     VfAvlDeleteAllTreeNodes @ 0x140B73BCC (VfAvlDeleteAllTreeNodes.c)
 */

__int64 VfDeleteLookasideTree()
{
  __int64 result; // rax

  VfAvlDeleteAllTreeNodes(qword_140FFCCB0);
  result = (unsigned int)_InterlockedExchange(&ViLookasideInitialized, 0);
  _InterlockedExchange(&ViLookasideAllocationFailures, 0);
  return result;
}
