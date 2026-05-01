/*
 * XREFs of ??1?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D167C
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x1801D40D0 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 *     _CApplicationViewManager::AddWin32ApplicationView_::_1_::dtor$0 @ 0x1806A5CC2 (_CApplicationViewManager--AddWin32ApplicationView_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetOwnerAppView_::_1_::dtor$0 @ 0x1806BA1F8 (_CApplicationViewManager--GetOwnerAppView_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetSwitchWindow_::_1_::dtor$0 @ 0x1806BA20A (_CApplicationViewManager--GetSwitchWindow_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CWin32ApplicationView>::~ComPtr<CWin32ApplicationView>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(a1);
}
