/*
 * XREFs of ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140045470
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140011BA0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x140147460 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     ?reinit@PATH_CORE@@QEAAXXZ @ 0x1401C38C8 (-reinit@PATH_CORE@@QEAAXXZ.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2174 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x1401FAA10 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 * Callees:
 *     ?freepathalloc@@YAXPEAVPATHALLOC@@@Z @ 0x1400454D0 (-freepathalloc@@YAXPEAVPATHALLOC@@@Z.c)
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
