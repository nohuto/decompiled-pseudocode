/*
 * XREFs of ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x1801288F8
 * Callers:
 *     ??_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z @ 0x18045F920 (--_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x18012850C (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18012898C (--1-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x18029A42C (--1-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$less@PEAUHWND__@@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1802B1E5C (--1-$_Tree@V-$_Tmap_traits@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIU.c)
 *     ??1?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1802CAC9C (--1-$_Tree@V-$_Tmap_traits@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$les.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::~TabTipAdapterPolicy(KeyboardHosting::TabTipAdapterPolicy *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 88);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::wstring::_Tidy_deallocate((void **)this + 83);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 616));
  std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>((char *)this + 576);
  std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::~_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>((char *)this + 560);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::~_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>((char *)this + 472);
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((__int64 *)this + 27);
  std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>((char *)this + 88);
  std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>((char *)this + 72);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSessionNotification,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSessionNotification,Microsoft::WRL::FtmBase>(this);
}
