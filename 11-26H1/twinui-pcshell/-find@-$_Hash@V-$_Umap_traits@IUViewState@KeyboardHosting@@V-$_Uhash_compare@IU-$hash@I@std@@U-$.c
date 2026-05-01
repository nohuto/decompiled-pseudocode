/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180485A78
 * Callers:
 *     ?IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18013E198 (-IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPo.c)
 *     ?IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x18015D320 (-IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z.c)
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180170FA4 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@@Z @ 0x1801909F0 (-GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4CoreInputViewOcclusionKind@Cor.c)
 *     ?OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@UEAAJI@Z @ 0x1801DB710 (-OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@UEAAJI@Z.c)
 *     ?GetPrimaryViewLastRequest@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180221DB0 (-GetPrimaryViewLastRequest@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUCoreKeyboardPositionAnd.c)
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180483380 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180106D00 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@W4CloudPCState@Shell@Internal@Windows@winrt@@@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@1@AEBW4CloudPCState@Shell@Internal@Windows@winrt@@_K@Z @ 0x18013340C (--$_Find_last@W4CloudPCState@Shell@Internal@Windows@winrt@@@-$_Hash@V-$_Umap_traits@W4CloudPCSta.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find(
        _QWORD *a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  _DWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  v7 = std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>>,0>>::_Find_last<enum winrt::Windows::Internal::Shell::CloudPCState>(
         a1,
         v9,
         v6,
         appended)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
