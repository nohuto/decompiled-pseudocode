/*
 * XREFs of DxgkNotifyAdapterRemoval @ 0x1401E0834
 * Callers:
 *     DpiRemoveAdapter @ 0x1400859EC (DpiRemoveAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1401DF0E8 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkNotifyAdapterRemoval()
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::NotifyAdapterRemoval(Global);
}
