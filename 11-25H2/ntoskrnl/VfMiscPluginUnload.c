/*
 * XREFs of VfMiscPluginUnload @ 0x140609080
 * Callers:
 *     <none>
 * Callees:
 *     VfDeleteLookasideTree @ 0x140B8FE38 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140B919A4 (VfDeleteResourceTree.c)
 */

__int64 VfMiscPluginUnload()
{
  if ( (VfRuleClasses & 0x400000) == 0 )
    _InterlockedAnd(&ExpPoolFlags, 0xFFFFFDF9);
  VfDeleteResourceTree();
  return VfDeleteLookasideTree();
}
