/*
 * XREFs of ?reinit@PATH_CORE@@QEAAXXZ @ 0x1401A05E4
 * Callers:
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x14009A2B8 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1401C3BB4 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 * Callees:
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x14000DA60 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 */

void __fastcall PATH_CORE::reinit(PATH_CORE *this)
{
  PATH_CORE::vFreeBlocks(this);
  *((_DWORD *)this + 12) = 3;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
}
