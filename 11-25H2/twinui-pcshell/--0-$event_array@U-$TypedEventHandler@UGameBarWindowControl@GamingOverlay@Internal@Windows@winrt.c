/*
 * XREFs of ??0?$event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@I@Z @ 0x180224238
 * Callers:
 *     ??$make_event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1802221E0 (--$make_event_array@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@wi.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@PEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@PEAU1234@@std@@YAXPEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@QEAU1234@@Z @ 0x1800AA094 (--$_Destroy_range@PEAU-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Win.c)
 */

_DWORD *__fastcall winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>(
        _DWORD *a1,
        int a2)
{
  int v2; // esi
  __int64 *v4; // rbx

  *a1 = 1;
  v2 = a2;
  a1[1] = a2;
  if ( a2 )
  {
    v4 = (__int64 *)(a1 + 2);
    do
    {
      *v4 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v4++);
      --v2;
    }
    while ( v2 );
    std::_Destroy_range<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *>(
      v4,
      v4);
  }
  return a1;
}
