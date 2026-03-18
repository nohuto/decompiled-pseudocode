/*
 * XREFs of DxgkInvalidateQdcCacheOnlyDatabase @ 0x14034A144
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1403495F4 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkHandleCcdDatabaseRequests @ 0x14041A024 (DxgkHandleCcdDatabaseRequests.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x14034A168 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 */

void DxgkInvalidateQdcCacheOnlyDatabase()
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 185), 1);
}
