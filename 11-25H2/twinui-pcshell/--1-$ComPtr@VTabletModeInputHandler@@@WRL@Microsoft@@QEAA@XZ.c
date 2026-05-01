/*
 * XREFs of ??1?$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x18050CF68
 * Callers:
 *     _TabletModeInputHandler_CreateInstance_::_1_::dtor$0 @ 0x1806CB378 (_TabletModeInputHandler_CreateInstance_--_1_--dtor$0.c)
 *     _CWRLImpWndProc_TabletModeInputHandler_::s_WndProcBase_::_1_::dtor$0 @ 0x1806CB38A (_CWRLImpWndProc_TabletModeInputHandler_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeInputHandler>::~ComPtr<TabletModeInputHandler>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<TabletModeInputHandler>::InternalRelease(a1);
}
