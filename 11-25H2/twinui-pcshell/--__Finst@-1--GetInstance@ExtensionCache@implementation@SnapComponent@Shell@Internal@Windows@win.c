/*
 * XREFs of ??__Finst@?1??GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV1234567@XZ@YAXXZ @ 0x1806DFC30
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@PEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@PEAU1234@@std@@YAXPEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@QEAU1234@@Z @ 0x1800AA094 (--$_Destroy_range@PEAU-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Win.c)
 */

void __fastcall `winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance'::`2'::`dynamic atexit destructor for 'inst''()
{
  if ( (_QWORD)xmmword_18089E530 )
  {
    std::_Destroy_range<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *>(
      (__int64 *)xmmword_18089E530,
      *((__int64 **)&xmmword_18089E530 + 1));
    std::_Deallocate<16,0>(
      (void *)xmmword_18089E530,
      (const struct std::nothrow_t *)((qword_18089E540 - xmmword_18089E530) & 0xFFFFFFFFFFFFFFF8uLL));
    xmmword_18089E530 = 0uLL;
  }
}
