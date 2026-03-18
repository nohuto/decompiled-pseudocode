/*
 * XREFs of ??1PATH_CORE@@QEAA@XZ @ 0x14000DA40
 * Callers:
 *     <none>
 * Callees:
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x14000DA60 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 */

void __fastcall PATH_CORE::~PATH_CORE(PATH_CORE *this)
{
  PATH_CORE::vFreeBlocks(this);
}
