/*
 * XREFs of DxgkWaitForPnPTransitionDone @ 0x14038BDD4
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140369894 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1403DB5F0 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x14038BE2C (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForPnPTransitionDone(unsigned int a1, char a2, unsigned int a3, int a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8

  Global = DXGGLOBAL::GetGlobal();
  LOBYTE(v9) = a2;
  return DXGSESSIONMGR::WaitForPnPTransitionDone(*((_QWORD *)Global + 123), a1, v9, a3, a4);
}
