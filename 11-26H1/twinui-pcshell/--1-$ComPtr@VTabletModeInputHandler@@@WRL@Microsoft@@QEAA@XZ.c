/*
 * XREFs of ??1?$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x18052F560
 * Callers:
 *     _TabletModeInputHandler_CreateInstance_::_1_::dtor$0 @ 0x1806F38F3 (_TabletModeInputHandler_CreateInstance_--_1_--dtor$0.c)
 *     _CWRLImpWndProc_TabletModeInputHandler_::s_WndProcBase_::_1_::dtor$0 @ 0x1806F3905 (_CWRLImpWndProc_TabletModeInputHandler_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeInputHandler>::~ComPtr<TabletModeInputHandler>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<TabletModeInputHandler>::InternalRelease(a1);
}
