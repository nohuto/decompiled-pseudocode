/*
 * XREFs of DxgkpIsDrtEnabled @ 0x14004D064
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 DxgkpIsDrtEnabled()
{
  return ((__int64 (*)(void))DxgCoreInterface[6])();
}
