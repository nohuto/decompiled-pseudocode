/*
 * XREFs of DxgkGetConsoleSessionId @ 0x1402050CC
 * Callers:
 *     TriggerRenderAdapterPairingChangedWnf @ 0x1401D04AC (TriggerRenderAdapterPairingChangedWnf.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1403DB5F0 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 DxgkGetConsoleSessionId()
{
  return *(unsigned int *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 123) + 144LL);
}
