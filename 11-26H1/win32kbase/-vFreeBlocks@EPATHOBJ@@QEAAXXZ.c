/*
 * XREFs of ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x140147460
 * Callers:
 *     <none>
 * Callees:
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140045470 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 */

void __fastcall EPATHOBJ::vFreeBlocks(EPATHOBJ *this)
{
  PATH_CORE::vFreeBlocks((PATH_CORE *)(*((_QWORD *)this + 1) + 24LL));
}
