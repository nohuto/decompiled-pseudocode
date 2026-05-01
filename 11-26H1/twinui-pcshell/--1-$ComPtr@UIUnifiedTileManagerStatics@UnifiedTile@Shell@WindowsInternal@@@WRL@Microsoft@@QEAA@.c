/*
 * XREFs of ??1?$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x1801AE19C
 * Callers:
 *     _CPinnedList::_ShouldAddMenu_::_1_::dtor$0 @ 0x1806CDE29 (_CPinnedList--_ShouldAddMenu_--_1_--dtor$0.c)
 *     _CPinnedList::v_IsAcceptableTarget_::_1_::dtor$0 @ 0x1806CDE4D (_CPinnedList--v_IsAcceptableTarget_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$0 @ 0x1806CDE5F (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$0.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$4 @ 0x1806CDE71 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$4.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$1 @ 0x1806CE903 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$1.c)
 *     _ConvertWICBitmapToHBITMAP_::_1_::dtor$1 @ 0x1806CE915 (_ConvertWICBitmapToHBITMAP_--_1_--dtor$1.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$0 @ 0x1806CE927 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$0.c)
 *     _DDAScreenCapture::GetScreenCaptureAsWicBitmapSource_::_1_::dtor$9 @ 0x1806CE94B (_DDAScreenCapture--GetScreenCaptureAsWicBitmapSource_--_1_--dtor$9.c)
 *     _ConvertHBITMAPToWICBitmap_::_1_::dtor$1 @ 0x1806CE95D (_ConvertHBITMAPToWICBitmap_--_1_--dtor$1.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$3 @ 0x1806D2133 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile_::_1_::dtor$2 @ 0x1806D4AE9 (_CLauncherTipContextMenu--AddMissingLinksFromDefaultProfile_--_1_--dtor$2.c)
 *     _LoadImageWithWIC_::_1_::dtor$0 @ 0x1806D4B0D (_LoadImageWithWIC_--_1_--dtor$0.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::Streams::IRandomAccessStream____Windows::Foundation::IAsyncOperation_Windows::Storage::Streams::IRandomAccessStream______::_1_::dtor$0 @ 0x1806E8D24 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Storage--Stream.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$0 @ 0x1806E8D70 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$0.c)
 *     _GetStreamOfWICBitmapSourceWithOptions_::_1_::dtor$0 @ 0x1806E8DA6 (_GetStreamOfWICBitmapSourceWithOptions_--_1_--dtor$0.c)
 *     _details::ObjectArrayAdapterImpl_IPenWorkspaceLayoutItem_Microsoft::WRL::ComPtr_IPenWorkspaceLayoutItem___::Iterator::Iterator_::_1_::dtor$0 @ 0x1806E8F15 (_details--ObjectArrayAdapterImpl_IPenWorkspaceLayoutItem_Microsoft--WRL--ComPtr_IPenWorkspaceLay.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetMRUApps_::_1_::dtor$2 @ 0x1806E8F4F (_PenWorkspace--Discover--RecentAppsCache--GetMRUApps_--_1_--dtor$2.c)
 *     _PenWorkspace::Discover::UTMIconLoader::GetIcon_::_1_::dtor$1 @ 0x1806E90E1 (_PenWorkspace--Discover--UTMIconLoader--GetIcon_--_1_--dtor$1.c)
 *     _PenWorkspace::Discover::UTMIconLoader::GetIcon_::_1_::dtor$2 @ 0x1806E90F3 (_PenWorkspace--Discover--UTMIconLoader--GetIcon_--_1_--dtor$2.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$1 @ 0x180700382 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$1.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$4 @ 0x180705C95 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$4.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$10 @ 0x180705F3F (_CPinnedList--InternalModify_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileManagerStatics>::~ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileManagerStatics>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
