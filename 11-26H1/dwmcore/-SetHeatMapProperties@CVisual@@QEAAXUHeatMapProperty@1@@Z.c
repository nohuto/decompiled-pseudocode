/*
 * XREFs of ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x18020C960
 * Callers:
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x18020C8AC (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x180214534 (-SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

void __fastcall CVisual::SetHeatMapProperties(__int64 a1, const void *a2)
{
  int v4; // eax
  struct CSparseStorage::AllocatedStorage **v5; // rcx

  v4 = memcmp_0(a2, &`CVisual::SetHeatMapProperties'::`2'::sc_defaultValue, 0x14uLL);
  v5 = (struct CSparseStorage::AllocatedStorage **)(a1 + 216);
  if ( v4 )
    CSparseStorage::SetData(v5, 2, 0x14u, a2);
  else
    *((_DWORD *)*v5 + 1) &= ~0x40000000u;
}
