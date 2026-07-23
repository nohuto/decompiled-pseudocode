/*
 * XREFs of VfAvlInitializeTree @ 0x140644788
 * Callers:
 *     ViIovInitialization @ 0x140C30C7C (ViIovInitialization.c)
 *     VfMiscPluginEntry @ 0x140C43630 (VfMiscPluginEntry.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x140C280DC (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(void *a1)
{
  return VfAvlInitializeTreeEx(a1);
}
