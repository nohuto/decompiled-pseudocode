/*
 * XREFs of VfMiscPluginUnload @ 0x140648190
 * Callers:
 *     <none>
 * Callees:
 *     VfDeleteLookasideTree @ 0x140C3EC28 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140C407A4 (VfDeleteResourceTree.c)
 */

__int64 VfMiscPluginUnload()
{
  if ( (VfRuleClasses & 0x400000) == 0 )
    _InterlockedAnd64(&ExpPoolFlags, 0xFFFFFFFFFFFFFDF9uLL);
  VfDeleteResourceTree();
  return VfDeleteLookasideTree();
}
