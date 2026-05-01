/*
 * XREFs of ??1?$ComPtr@VDragInputHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1804C24D0
 * Callers:
 *     _CWRLImpWndProc_DragInputHandler_::s_WndProcBase_::_1_::dtor$0 @ 0x1806C9860 (_CWRLImpWndProc_DragInputHandler_--s_WndProcBase_--_1_--dtor$0.c)
 *     _DragInputHandler_CreateInstance_::_1_::dtor$0 @ 0x1806C9872 (_DragInputHandler_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<DragInputHandler>::~ComPtr<DragInputHandler>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(a1);
}
