/*
 * XREFs of VfAvlInitializeTree @ 0x140640BA8
 * Callers:
 *     ViIovInitialization @ 0x140C2AC6C (ViIovInitialization.c)
 *     VfMiscPluginEntry @ 0x140C3D620 (VfMiscPluginEntry.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x140C220CC (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(void *a1)
{
  return VfAvlInitializeTreeEx(a1);
}
