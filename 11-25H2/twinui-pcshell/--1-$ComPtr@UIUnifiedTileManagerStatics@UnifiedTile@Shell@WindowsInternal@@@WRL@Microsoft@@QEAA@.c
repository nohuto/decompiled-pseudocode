/*
 * XREFs of ??1?$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B4C74
 * Callers:
 *     _CPinnedList::_ShouldAddMenu_::_1_::dtor$0 @ 0x1806A58AB (_CPinnedList--_ShouldAddMenu_--_1_--dtor$0.c)
 *     _CPinnedList::v_IsAcceptableTarget_::_1_::dtor$0 @ 0x1806A58CF (_CPinnedList--v_IsAcceptableTarget_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$1 @ 0x1806A58E1 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$1.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$4 @ 0x1806A58F3 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$4.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$3 @ 0x1806A59E6 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$3.c)
 *     __lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator()_::_1_::dtor$3 @ 0x1806A5A1C (__lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator()_--_1_--dtor$3.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$0 @ 0x1806A5A2E (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$0.c)
 *     _DDAScreenCapture::GetScreenCaptureAsWicBitmapSource_::_1_::dtor$9 @ 0x1806A5A40 (_DDAScreenCapture--GetScreenCaptureAsWicBitmapSource_--_1_--dtor$9.c)
 *     _CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile_::_1_::dtor$2 @ 0x1806A5A52 (_CLauncherTipContextMenu--AddMissingLinksFromDefaultProfile_--_1_--dtor$2.c)
 *     _LoadImageWithWIC_::_1_::dtor$0 @ 0x1806AE5BC (_LoadImageWithWIC_--_1_--dtor$0.c)
 *     _ConvertHBITMAPToWICBitmap_::_1_::dtor$1 @ 0x1806AE5CE (_ConvertHBITMAPToWICBitmap_--_1_--dtor$1.c)
 *     _ConvertWICBitmapToHBITMAP_::_1_::dtor$1 @ 0x1806AE5E0 (_ConvertWICBitmapToHBITMAP_--_1_--dtor$1.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::Streams::IRandomAccessStream____Windows::Foundation::IAsyncOperation_Windows::Storage::Streams::IRandomAccessStream______::_1_::dtor$0 @ 0x1806C0D24 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Storage--Stream.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$0 @ 0x1806C0DAE (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$0.c)
 *     _GetStreamOfWICBitmapSourceWithOptions_::_1_::dtor$0 @ 0x1806C0DE4 (_GetStreamOfWICBitmapSourceWithOptions_--_1_--dtor$0.c)
 *     _details::ObjectArrayAdapterImpl_IPenWorkspaceLayoutItem_Microsoft::WRL::ComPtr_IPenWorkspaceLayoutItem___::Iterator::Iterator_::_1_::dtor$0 @ 0x1806C0F7F (_details--ObjectArrayAdapterImpl_IPenWorkspaceLayoutItem_Microsoft--WRL--ComPtr_IPenWorkspaceLay.c)
 *     _PenWorkspace::Discover::UTMIconLoader::GetIcon_::_1_::dtor$2 @ 0x1806C0FB9 (_PenWorkspace--Discover--UTMIconLoader--GetIcon_--_1_--dtor$2.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$10 @ 0x1806C114B (_CPinnedList--InternalModify_--_1_--dtor$10.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$1 @ 0x1806D7D3A (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$1.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$4 @ 0x1806DD04A (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$4.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$17 @ 0x1806DD2F4 (_GetPidlsFromTaskbarLayout_--_1_--dtor$17.c)
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
