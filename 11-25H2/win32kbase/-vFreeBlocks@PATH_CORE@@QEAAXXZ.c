/*
 * XREFs of ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x14000DA60
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x14000D9B0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1PATH_CORE@@QEAA@XZ @ 0x14000DA40 (--1PATH_CORE@@QEAA@XZ.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140085D1C (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x140127360 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     ?reinit@PATH_CORE@@QEAAXXZ @ 0x1401A05E4 (-reinit@PATH_CORE@@QEAAXXZ.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1401C3B50 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 * Callees:
 *     ?freepathalloc@@YAXPEAVPATHALLOC@@@Z @ 0x14000DAF0 (-freepathalloc@@YAXPEAVPATHALLOC@@@Z.c)
 */

void __fastcall PATH_CORE::vFreeBlocks(PATH_CORE *this)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rdi

  v2 = *(_DWORD **)this;
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD **)v2;
      if ( v2[4] == 4032 )
        freepathalloc(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
