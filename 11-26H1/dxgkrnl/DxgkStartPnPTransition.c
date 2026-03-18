/*
 * XREFs of DxgkStartPnPTransition @ 0x14020531C
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9A00 (DpiFdoHandleDevicePower.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_KAEAU_GUID@@PEA_K@Z @ 0x140204300 (-StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_KAEAU_GUID@@PEA_K@Z.c)
 */

char *__fastcall DxgkStartPnPTransition(struct _GUID *a1, char *a2, __int64 a3, unsigned __int64 *a4)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 123), a2, a3, a1, a4);
}
