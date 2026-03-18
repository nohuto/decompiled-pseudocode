/*
 * XREFs of VfDeleteResourceTree @ 0x140C407A4
 * Callers:
 *     VfMiscPluginUnload @ 0x140648190 (VfMiscPluginUnload.c)
 * Callees:
 *     VfAvlDeleteAllTreeNodes @ 0x140C21FA0 (VfAvlDeleteAllTreeNodes.c)
 */

__int64 VfDeleteResourceTree()
{
  __int64 result; // rax

  VfAvlDeleteAllTreeNodes(qword_140FF0060);
  result = (unsigned int)_InterlockedExchange(&ViResourceInitialized, 0);
  _InterlockedExchange(&ViResourceNotTracked, 0);
  return result;
}
