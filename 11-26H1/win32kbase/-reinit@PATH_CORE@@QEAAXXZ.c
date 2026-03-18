/*
 * XREFs of ?reinit@PATH_CORE@@QEAAXXZ @ 0x1401C38C8
 * Callers:
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C2068 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1401ECFAC (-reinit@EPATHOBJ@@IEAAXXZ.c)
 * Callees:
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140045470 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 */

void __fastcall PATH_CORE::reinit(PATH_CORE *this)
{
  PATH_CORE::vFreeBlocks(this);
  *((_DWORD *)this + 12) = 3;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
}
