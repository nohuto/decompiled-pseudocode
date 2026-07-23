/*
 * XREFs of VfMiscPluginUnload @ 0x14064BD70
 * Callers:
 *     <none>
 * Callees:
 *     VfDeleteLookasideTree @ 0x140C44C38 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140C467B4 (VfDeleteResourceTree.c)
 */

__int64 VfMiscPluginUnload()
{
  if ( (VfRuleClasses & 0x400000) == 0 )
    _InterlockedAnd64(&ExpPoolFlags, 0xFFFFFFFFFFFFFDF9uLL);
  VfDeleteResourceTree();
  return VfDeleteLookasideTree();
}
