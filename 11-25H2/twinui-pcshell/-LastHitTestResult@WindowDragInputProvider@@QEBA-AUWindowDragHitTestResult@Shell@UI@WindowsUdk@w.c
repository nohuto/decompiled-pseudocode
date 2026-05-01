/*
 * XREFs of ?LastHitTestResult@WindowDragInputProvider@@QEBA?AUWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@XZ @ 0x18059B950
 * Callers:
 *     ?GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA?AV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@XZ @ 0x18058FD88 (-GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA-AV-$vector@URect@Foundation@Windows@@V-$allocat.c)
 *     ?GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA?AV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@XZ @ 0x18058FE78 (-GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA-AV-$vector@USuggestedWindowPosition@Shell@UI@W.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall WindowDragInputProvider::LastHitTestResult(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 56);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  return a2;
}
