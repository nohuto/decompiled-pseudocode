/*
 * XREFs of ??1?$ComPtr@VGhostDivider@@@WRL@Microsoft@@QEAA@XZ @ 0x1802B8278
 * Callers:
 *     _CWRLImpWndProc_GhostDivider_::s_WndProcBase_::_1_::dtor$0 @ 0x1806D9EFD (_CWRLImpWndProc_GhostDivider_--s_WndProcBase_--_1_--dtor$0.c)
 *     _GhostDivider_CreateInstance_::_1_::dtor$0 @ 0x1806DEBAE (_GhostDivider_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_GhostDivider_GhostDivider_IPriviledgedPositioner___&_IApplicationView___&_IImmersiveMonitorManager___&_HWND_____&_enum_GhostDividerPlacement_&_enum_GhostDividerSize_&__::_1_::dtor$2 @ 0x1806DEBC0 (_Microsoft--WRL--Details--MakeAndInitialize_GhostDivider_GhostDivider_IPriviledgedP_ea_1806DEBC0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<GhostDivider>::~ComPtr<GhostDivider>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<GhostDivider>::InternalRelease(a1);
}
