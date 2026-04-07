/*
 * XREFs of ??1?$vector@UDWM_CAPTURE_TOKEN@@V?$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAA@XZ @ 0x18007B0F4
 * Callers:
 *     _winrt::Udwm::Transitions::TransitionManager::TransitionManager_::_1_::dtor$4 @ 0x1800E7482 (_winrt--Udwm--Transitions--TransitionManager--TransitionManager_--_1_--dtor$4.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransition_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransition____0___::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransition_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransition____0____::_1_::dtor$1 @ 0x1800E7510 (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--ITransition_std--__ea_1800E7510.c)
 *     _CDisplayAnimatedVisual::CDisplayAnimatedVisual_::_1_::dtor$1 @ 0x1800E7B48 (_CDisplayAnimatedVisual--CDisplayAnimatedVisual_--_1_--dtor$1.c)
 *     _CCaptureManager::StopCapturesForWindow_::_1_::dtor$1 @ 0x1800E8076 (_CCaptureManager--StopCapturesForWindow_--_1_--dtor$1.c)
 *     _CBitmapSource::CBitmapSource_::_1_::dtor$9 @ 0x1800E8C52 (_CBitmapSource--CBitmapSource_--_1_--dtor$9.c)
 *     _CCaptureManager::BuildCaptureWindowVisualExclusionList_::_1_::dtor$3 @ 0x1800E8DAE (_CCaptureManager--BuildCaptureWindowVisualExclusionList_--_1_--dtor$3.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$3 @ 0x1800E8F51 (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DWM_CAPTURE_TOKEN>::~vector<DWM_CAPTURE_TOKEN>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
